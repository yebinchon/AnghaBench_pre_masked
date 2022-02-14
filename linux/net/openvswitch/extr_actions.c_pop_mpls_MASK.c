
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sw_flow_key {int dummy; } ;
struct sk_buff {int mac_len; } ;
typedef int __be16 ;


 int FUNC_0 (struct sw_flow_key*) ;
 int FUNC_1 (struct sk_buff*,int const,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0, struct sw_flow_key *VAR_1,
      const __be16 VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_2, VAR_0->mac_len);
 if (VAR_3)
  return VAR_3;

 FUNC_0(VAR_1);
 return 0;
}
