
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
typedef void* u16 ;
struct TYPE_8__ {int pEnv; } ;
typedef TYPE_1__ lsm_db ;
struct TYPE_9__ {int nRight; int * aRhs; int lhs; struct TYPE_9__* pNext; void* flags; void* iAge; } ;
typedef int Segment ;
typedef TYPE_2__ Level ;


 int VAR_0 ;
 int FUNC_0 (int*,int*,int *) ;
 int FUNC_1 (TYPE_1__*,int*,int*,TYPE_2__*) ;
 scalar_t__ FUNC_2 (int ,int,int*) ;
 int FUNC_3 (int ,TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(
  lsm_db *VAR_1,
  u32 *VAR_2,
  int *VAR_3,
  int VAR_4,
  Level **VAR_5
){
  int VAR_6;
  int VAR_7 = VAR_0;
  Level *VAR_8 = 0;
  Level **VAR_9;
  int VAR_10 = *VAR_3;

  VAR_9 = &VAR_8;
  for(VAR_6=0; VAR_7==VAR_0 && VAR_6<VAR_4; VAR_6++){
    int VAR_11;
    Level *VAR_12;


    VAR_12 = (Level *)FUNC_2(VAR_1->pEnv, sizeof(Level), &VAR_7);
    if( VAR_7==VAR_0 ){
      VAR_12->iAge = (u16)(VAR_2[VAR_10] & 0x0000FFFF);
      VAR_12->flags = (u16)((VAR_2[VAR_10]>>16) & 0x0000FFFF);
      VAR_10++;
      VAR_12->nRight = VAR_2[VAR_10++];
      if( VAR_12->nRight ){
        int VAR_13 = sizeof(Segment) * VAR_12->nRight;
        VAR_12->aRhs = (Segment *)FUNC_2(VAR_1->pEnv, VAR_13, &VAR_7);
      }
      if( VAR_7==VAR_0 ){
        *VAR_9 = VAR_12;
        VAR_9 = &VAR_12->pNext;


        FUNC_0(VAR_2, &VAR_10, &VAR_12->lhs);


        for(VAR_11=0; VAR_11<VAR_12->nRight; VAR_11++){
          FUNC_0(VAR_2, &VAR_10, &VAR_12->aRhs[VAR_11]);
        }


        if( VAR_12->nRight>0 ){
          VAR_7 = FUNC_1(VAR_1, VAR_2, &VAR_10, VAR_12);
        }
      }
    }
  }

  if( VAR_7!=VAR_0 ){


    FUNC_3(VAR_1->pEnv, VAR_8);
    VAR_8 = 0;
  }

  *VAR_5 = VAR_8;
  *VAR_3 = VAR_10;
  return VAR_7;
}
