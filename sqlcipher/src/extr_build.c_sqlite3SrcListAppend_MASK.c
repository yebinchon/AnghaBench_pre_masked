
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct SrcList_item {int iCursor; void* zDatabase; void* zName; } ;
typedef int sqlite3 ;
struct TYPE_15__ {scalar_t__ z; } ;
typedef TYPE_1__ Token ;
struct TYPE_17__ {int * db; } ;
struct TYPE_16__ {int nAlloc; int nSrc; struct SrcList_item* a; } ;
typedef TYPE_2__ SrcList ;
typedef TYPE_3__ Parse ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct SrcList_item*,int ,int) ;
 TYPE_2__* FUNC_2 (int *,int) ;
 void* FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_3__*,TYPE_2__*,int,int) ;

SrcList *FUNC_6(
  Parse *VAR_0,
  SrcList *VAR_1,
  Token *VAR_2,
  Token *VAR_3
){
  struct SrcList_item *VAR_4;
  sqlite3 *VAR_5;
  FUNC_0( VAR_3==0 || VAR_2!=0 );
  FUNC_0( VAR_0!=0 );
  FUNC_0( VAR_0->db!=0 );
  VAR_5 = VAR_0->db;
  if( VAR_1==0 ){
    VAR_1 = FUNC_2(VAR_0->db, sizeof(SrcList) );
    if( VAR_1==0 ) return 0;
    VAR_1->nAlloc = 1;
    VAR_1->nSrc = 1;
    FUNC_1(&VAR_1->a[0], 0, sizeof(VAR_1->a[0]));
    VAR_1->a[0].iCursor = -1;
  }else{
    SrcList *VAR_6 = FUNC_5(VAR_0, VAR_1, 1, VAR_1->nSrc);
    if( VAR_6==0 ){
      FUNC_4(VAR_5, VAR_1);
      return 0;
    }else{
      VAR_1 = VAR_6;
    }
  }
  VAR_4 = &VAR_1->a[VAR_1->nSrc-1];
  if( VAR_3 && VAR_3->z==0 ){
    VAR_3 = 0;
  }
  if( VAR_3 ){
    VAR_4->zName = FUNC_3(VAR_5, VAR_3);
    VAR_4->zDatabase = FUNC_3(VAR_5, VAR_2);
  }else{
    VAR_4->zName = FUNC_3(VAR_5, VAR_2);
    VAR_4->zDatabase = 0;
  }
  return VAR_1;
}
