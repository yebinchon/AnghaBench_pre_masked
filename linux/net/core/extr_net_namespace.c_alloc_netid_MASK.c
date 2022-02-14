
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int netns_ids; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct net*,int,int,int ) ;

__attribute__((used)) static int FUNC_1(struct net *VAR_1, struct net *VAR_2, int VAR_3)
{
 int VAR_4 = 0, VAR_5 = 0;

 if (VAR_3 >= 0) {
  VAR_4 = VAR_3;
  VAR_5 = VAR_3 + 1;
 }

 return FUNC_0(&VAR_1->netns_ids, VAR_2, VAR_4, VAR_5, VAR_0);
}
