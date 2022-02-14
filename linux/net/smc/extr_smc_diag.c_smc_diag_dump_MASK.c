
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlink_callback {int dummy; } ;


 int FUNC_0 (int *,struct sk_buff*,struct netlink_callback*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct sk_buff *VAR_2, struct netlink_callback *VAR_3)
{
 int VAR_4 = 0;

 VAR_4 = FUNC_0(&VAR_0, VAR_2, VAR_3);
 if (!VAR_4)
  VAR_4 = FUNC_0(&VAR_1, VAR_2, VAR_3);
 return VAR_4;
}
