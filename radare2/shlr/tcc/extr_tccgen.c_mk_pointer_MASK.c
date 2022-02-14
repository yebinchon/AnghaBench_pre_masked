
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t; int * ref; } ;
typedef int Sym ;
typedef TYPE_1__ CType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,TYPE_1__*,int ,int) ;

void FUNC_1(CType *VAR_3) {
 Sym *VAR_4;
 VAR_4 = FUNC_0 (VAR_0, VAR_3, 0, -1);
 if (!VAR_4) {
  return;
 }
 VAR_3->t = VAR_1 | (VAR_3->t & ~VAR_2);
 VAR_3->ref = VAR_4;
}
