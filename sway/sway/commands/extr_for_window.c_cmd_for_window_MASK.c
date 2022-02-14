
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct criteria {int cmdlist; int raw; int type; } ;
struct cmd_results {int dummy; } ;
struct TYPE_2__ {int criteria; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct cmd_results* FUNC_0 (int,char*,int ,int) ;
 struct cmd_results* FUNC_1 (int ,char*) ;
 TYPE_1__* VAR_5 ;
 scalar_t__ FUNC_2 (struct criteria*) ;
 int FUNC_3 (struct criteria*) ;
 struct criteria* FUNC_4 (char*,char**) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char**,int) ;
 int FUNC_7 (int ,struct criteria*) ;
 int FUNC_8 (int ,char*,int ,int ) ;

struct cmd_results *FUNC_9(int VAR_6, char **VAR_7) {
 struct cmd_results *VAR_8 = ((void*)0);
 if ((VAR_8 = FUNC_0(VAR_6, "for_window", VAR_3, 2))) {
  return VAR_8;
 }

 char *VAR_9 = ((void*)0);
 struct criteria *VAR_10 = FUNC_4(VAR_7[0], &VAR_9);
 if (!VAR_10) {
  VAR_8 = FUNC_1(VAR_0, VAR_9);
  FUNC_5(VAR_9);
  return VAR_8;
 }

 VAR_10->type = VAR_2;
 VAR_10->cmdlist = FUNC_6(VAR_7 + 1, VAR_6 - 1);


 if (FUNC_2(VAR_10)) {
  FUNC_8(VAR_4, "for_window already exists: '%s' -> '%s'",
    VAR_10->raw, VAR_10->cmdlist);
  FUNC_3(VAR_10);
  return FUNC_1(VAR_1, ((void*)0));
 }

 FUNC_7(VAR_5->criteria, VAR_10);
 FUNC_8(VAR_4, "for_window: '%s' -> '%s' added", VAR_10->raw, VAR_10->cmdlist);

 return FUNC_1(VAR_1, ((void*)0));
}
