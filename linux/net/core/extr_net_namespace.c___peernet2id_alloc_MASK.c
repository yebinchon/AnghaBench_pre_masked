
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int netns_ids; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net*,struct net*,int) ;
 int FUNC_1 (int *,int ,struct net*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct net *VAR_3, struct net *VAR_4, bool *VAR_5)
{
 int VAR_6 = FUNC_1(&VAR_3->netns_ids, VAR_2, VAR_4);
 bool VAR_7 = *VAR_5;

 *VAR_5 = 0;


 if (VAR_6 == VAR_1)
  return 0;
 if (VAR_6 > 0)
  return VAR_6;

 if (VAR_7) {
  VAR_6 = FUNC_0(VAR_3, VAR_4, -1);
  *VAR_5 = 1;
  return VAR_6 >= 0 ? VAR_6 : VAR_0;
 }

 return VAR_0;
}
