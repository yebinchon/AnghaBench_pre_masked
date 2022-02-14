
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int info; } ;
struct TYPE_6__ {TYPE_1__ s; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
typedef TYPE_3__ expdesc ;
typedef int Instruction ;
typedef int FuncState ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ,int) ;
 int * FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 scalar_t__ FUNC_5 (scalar_t__) ;

__attribute__((used)) static void FUNC_6 (FuncState *VAR_2, expdesc *VAR_3) {
  Instruction *VAR_4 = FUNC_3(VAR_2, VAR_3->u.s.info);
  FUNC_4(FUNC_5(FUNC_1(*VAR_4)) && FUNC_1(*VAR_4) != VAR_1 &&
                                           FUNC_1(*VAR_4) != VAR_0);
  FUNC_2(*VAR_4, !(FUNC_0(*VAR_4)));
}
