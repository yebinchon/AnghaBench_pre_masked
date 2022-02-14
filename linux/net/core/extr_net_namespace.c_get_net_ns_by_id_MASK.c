
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int netns_ids; } ;


 struct net* FUNC_0 (int *,int) ;
 struct net* FUNC_1 (struct net*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

struct net *FUNC_4(struct net *VAR_0, int VAR_1)
{
 struct net *VAR_2;

 if (VAR_1 < 0)
  return ((void*)0);

 FUNC_2();
 VAR_2 = FUNC_0(&VAR_0->netns_ids, VAR_1);
 if (VAR_2)
  VAR_2 = FUNC_1(VAR_2);
 FUNC_3();

 return VAR_2;
}
