
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xkb_rule_names {int member_0; } ;
struct xkb_keymap {int dummy; } ;
struct xkb_context {int dummy; } ;
struct input_config {char* xkb_file; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int VAR_5 ;
 int FUNC_2 (struct input_config*,struct xkb_rule_names*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (char*,size_t,char*,char*,char*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (struct xkb_context*,char*) ;
 int FUNC_7 (int ,char*,char*,char*) ;
 struct xkb_context* FUNC_8 (int ) ;
 int FUNC_9 (struct xkb_context*,int ) ;
 int FUNC_10 (struct xkb_context*,char**) ;
 int FUNC_11 (struct xkb_context*) ;
 struct xkb_keymap* FUNC_12 (struct xkb_context*,int *,int ,int ) ;
 struct xkb_keymap* FUNC_13 (struct xkb_context*,struct xkb_rule_names*,int ) ;

struct xkb_keymap *FUNC_14(struct input_config *VAR_6,
  char **VAR_7) {
 struct xkb_context *VAR_8 = FUNC_8(VAR_1);
 if (!FUNC_6(VAR_8, "cannot create XKB context")) {
  return ((void*)0);
 }
 FUNC_10(VAR_8, VAR_7);
 FUNC_9(VAR_8, VAR_5);

 struct xkb_keymap *VAR_9 = ((void*)0);

 if (VAR_6 && VAR_6->xkb_file) {
  FILE *VAR_10 = FUNC_1(VAR_6->xkb_file, "r");
  if (!VAR_10) {
   if (VAR_7) {
    size_t VAR_11 = FUNC_4(((void*)0), 0, "cannot read XKB file %s: %s",
      VAR_6->xkb_file, FUNC_5(VAR_4)) + 1;
    *VAR_7 = FUNC_3(VAR_11);
    if (*VAR_7) {
     FUNC_4(*VAR_7, VAR_11, "cannot read XKB file %s: %s",
       VAR_6->xkb_file, FUNC_5(VAR_4));
    } else {
     FUNC_7(VAR_0, "cannot read XKB file %s: %s",
       VAR_6->xkb_file, FUNC_5(VAR_4));
    }
   } else {
    FUNC_7(VAR_0, "cannot read XKB file %s: %s",
      VAR_6->xkb_file, FUNC_5(VAR_4));
   }
   goto cleanup;
  }

  VAR_9 = FUNC_12(VAR_8, VAR_10,
     VAR_3, VAR_2);

  if (!FUNC_0(VAR_10)) {
   FUNC_7(VAR_0, "cannot close XKB file %s: %s",
     VAR_6->xkb_file, FUNC_5(VAR_4));
  }
 } else {
  struct xkb_rule_names VAR_12 = {0};
  if (VAR_6) {
   FUNC_2(VAR_6, &VAR_12);
  }
  VAR_9 = FUNC_13(VAR_8, &VAR_12,
   VAR_2);
 }

cleanup:
 FUNC_10(VAR_8, ((void*)0));
 FUNC_11(VAR_8);
 return VAR_9;
}
