
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xkb_state {int dummy; } ;
struct xkb_rule_names {int dummy; } ;
struct xkb_keymap {int dummy; } ;
struct xkb_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xkb_context* FUNC_0 (int ) ;
 int FUNC_1 (struct xkb_context*) ;
 struct xkb_keymap* FUNC_2 (struct xkb_context*,struct xkb_rule_names*,int ) ;
 struct xkb_state* FUNC_3 (struct xkb_keymap*) ;

__attribute__((used)) static struct xkb_state *FUNC_4(
  struct xkb_rule_names VAR_2) {
 struct xkb_context *VAR_3 = FUNC_0(VAR_0);
 struct xkb_keymap *VAR_4 = FUNC_2(
  VAR_3,
  &VAR_2,
  VAR_1);

 FUNC_1(VAR_3);
 return FUNC_3(VAR_4);
}
