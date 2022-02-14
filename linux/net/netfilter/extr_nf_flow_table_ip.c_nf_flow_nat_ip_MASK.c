
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct iphdr {int protocol; } ;
struct flow_offload {int flags; } ;
typedef enum flow_offload_tuple_dir { ____Placeholder_flow_offload_tuple_dir } flow_offload_tuple_dir ;


 int VAR_0 ;
 int VAR_1 ;
 struct iphdr* FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (struct flow_offload const*,struct sk_buff*,struct iphdr*,unsigned int,int) ;
 scalar_t__ FUNC_2 (struct flow_offload const*,struct sk_buff*,unsigned int,int ,int) ;
 scalar_t__ FUNC_3 (struct flow_offload const*,struct sk_buff*,struct iphdr*,unsigned int,int) ;
 scalar_t__ FUNC_4 (struct flow_offload const*,struct sk_buff*,unsigned int,int ,int) ;

__attribute__((used)) static int FUNC_5(const struct flow_offload *VAR_2, struct sk_buff *VAR_3,
     unsigned int VAR_4, enum flow_offload_tuple_dir VAR_5)
{
 struct iphdr *VAR_6 = FUNC_0(VAR_3);

 if (VAR_2->flags & VAR_1 &&
     (FUNC_4(VAR_2, VAR_3, VAR_4, VAR_6->protocol, VAR_5) < 0 ||
      FUNC_3(VAR_2, VAR_3, VAR_6, VAR_4, VAR_5) < 0))
  return -1;
 if (VAR_2->flags & VAR_0 &&
     (FUNC_2(VAR_2, VAR_3, VAR_4, VAR_6->protocol, VAR_5) < 0 ||
      FUNC_1(VAR_2, VAR_3, VAR_6, VAR_4, VAR_5) < 0))
  return -1;

 return 0;
}
