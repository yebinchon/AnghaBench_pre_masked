
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpls_iptunnel_encap {int labels; scalar_t__ ttl_propagate; scalar_t__ default_ttl; scalar_t__* label; } ;
struct lwtunnel_state {int dummy; } ;


 struct mpls_iptunnel_encap* FUNC_0 (struct lwtunnel_state*) ;

__attribute__((used)) static int FUNC_1(struct lwtunnel_state *VAR_0, struct lwtunnel_state *VAR_1)
{
 struct mpls_iptunnel_encap *VAR_2 = FUNC_0(VAR_0);
 struct mpls_iptunnel_encap *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 if (VAR_2->labels != VAR_3->labels ||
     VAR_2->ttl_propagate != VAR_3->ttl_propagate ||
     VAR_2->default_ttl != VAR_3->default_ttl)
  return 1;

 for (VAR_4 = 0; VAR_4 < VAR_2->labels; VAR_4++)
  if (VAR_2->label[VAR_4] != VAR_3->label[VAR_4])
   return 1;
 return 0;
}
