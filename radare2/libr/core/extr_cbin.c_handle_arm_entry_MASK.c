
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bits; int vaddr; int paddr; } ;
typedef int RCore ;
typedef int RBinInfo ;
typedef TYPE_1__ RBinAddr ;


 void FUNC_0 (int *,int *,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_1(RCore *VAR_0, RBinAddr *VAR_1, RBinInfo *VAR_2, int VAR_3) {
 return FUNC_0 (VAR_0, VAR_2, VAR_1->paddr, VAR_1->vaddr, VAR_1->bits, VAR_3);
}
