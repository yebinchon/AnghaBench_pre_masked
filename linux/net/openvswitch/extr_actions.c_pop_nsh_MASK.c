
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int mac_proto; } ;
struct sk_buff {scalar_t__ protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct sw_flow_key*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_3, struct sw_flow_key *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_2(VAR_3);
 if (VAR_5)
  return VAR_5;


 if (VAR_3->protocol == FUNC_0(VAR_0))
  VAR_4->mac_proto = VAR_1;
 else
  VAR_4->mac_proto = VAR_2;
 FUNC_1(VAR_4);
 return 0;
}
