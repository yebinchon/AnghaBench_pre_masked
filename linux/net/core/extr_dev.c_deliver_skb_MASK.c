
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dev; int users; } ;
struct packet_type {int (* func ) (struct sk_buff*,int ,struct packet_type*,struct net_device*) ;} ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*,int ,struct packet_type*,struct net_device*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static inline int FUNC_4(struct sk_buff *VAR_2,
         struct packet_type *VAR_3,
         struct net_device *VAR_4)
{
 if (FUNC_3(FUNC_1(VAR_2, VAR_1)))
  return -VAR_0;
 FUNC_0(&VAR_2->users);
 return VAR_3->func(VAR_2, VAR_2->dev, VAR_3, VAR_4);
}
