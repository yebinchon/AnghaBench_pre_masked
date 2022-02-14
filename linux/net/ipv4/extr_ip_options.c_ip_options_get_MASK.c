
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct TYPE_2__ {int __data; } ;
struct ip_options_rcu {TYPE_1__ opt; } ;


 int VAR_0 ;
 struct ip_options_rcu* FUNC_0 (int) ;
 int FUNC_1 (struct net*,struct ip_options_rcu**,struct ip_options_rcu*,int) ;
 int FUNC_2 (int ,unsigned char*,int) ;

int FUNC_3(struct net *VAR_1, struct ip_options_rcu **VAR_2,
     unsigned char *VAR_3, int VAR_4)
{
 struct ip_options_rcu *VAR_5 = FUNC_0(VAR_4);

 if (!VAR_5)
  return -VAR_0;
 if (VAR_4)
  FUNC_2(VAR_5->opt.__data, VAR_3, VAR_4);
 return FUNC_1(VAR_1, VAR_2, VAR_5, VAR_4);
}
