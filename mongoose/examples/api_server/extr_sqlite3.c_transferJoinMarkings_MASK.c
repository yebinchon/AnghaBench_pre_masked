
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; int iRightJoinTable; } ;
typedef TYPE_1__ Expr ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(Expr *VAR_1, Expr *VAR_2){
  VAR_1->flags |= VAR_2->flags & VAR_0;
  VAR_1->iRightJoinTable = VAR_2->iRightJoinTable;
}
