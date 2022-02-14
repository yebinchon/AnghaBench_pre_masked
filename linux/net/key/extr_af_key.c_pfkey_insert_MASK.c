
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct netns_pfkey {int table; } ;
struct net {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct netns_pfkey* FUNC_2 (struct net*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (struct sock*,int *) ;
 struct net* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_2)
{
 struct net *VAR_3 = FUNC_4(VAR_2);
 struct netns_pfkey *VAR_4 = FUNC_2(VAR_3, VAR_1);

 FUNC_0(&VAR_0);
 FUNC_3(VAR_2, &VAR_4->table);
 FUNC_1(&VAR_0);
}
