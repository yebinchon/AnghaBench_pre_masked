
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct cmd_results {int dummy; } ;
struct TYPE_2__ {int floating_mod_inverse; scalar_t__ floating_mod; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*,char*) ;

struct cmd_results *FUNC_4(int VAR_4, char **VAR_5) {
 struct cmd_results *VAR_6 = ((void*)0);
 if ((VAR_6 = FUNC_0(VAR_4, "floating_modifier", VAR_2, 1))) {
  return VAR_6;
 }

 uint32_t VAR_7 = FUNC_2(VAR_5[0]);
 if (!VAR_7) {
  return FUNC_1(VAR_0, "Invalid modifier");
 }

 if (VAR_4 == 1 || FUNC_3(VAR_5[1], "normal") == 0) {
  VAR_3->floating_mod_inverse = 0;
 } else if (FUNC_3(VAR_5[1], "inverse") == 0) {
  VAR_3->floating_mod_inverse = 1;
 } else {
  return FUNC_1(VAR_0,
    "Usage: floating_modifier <mod> [inverse|normal]");
 }

 VAR_3->floating_mod = VAR_7;

 return FUNC_1(VAR_1, ((void*)0));
}
