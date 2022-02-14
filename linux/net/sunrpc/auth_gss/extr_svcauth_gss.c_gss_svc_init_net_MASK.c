
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;


 int FUNC_0 (struct net*) ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 (struct net*) ;
 int FUNC_4 (struct net*) ;

int
FUNC_5(struct net *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  return VAR_1;
 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1)
  goto out1;
 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  goto out2;
 return 0;
out2:
 FUNC_1(VAR_0);
out1:
 FUNC_3(VAR_0);
 return VAR_1;
}
