
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ wsFlags; int aLTermSpace; int nLSlot; scalar_t__ nLTerm; int aLTerm; } ;
typedef TYPE_1__ WhereLoop ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(WhereLoop *VAR_0){
  VAR_0->aLTerm = VAR_0->aLTermSpace;
  VAR_0->nLTerm = 0;
  VAR_0->nLSlot = FUNC_0(VAR_0->aLTermSpace);
  VAR_0->wsFlags = 0;
}
