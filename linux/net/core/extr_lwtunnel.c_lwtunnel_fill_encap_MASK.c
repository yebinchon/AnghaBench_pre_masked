
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct lwtunnel_state {size_t type; } ;
struct lwtunnel_encap_ops {int (* fill_encap ) (struct sk_buff*,struct lwtunnel_state*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_4 ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct sk_buff*,int,size_t) ;
 struct lwtunnel_encap_ops* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct sk_buff*,struct lwtunnel_state*) ;

int FUNC_9(struct sk_buff *VAR_5, struct lwtunnel_state *VAR_6,
   int VAR_7, int VAR_8)
{
 const struct lwtunnel_encap_ops *VAR_9;
 struct nlattr *VAR_10;
 int VAR_11;

 if (!VAR_6)
  return 0;

 if (VAR_6->type == VAR_3 ||
     VAR_6->type > VAR_2)
  return 0;

 VAR_10 = FUNC_3(VAR_5, VAR_7);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = -VAR_1;
 FUNC_6();
 VAR_9 = FUNC_5(VAR_4[VAR_6->type]);
 if (FUNC_0(VAR_9 && VAR_9->fill_encap))
  VAR_11 = VAR_9->fill_encap(VAR_5, VAR_6);
 FUNC_7();

 if (VAR_11)
  goto nla_put_failure;
 FUNC_2(VAR_5, VAR_10);
 VAR_11 = FUNC_4(VAR_5, VAR_8, VAR_6->type);
 if (VAR_11)
  goto nla_put_failure;

 return 0;

nla_put_failure:
 FUNC_1(VAR_5, VAR_10);

 return (VAR_11 == -VAR_1 ? 0 : VAR_11);
}
