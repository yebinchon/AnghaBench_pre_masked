
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* zCost; int iSeq; int rCost; } ;
typedef TYPE_1__ amatch_word ;


 int FUNC_0 (int ,scalar_t__*) ;

__attribute__((used)) static void FUNC_1(amatch_word *VAR_0){
  FUNC_0(VAR_0->rCost, VAR_0->zCost);
  FUNC_0(VAR_0->iSeq, VAR_0->zCost+4);
  VAR_0->zCost[8] = 0;
}
