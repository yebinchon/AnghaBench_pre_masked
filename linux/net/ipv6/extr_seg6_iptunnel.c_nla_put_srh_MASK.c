
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct seg6_iptunnel_encap {int dummy; } ;
struct nlattr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct seg6_iptunnel_encap*) ;
 int FUNC_1 (struct seg6_iptunnel_encap*,struct seg6_iptunnel_encap*,int) ;
 struct seg6_iptunnel_encap* FUNC_2 (struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int,int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, int VAR_2,
         struct seg6_iptunnel_encap *VAR_3)
{
 struct seg6_iptunnel_encap *VAR_4;
 struct nlattr *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_3);

 VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_6);
 if (!VAR_5)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_5);
 FUNC_1(VAR_4, VAR_3, VAR_6);

 return 0;
}
