
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sway_binding {char const* input; char const* command; } ;
struct cmd_results {int dummy; } ;
typedef int list_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sway_binding* FUNC_0 (struct sway_binding*,int *) ;
 struct cmd_results* FUNC_1 (int ,int *) ;
 int FUNC_2 (char*,char const*,char const*,char const*,char const*) ;
 int FUNC_3 (struct sway_binding*) ;
 int FUNC_4 (int ,char*,char const*,char const*,char const*,char const*) ;

__attribute__((used)) static struct cmd_results *FUNC_5(struct sway_binding *VAR_3,
  list_t *VAR_4, const char *VAR_5,
  const char *VAR_6, bool VAR_7) {
 struct sway_binding *VAR_8 = FUNC_0(VAR_3, VAR_4);

 if (VAR_8) {
  FUNC_4(VAR_2, "Overwriting binding '%s' for device '%s' "
    "to `%s` from `%s`", VAR_6, VAR_3->input,
    VAR_3->command, VAR_8->command);
  if (VAR_7) {
   FUNC_2("Overwriting binding"
     "'%s' for device '%s' to `%s` from `%s`",
     VAR_6, VAR_3->input, VAR_3->command,
     VAR_8->command);
  }
  FUNC_3(VAR_8);
 } else {
  FUNC_4(VAR_1, "%s - Bound %s to command `%s` for device '%s'",
    VAR_5, VAR_6, VAR_3->command, VAR_3->input);
 }

 return FUNC_1(VAR_0, ((void*)0));
}
