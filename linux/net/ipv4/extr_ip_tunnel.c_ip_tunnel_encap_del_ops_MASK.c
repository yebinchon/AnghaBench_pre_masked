
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_tunnel_encap_ops {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 struct ip_tunnel_encap_ops const* FUNC_0 (struct ip_tunnel_encap_ops const**,struct ip_tunnel_encap_ops const*,int *) ;
 int * VAR_2 ;
 int FUNC_1 () ;

int FUNC_2(const struct ip_tunnel_encap_ops *VAR_3,
       unsigned int VAR_4)
{
 int VAR_5;

 if (VAR_4 >= VAR_1)
  return -VAR_0;

 VAR_5 = (FUNC_0((const struct ip_tunnel_encap_ops **)
         &VAR_2[VAR_4],
         VAR_3, ((void*)0)) == VAR_3) ? 0 : -1;

 FUNC_1();

 return VAR_5;
}
