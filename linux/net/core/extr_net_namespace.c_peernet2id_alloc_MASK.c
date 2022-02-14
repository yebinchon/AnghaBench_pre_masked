
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int nsid_lock; int count; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net*,struct net*,int*) ;
 scalar_t__ FUNC_1 (struct net*) ;
 int FUNC_2 (struct net*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct net*,int ,int,int ,int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct net *VAR_2, struct net *VAR_3, gfp_t VAR_4)
{
 bool VAR_5 = 0, VAR_6 = 0;
 int VAR_7;

 if (FUNC_3(&VAR_2->count) == 0)
  return VAR_0;
 FUNC_5(&VAR_2->nsid_lock);






 if (FUNC_1(VAR_3))
  VAR_6 = VAR_5 = 1;
 VAR_7 = FUNC_0(VAR_2, VAR_3, &VAR_5);
 FUNC_6(&VAR_2->nsid_lock);
 if (VAR_5 && VAR_7 >= 0)
  FUNC_4(VAR_2, VAR_1, VAR_7, 0, ((void*)0), VAR_4);
 if (VAR_6)
  FUNC_2(VAR_3);
 return VAR_7;
}
