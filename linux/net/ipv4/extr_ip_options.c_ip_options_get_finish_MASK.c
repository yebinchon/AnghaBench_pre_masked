
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net {int dummy; } ;
struct TYPE_2__ {int optlen; int * __data; } ;
struct ip_options_rcu {TYPE_1__ opt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct net*,TYPE_1__*,int *) ;
 int FUNC_1 (struct ip_options_rcu*) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_2, struct ip_options_rcu **VAR_3,
     struct ip_options_rcu *VAR_4, int VAR_5)
{
 while (VAR_5 & 3)
  VAR_4->opt.__data[VAR_5++] = VAR_1;
 VAR_4->opt.optlen = VAR_5;
 if (VAR_5 && FUNC_0(VAR_2, &VAR_4->opt, ((void*)0))) {
  FUNC_1(VAR_4);
  return -VAR_0;
 }
 FUNC_1(*VAR_3);
 *VAR_3 = VAR_4;
 return 0;
}
