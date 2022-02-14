
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netdev_queue {int qdisc; } ;
struct net_device {int header_ops; } ;
struct dst_entry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct sk_buff*,struct net_device*,struct netdev_queue*,struct dst_entry*) ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct dst_entry* FUNC_4 (struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_5(struct sk_buff *VAR_2,
          struct sk_buff *VAR_3,
          struct net_device *VAR_4,
          struct netdev_queue *VAR_5)
{
 struct dst_entry *VAR_6 = FUNC_4(VAR_2);
 int VAR_7;

 if (FUNC_1(VAR_5->qdisc) == &VAR_1)
  return -VAR_0;

 if (!VAR_4->header_ops || !VAR_6)
  return 0;

 FUNC_2();
 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 FUNC_3();

 return VAR_7;
}
