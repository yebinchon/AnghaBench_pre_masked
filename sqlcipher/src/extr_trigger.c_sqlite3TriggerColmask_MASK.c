
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {int * aColmask; } ;
typedef TYPE_1__ TriggerPrg ;
struct TYPE_7__ {int const op; int tr_tm; int pColumns; struct TYPE_7__* pNext; } ;
typedef TYPE_2__ Trigger ;
typedef int Table ;
typedef int Parse ;
typedef int ExprList ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 TYPE_1__* FUNC_2 (int *,TYPE_2__*,int *,int) ;

u32 FUNC_3(
  Parse *VAR_2,
  Trigger *VAR_3,
  ExprList *VAR_4,
  int VAR_5,
  int VAR_6,
  Table *VAR_7,
  int VAR_8
){
  const int VAR_9 = VAR_4 ? VAR_1 : VAR_0;
  u32 VAR_10 = 0;
  Trigger *VAR_11;

  FUNC_0( VAR_5==1 || VAR_5==0 );
  for(VAR_11=VAR_3; VAR_11; VAR_11=VAR_11->pNext){
    if( VAR_11->op==VAR_9 && (VAR_6&VAR_11->tr_tm)
     && FUNC_1(VAR_11->pColumns,VAR_4)
    ){
      TriggerPrg *VAR_12;
      VAR_12 = FUNC_2(VAR_2, VAR_11, VAR_7, VAR_8);
      if( VAR_12 ){
        VAR_10 |= VAR_12->aColmask[VAR_5];
      }
    }
  }

  return VAR_10;
}
