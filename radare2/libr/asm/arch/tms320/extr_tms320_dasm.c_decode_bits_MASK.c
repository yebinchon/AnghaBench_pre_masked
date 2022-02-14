
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int syntax; } ;
typedef TYPE_1__ tms320_dasm_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int VAR_3 ;

void FUNC_3(tms320_dasm_t * VAR_4)
{

 if (FUNC_0 (VAR_4, VAR_0)) {
  FUNC_2 (VAR_4->syntax, "[r]", "%s", FUNC_1 (VAR_4, VAR_0) ? "r" : "");
 }


 if (FUNC_0 (VAR_4, VAR_3)) {
  FUNC_2 (VAR_4->syntax, "[u]", "%s", FUNC_1 (VAR_4, VAR_3) ? "u" : "");
 }


 if (FUNC_0 (VAR_4, VAR_2)) {
  FUNC_2 (VAR_4->syntax, "[40]", "%s", FUNC_1 (VAR_4, VAR_2) ? "40" : "");
 }


 if (FUNC_0 (VAR_4, VAR_1)) {
  FUNC_2 (VAR_4->syntax, "[T3 = ]", "%s", FUNC_1 (VAR_4, VAR_1) ? "t3=" : "");
 }
}
