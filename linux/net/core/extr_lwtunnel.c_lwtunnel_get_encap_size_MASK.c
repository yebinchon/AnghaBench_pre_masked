
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwtunnel_state {size_t type; } ;
struct lwtunnel_encap_ops {int (* get_encap_size ) (struct lwtunnel_state*) ;} ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int * VAR_2 ;
 int FUNC_1 (int ) ;
 struct lwtunnel_encap_ops* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (struct lwtunnel_state*) ;

int FUNC_6(struct lwtunnel_state *VAR_3)
{
 const struct lwtunnel_encap_ops *VAR_4;
 int VAR_5 = 0;

 if (!VAR_3)
  return 0;

 if (VAR_3->type == VAR_1 ||
     VAR_3->type > VAR_0)
  return 0;

 FUNC_3();
 VAR_4 = FUNC_2(VAR_2[VAR_3->type]);
 if (FUNC_0(VAR_4 && VAR_4->get_encap_size))
  VAR_5 = FUNC_1(VAR_4->get_encap_size(VAR_3));
 FUNC_4();

 return VAR_5;
}
