
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip6_flowlabel {int rcu; scalar_t__ opt; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct ip6_flowlabel*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ip6_flowlabel *VAR_2)
{
 if (!VAR_2)
  return;

 if (FUNC_1(VAR_2) || VAR_2->opt)
  FUNC_2(&VAR_1);

 FUNC_0(&VAR_2->rcu, VAR_0);
}
