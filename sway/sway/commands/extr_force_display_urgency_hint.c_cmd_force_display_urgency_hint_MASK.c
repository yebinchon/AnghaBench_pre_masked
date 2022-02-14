
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct TYPE_2__ {int urgent_timeout; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,char**,int) ;

struct cmd_results *FUNC_4(int VAR_4, char **VAR_5) {
 struct cmd_results *VAR_6 = ((void*)0);
 if ((VAR_6 = FUNC_0(VAR_4, "force_display_urgency_hint",
     VAR_2, 1))) {
  return VAR_6;
 }

 char *VAR_7;
 int VAR_8 = (int)FUNC_3(VAR_5[0], &VAR_7, 10);
 if (*VAR_7) {
  if (FUNC_2(VAR_7, "ms") != 0) {
   return FUNC_1(VAR_0,
     "Expected 'force_display_urgency_hint <timeout> ms'");
  }
 }

 VAR_3->urgent_timeout = VAR_8 > 0 ? VAR_8 : 0;

 return FUNC_1(VAR_1, ((void*)0));
}
