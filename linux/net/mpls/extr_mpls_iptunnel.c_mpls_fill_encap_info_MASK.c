
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mpls_iptunnel_encap {scalar_t__ ttl_propagate; int default_ttl; int label; int labels; } ;
struct lwtunnel_state {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct mpls_iptunnel_encap* FUNC_0 (struct lwtunnel_state*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_4,
    struct lwtunnel_state *VAR_5)
{
 struct mpls_iptunnel_encap *VAR_6;

 VAR_6 = FUNC_0(VAR_5);

 if (FUNC_1(VAR_4, VAR_1, VAR_6->labels,
      VAR_6->label))
  goto nla_put_failure;

 if (VAR_6->ttl_propagate != VAR_3 &&
     FUNC_2(VAR_4, VAR_2, VAR_6->default_ttl))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -VAR_0;
}
