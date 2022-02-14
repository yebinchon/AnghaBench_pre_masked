
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seg6_iptunnel_encap {int dummy; } ;
struct lwtunnel_state {int dummy; } ;


 int FUNC_0 (struct seg6_iptunnel_encap*) ;
 int FUNC_1 (struct seg6_iptunnel_encap*,struct seg6_iptunnel_encap*,int) ;
 struct seg6_iptunnel_encap* FUNC_2 (struct lwtunnel_state*) ;

__attribute__((used)) static int FUNC_3(struct lwtunnel_state *VAR_0, struct lwtunnel_state *VAR_1)
{
 struct seg6_iptunnel_encap *VAR_2 = FUNC_2(VAR_0);
 struct seg6_iptunnel_encap *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = FUNC_0(VAR_2);

 if (VAR_4 != FUNC_0(VAR_3))
  return 1;

 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
