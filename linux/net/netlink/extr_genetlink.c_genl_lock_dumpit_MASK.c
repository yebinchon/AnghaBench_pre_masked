
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlink_callback {struct genl_ops* data; } ;
struct genl_ops {int (* dumpit ) (struct sk_buff*,struct netlink_callback*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (struct sk_buff*,struct netlink_callback*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0, struct netlink_callback *VAR_1)
{

 const struct genl_ops *VAR_2 = VAR_1->data;
 int VAR_3;

 FUNC_0();
 VAR_3 = VAR_2->dumpit(VAR_0, VAR_1);
 FUNC_1();
 return VAR_3;
}
