
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_options_rcu {int dummy; } ;


 int VAR_0 ;
 struct ip_options_rcu* FUNC_0 (int,int ) ;

__attribute__((used)) static struct ip_options_rcu *FUNC_1(const int VAR_1)
{
 return FUNC_0(sizeof(struct ip_options_rcu) + ((VAR_1 + 3) & ~3),
         VAR_0);
}
