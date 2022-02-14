
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpls_iptunnel_encap {int labels; scalar_t__ ttl_propagate; } ;
struct lwtunnel_state {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct mpls_iptunnel_encap* FUNC_0 (struct lwtunnel_state*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct lwtunnel_state *VAR_1)
{
 struct mpls_iptunnel_encap *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_1);

 VAR_3 = FUNC_1(VAR_2->labels * 4);

 if (VAR_2->ttl_propagate != VAR_0)
  VAR_3 += FUNC_1(1);

 return VAR_3;
}
