
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_socket_mtinfo1 {int flags; } ;
struct xt_action_param {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff const*,struct xt_action_param*,struct xt_socket_mtinfo1*) ;

__attribute__((used)) static bool
FUNC_1(const struct sk_buff *VAR_0, struct xt_action_param *VAR_1)
{
 static struct xt_socket_mtinfo1 VAR_2 = {
  .flags = 0,
 };

 return FUNC_0(VAR_0, VAR_1, &VAR_2);
}
