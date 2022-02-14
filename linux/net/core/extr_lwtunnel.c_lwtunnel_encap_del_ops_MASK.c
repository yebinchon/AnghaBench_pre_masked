
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwtunnel_encap_ops {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 struct lwtunnel_encap_ops const* FUNC_0 (struct lwtunnel_encap_ops const**,struct lwtunnel_encap_ops const*,int *) ;
 int * VAR_3 ;
 int FUNC_1 () ;

int FUNC_2(const struct lwtunnel_encap_ops *VAR_4,
      unsigned int VAR_5)
{
 int VAR_6;

 if (VAR_5 == VAR_2 ||
     VAR_5 > VAR_1)
  return -VAR_0;

 VAR_6 = (FUNC_0((const struct lwtunnel_encap_ops **)
         &VAR_3[VAR_5],
         VAR_4, ((void*)0)) == VAR_4) ? 0 : -1;

 FUNC_1();

 return VAR_6;
}
