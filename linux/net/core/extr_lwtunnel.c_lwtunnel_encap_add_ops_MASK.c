
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwtunnel_encap_ops {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct lwtunnel_encap_ops const**,int *,struct lwtunnel_encap_ops const*) ;
 int * VAR_2 ;

int FUNC_1(const struct lwtunnel_encap_ops *VAR_3,
      unsigned int VAR_4)
{
 if (VAR_4 > VAR_1)
  return -VAR_0;

 return !FUNC_0((const struct lwtunnel_encap_ops **)
   &VAR_2[VAR_4],
   ((void*)0), VAR_3) ? 0 : -1;
}
