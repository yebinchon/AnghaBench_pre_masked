
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {struct net_device* dev; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_3(struct net_device *VAR_0,
          struct sk_buff *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0, VAR_1);

 if (FUNC_1(!VAR_2)) {
  VAR_1->dev = VAR_0;
  VAR_2 = FUNC_2(VAR_1);
 }

 return VAR_2;
}
