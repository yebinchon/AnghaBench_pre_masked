
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwtunnel_state {size_t type; } ;
struct lwtunnel_encap_ops {int (* cmp_encap ) (struct lwtunnel_state*,struct lwtunnel_state*) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int * VAR_2 ;
 struct lwtunnel_encap_ops* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct lwtunnel_state*,struct lwtunnel_state*) ;

int FUNC_5(struct lwtunnel_state *VAR_3, struct lwtunnel_state *VAR_4)
{
 const struct lwtunnel_encap_ops *VAR_5;
 int VAR_6 = 0;

 if (!VAR_3 && !VAR_4)
  return 0;

 if (!VAR_3 || !VAR_4)
  return 1;

 if (VAR_3->type != VAR_4->type)
  return 1;

 if (VAR_3->type == VAR_1 ||
     VAR_3->type > VAR_0)
  return 0;

 FUNC_2();
 VAR_5 = FUNC_1(VAR_2[VAR_3->type]);
 if (FUNC_0(VAR_5 && VAR_5->cmp_encap))
  VAR_6 = VAR_5->cmp_encap(VAR_3, VAR_4);
 FUNC_3();

 return VAR_6;
}
