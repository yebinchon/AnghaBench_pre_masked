
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cmd_results {int dummy; } ;
struct bar_config {char* hidden_state; int id; } ;
struct TYPE_2__ {int current_bar; int reading; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct cmd_results* FUNC_0 (int ,char*,char const*) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct bar_config*) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 scalar_t__ FUNC_4 (char*,char const*) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,char const*,int ) ;

__attribute__((used)) static struct cmd_results *FUNC_7(struct bar_config *VAR_3,
  const char *VAR_4) {
 char *VAR_5 = VAR_3->hidden_state;
 if (FUNC_3("toggle", VAR_4) == 0 && !VAR_2->reading) {
  if (FUNC_3("hide", VAR_3->hidden_state) == 0) {
   VAR_3->hidden_state = FUNC_5("show");
  } else if (FUNC_3("show", VAR_3->hidden_state) == 0) {
   VAR_3->hidden_state = FUNC_5("hide");
  }
 } else if (FUNC_3("hide", VAR_4) == 0) {
  VAR_3->hidden_state = FUNC_5("hide");
 } else if (FUNC_3("show", VAR_4) == 0) {
  VAR_3->hidden_state = FUNC_5("show");
 } else {
  return FUNC_0(VAR_0, "Invalid value %s", VAR_4);
 }
 if (FUNC_4(VAR_5, VAR_3->hidden_state) != 0) {
  if (!VAR_2->current_bar) {
   FUNC_2(VAR_3);
  }
  FUNC_6(VAR_1, "Setting hidden_state: '%s' for bar: %s",
    VAR_3->hidden_state, VAR_3->id);
 }

 FUNC_1(VAR_5);
 return ((void*)0);
}
