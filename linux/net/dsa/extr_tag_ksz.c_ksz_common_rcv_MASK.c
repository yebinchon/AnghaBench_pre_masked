
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int offload_fwd_mark; scalar_t__ len; int dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,int ,unsigned int) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct sk_buff *VAR_0,
          struct net_device *VAR_1,
          unsigned int VAR_2, unsigned int VAR_3)
{
 VAR_0->dev = FUNC_0(VAR_1, 0, VAR_2);
 if (!VAR_0->dev)
  return ((void*)0);

 FUNC_1(VAR_0, VAR_0->len - VAR_3);

 VAR_0->offload_fwd_mark = 1;

 return VAR_0;
}
