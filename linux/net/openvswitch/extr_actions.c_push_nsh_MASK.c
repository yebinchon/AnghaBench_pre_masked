
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int mac_proto; } ;
struct sk_buff {int dummy; } ;
struct nshhdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sw_flow_key*) ;
 int FUNC_1 (struct sk_buff*,struct nshhdr const*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, struct sw_flow_key *VAR_2,
      const struct nshhdr *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_3);
 if (VAR_4)
  return VAR_4;


 VAR_2->mac_proto = VAR_0;
 FUNC_0(VAR_2);
 return 0;
}
