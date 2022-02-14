
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ip6_flowlabel {int users; } ;
typedef int __be32 ;


 struct ip6_flowlabel* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static struct ip6_flowlabel *FUNC_4(struct net *VAR_0, __be32 VAR_1)
{
 struct ip6_flowlabel *VAR_2;

 FUNC_2();
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 && !FUNC_1(&VAR_2->users))
  VAR_2 = ((void*)0);
 FUNC_3();
 return VAR_2;
}
