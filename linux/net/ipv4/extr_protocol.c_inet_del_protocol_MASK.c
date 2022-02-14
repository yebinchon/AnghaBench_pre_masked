
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_protocol {int dummy; } ;


 struct net_protocol const* FUNC_0 (struct net_protocol const**,struct net_protocol const*,int *) ;
 int * VAR_0 ;
 int FUNC_1 () ;

int FUNC_2(const struct net_protocol *VAR_1, unsigned char VAR_2)
{
 int VAR_3;

 VAR_3 = (FUNC_0((const struct net_protocol **)&VAR_0[VAR_2],
         VAR_1, ((void*)0)) == VAR_1) ? 0 : -1;

 FUNC_1();

 return VAR_3;
}
