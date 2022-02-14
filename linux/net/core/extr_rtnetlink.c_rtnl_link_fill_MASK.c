
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 int FUNC_3 (struct sk_buff*,struct net_device const*) ;
 int FUNC_4 (struct sk_buff*,struct net_device const*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_2, const struct net_device *VAR_3)
{
 struct nlattr *VAR_4;
 int VAR_5 = -VAR_0;

 VAR_4 = FUNC_2(VAR_2, VAR_1);
 if (VAR_4 == ((void*)0))
  goto out;

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (VAR_5 < 0)
  goto err_cancel_link;

 VAR_5 = FUNC_4(VAR_2, VAR_3);
 if (VAR_5 < 0)
  goto err_cancel_link;

 FUNC_1(VAR_2, VAR_4);
 return 0;

err_cancel_link:
 FUNC_0(VAR_2, VAR_4);
out:
 return VAR_5;
}
