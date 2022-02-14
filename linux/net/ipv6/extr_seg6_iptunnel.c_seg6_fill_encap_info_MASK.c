
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct seg6_iptunnel_encap {int dummy; } ;
struct lwtunnel_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,struct seg6_iptunnel_encap*) ;
 struct seg6_iptunnel_encap* FUNC_1 (struct lwtunnel_state*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2,
    struct lwtunnel_state *VAR_3)
{
 struct seg6_iptunnel_encap *VAR_4 = FUNC_1(VAR_3);

 if (FUNC_0(VAR_2, VAR_1, VAR_4))
  return -VAR_0;

 return 0;
}
