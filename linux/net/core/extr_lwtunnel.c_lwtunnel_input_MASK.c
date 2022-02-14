
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct lwtunnel_state {size_t type; } ;
struct lwtunnel_encap_ops {int (* input ) (struct sk_buff*) ;} ;
struct dst_entry {struct lwtunnel_state* lwtstate; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 scalar_t__ FUNC_1 (int ) ;
 int * VAR_4 ;
 struct lwtunnel_encap_ops* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct dst_entry* FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*) ;

int FUNC_7(struct sk_buff *VAR_5)
{
 struct dst_entry *VAR_6 = FUNC_5(VAR_5);
 const struct lwtunnel_encap_ops *VAR_7;
 struct lwtunnel_state *VAR_8;
 int VAR_9 = -VAR_0;

 if (!VAR_6)
  goto drop;
 VAR_8 = VAR_6->lwtstate;

 if (VAR_8->type == VAR_3 ||
     VAR_8->type > VAR_2)
  return 0;

 VAR_9 = -VAR_1;
 FUNC_3();
 VAR_7 = FUNC_2(VAR_4[VAR_8->type]);
 if (FUNC_1(VAR_7 && VAR_7->input))
  VAR_9 = VAR_7->input(VAR_5);
 FUNC_4();

 if (VAR_9 == -VAR_1)
  goto drop;

 return VAR_9;

drop:
 FUNC_0(VAR_5);

 return VAR_9;
}
