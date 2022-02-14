
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
typedef int DEFINE_MUTEX ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net*) ;
 scalar_t__ FUNC_3 (struct net*) ;
 scalar_t__ FUNC_4 (struct net*) ;

int FUNC_5(struct net *VAR_0)
{
 static DEFINE_MUTEX(VAR_1);
 int VAR_2 = 0;

 if (FUNC_4(VAR_0))
  return VAR_2;

 FUNC_0(&VAR_1);
 if (FUNC_4(VAR_0))
  goto out;

 if (FUNC_3(VAR_0) != 0)
  VAR_2 = FUNC_2(VAR_0);

out:
 FUNC_1(&VAR_1);
 return VAR_2;
}
