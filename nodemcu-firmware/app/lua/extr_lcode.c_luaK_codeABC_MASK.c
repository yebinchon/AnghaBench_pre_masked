
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* ls; } ;
struct TYPE_5__ {int lastline; } ;
typedef int OpCode ;
typedef TYPE_2__ FuncState ;


 int FUNC_0 (int ,int,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (TYPE_2__*,int ,int ) ;
 int FUNC_5 (int) ;

int FUNC_6 (FuncState *VAR_2, OpCode VAR_3, int VAR_4, int VAR_5, int VAR_6) {
  FUNC_5(FUNC_3(VAR_3) == VAR_1);
  FUNC_5(FUNC_1(VAR_3) != VAR_0 || VAR_5 == 0);
  FUNC_5(FUNC_2(VAR_3) != VAR_0 || VAR_6 == 0);
  return FUNC_4(VAR_2, FUNC_0(VAR_3, VAR_4, VAR_5, VAR_6), VAR_2->ls->lastline);
}
