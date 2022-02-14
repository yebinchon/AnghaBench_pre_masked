
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xkb_keymap {int dummy; } ;
struct input_config {int dummy; } ;


 int FUNC_0 (struct input_config*) ;
 int FUNC_1 (struct input_config*,struct input_config*) ;
 struct input_config* FUNC_2 (char*) ;
 struct xkb_keymap* FUNC_3 (struct input_config*,char**) ;
 int FUNC_4 (struct xkb_keymap*) ;

__attribute__((used)) static bool FUNC_5(struct input_config *VAR_0,
  struct input_config *VAR_1, char **VAR_2) {
 struct input_config *VAR_3 = FUNC_2("temp");
 if (VAR_0) {
  FUNC_1(VAR_3, VAR_0);
 }
 FUNC_1(VAR_3, VAR_1);

 struct xkb_keymap *VAR_4 = FUNC_3(VAR_3, VAR_2);
 FUNC_0(VAR_3);
 if (!VAR_4) {
  return 0;
 }

 FUNC_4(VAR_4);
 return 1;
}
