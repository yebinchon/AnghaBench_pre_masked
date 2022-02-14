
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef scalar_t__ u32 ;
typedef int sqlite3_int64 ;
struct TYPE_13__ {int mallocFailed; } ;
typedef TYPE_1__ sqlite3 ;
struct TYPE_15__ {TYPE_1__* db; } ;
struct TYPE_14__ {int nSrc; scalar_t__ nAlloc; TYPE_11__* a; } ;
struct TYPE_12__ {int iCursor; } ;
typedef TYPE_2__ SrcList ;
typedef TYPE_3__ Parse ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_11__*,int ,int) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_3 (TYPE_3__*,char*,int) ;

SrcList *FUNC_4(
  Parse *VAR_1,
  SrcList *VAR_2,
  int VAR_3,
  int VAR_4
){
  int VAR_5;


  FUNC_0( VAR_4>=0 );
  FUNC_0( VAR_3>=1 );
  FUNC_0( VAR_2!=0 );
  FUNC_0( VAR_4<=VAR_2->nSrc );


  if( (u32)VAR_2->nSrc+VAR_3>VAR_2->nAlloc ){
    SrcList *VAR_6;
    sqlite3_int64 VAR_7 = 2*(sqlite3_int64)VAR_2->nSrc+VAR_3;
    sqlite3 *VAR_8 = VAR_1->db;

    if( VAR_2->nSrc+VAR_3>=VAR_0 ){
      FUNC_3(VAR_1, "too many FROM clause terms, max: %d",
                      VAR_0);
      return 0;
    }
    if( VAR_7>VAR_0 ) VAR_7 = VAR_0;
    VAR_6 = FUNC_2(VAR_8, VAR_2,
               sizeof(*VAR_2) + (VAR_7-1)*sizeof(VAR_2->a[0]) );
    if( VAR_6==0 ){
      FUNC_0( VAR_8->mallocFailed );
      return 0;
    }
    VAR_2 = VAR_6;
    VAR_2->nAlloc = VAR_7;
  }



  for(VAR_5=VAR_2->nSrc-1; VAR_5>=VAR_4; VAR_5--){
    VAR_2->a[VAR_5+VAR_3] = VAR_2->a[VAR_5];
  }
  VAR_2->nSrc += VAR_3;


  FUNC_1(&VAR_2->a[VAR_4], 0, sizeof(VAR_2->a[0])*VAR_3);
  for(VAR_5=VAR_4; VAR_5<VAR_4+VAR_3; VAR_5++){
    VAR_2->a[VAR_5].iCursor = -1;
  }


  return VAR_2;
}
