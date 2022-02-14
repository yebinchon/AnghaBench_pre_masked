
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int Vdbe ;
struct TYPE_15__ {scalar_t__ pSchema; TYPE_3__* pIndex; int zName; int tnum; } ;
typedef TYPE_1__ Table ;
struct TYPE_17__ {scalar_t__ pSchema; int zName; int tnum; struct TYPE_17__* pNext; } ;
struct TYPE_16__ {int nTab; int db; } ;
typedef TYPE_2__ Parse ;
typedef TYPE_3__ Index ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int * FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,int,int,TYPE_1__*,int) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,int,int ,int,int ) ;
 int FUNC_9 (int *,int,int,int ,int) ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (TYPE_2__*,TYPE_3__*) ;

int FUNC_12(
  Parse *VAR_2,
  Table *VAR_3,
  int VAR_4,
  u8 VAR_5,
  int VAR_6,
  u8 *VAR_7,
  int *VAR_8,
  int *VAR_9
){
  int VAR_10;
  int VAR_11;
  int VAR_12;
  Index *VAR_13;
  Vdbe *VAR_14;

  FUNC_4( VAR_4==VAR_0 || VAR_4==VAR_1 );
  FUNC_4( VAR_4==VAR_1 || VAR_5==0 );
  if( FUNC_2(VAR_3) ){



    return 0;
  }
  VAR_11 = FUNC_7(VAR_2->db, VAR_3->pSchema);
  VAR_14 = FUNC_5(VAR_2);
  FUNC_4( VAR_14!=0 );
  if( VAR_6<0 ) VAR_6 = VAR_2->nTab;
  VAR_12 = VAR_6++;
  if( VAR_8 ) *VAR_8 = VAR_12;
  if( FUNC_0(VAR_3) && (VAR_7==0 || VAR_7[0]) ){
    FUNC_6(VAR_2, VAR_12, VAR_11, VAR_3, VAR_4);
  }else{
    FUNC_8(VAR_2, VAR_11, VAR_3->tnum, VAR_4==VAR_1, VAR_3->zName);
  }
  if( VAR_9 ) *VAR_9 = VAR_6;
  for(VAR_10=0, VAR_13=VAR_3->pIndex; VAR_13; VAR_13=VAR_13->pNext, VAR_10++){
    int VAR_15 = VAR_6++;
    FUNC_4( VAR_13->pSchema==VAR_3->pSchema );
    if( FUNC_1(VAR_13) && !FUNC_0(VAR_3) ){
      if( VAR_8 ) *VAR_8 = VAR_15;
      VAR_5 = 0;
    }
    if( VAR_7==0 || VAR_7[VAR_10+1] ){
      FUNC_9(VAR_14, VAR_4, VAR_15, VAR_13->tnum, VAR_11);
      FUNC_11(VAR_2, VAR_13);
      FUNC_10(VAR_14, VAR_5);
      FUNC_3((VAR_14, "%s", VAR_13->zName));
    }
  }
  if( VAR_6>VAR_2->nTab ) VAR_2->nTab = VAR_6;
  return VAR_10;
}
