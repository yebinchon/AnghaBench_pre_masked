
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int mac_proto; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sw_flow_key*) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2, struct sw_flow_key *VAR_3)
{
 FUNC_1(VAR_2, VAR_0);
 FUNC_2(VAR_2);
 FUNC_3(VAR_2);


 VAR_3->mac_proto = VAR_1;
 FUNC_0(VAR_3);
 return 0;
}
