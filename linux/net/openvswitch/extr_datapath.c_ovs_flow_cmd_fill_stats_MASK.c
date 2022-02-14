
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sw_flow {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ovs_flow_stats {scalar_t__ n_packets; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int,struct ovs_flow_stats*,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct sw_flow const*,struct ovs_flow_stats*,unsigned long*,int *) ;
 int FUNC_5 (unsigned long) ;

__attribute__((used)) static int FUNC_6(const struct sw_flow *VAR_5,
       struct sk_buff *VAR_6)
{
 struct ovs_flow_stats VAR_7;
 __be16 VAR_8;
 unsigned long VAR_9;

 FUNC_4(VAR_5, &VAR_7, &VAR_9, &VAR_8);

 if (VAR_9 &&
     FUNC_1(VAR_6, VAR_4, FUNC_5(VAR_9),
         VAR_1))
  return -VAR_0;

 if (VAR_7.n_packets &&
     FUNC_0(VAR_6, VAR_2,
     sizeof(struct ovs_flow_stats), &VAR_7,
     VAR_1))
  return -VAR_0;

 if ((u8)FUNC_3(VAR_8) &&
      FUNC_2(VAR_6, VAR_3, (u8)FUNC_3(VAR_8)))
  return -VAR_0;

 return 0;
}
