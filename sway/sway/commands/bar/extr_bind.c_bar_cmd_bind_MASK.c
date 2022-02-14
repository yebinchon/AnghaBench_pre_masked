
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct bar_binding {int release; int command; int button; } ;
typedef int list_t ;
struct TYPE_4__ {TYPE_1__* current_bar; } ;
struct TYPE_3__ {int * bindings; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct cmd_results* FUNC_0 (struct bar_binding*,int *) ;
 struct cmd_results* FUNC_1 (struct bar_binding*,int *) ;
 struct bar_binding* FUNC_2 (int,int) ;
 struct cmd_results* FUNC_3 (int,char const*,int ,int) ;
 struct cmd_results* FUNC_4 (int ,char*,...) ;
 TYPE_2__* VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct bar_binding*) ;
 int FUNC_7 (char*,char**) ;
 int FUNC_8 (char*,char**) ;
 int FUNC_9 (char**,int) ;
 scalar_t__ FUNC_10 (char*,char*) ;

__attribute__((used)) static struct cmd_results *FUNC_11(int VAR_4, char **VAR_5, bool VAR_6,
  bool VAR_7) {
 int VAR_8 = 2;
 const char *VAR_9;
 if (VAR_7) {
  VAR_8--;
  VAR_9 = VAR_6 ? "bar unbindcode" : "bar unbindsym";
 } else {
  VAR_9 = VAR_6 ? "bar bindcode" : "bar bindsym";
 }

 struct cmd_results *VAR_10 = ((void*)0);
 if ((VAR_10 = FUNC_3(VAR_4, VAR_9, VAR_2, VAR_8))) {
  return VAR_10;
 }

 struct bar_binding *VAR_11 = FUNC_2(1, sizeof(struct bar_binding));
 if (!VAR_11) {
  return FUNC_4(VAR_0, "Unable to allocate bar binding");
 }

 VAR_11->release = 0;
 if (FUNC_10("--release", VAR_5[0]) == 0) {
  VAR_11->release = 1;
  VAR_5++;
  VAR_4--;
 }

 char *VAR_12 = ((void*)0);
 if (VAR_6) {
  VAR_11->button = FUNC_7(VAR_5[0], &VAR_12);
 } else {
  VAR_11->button = FUNC_8(VAR_5[0], &VAR_12);
 }
 if (VAR_12) {
  FUNC_6(VAR_11);
  VAR_10 = FUNC_4(VAR_1, VAR_12);
  FUNC_5(VAR_12);
  return VAR_10;
 } else if (!VAR_11->button) {
  FUNC_6(VAR_11);
  return FUNC_4(VAR_1, "Unknown button %s", VAR_5[0]);
 }
 list_t *VAR_13 = VAR_3->current_bar->bindings;
 if (VAR_7) {
  return FUNC_1(VAR_11, VAR_13);
 }

 VAR_11->command = FUNC_9(VAR_5 + 1, VAR_4 - 1);
 return FUNC_0(VAR_11, VAR_13);
}
