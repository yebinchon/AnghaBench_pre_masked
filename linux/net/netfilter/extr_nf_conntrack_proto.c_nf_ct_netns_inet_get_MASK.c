
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct net*,int ) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2, VAR_0);
 if (VAR_3 < 0)
  goto err1;
 VAR_3 = FUNC_0(VAR_2, VAR_1);
 if (VAR_3 < 0)
  goto err2;

 return VAR_3;
err2:
 FUNC_1(VAR_2, VAR_0);
err1:
 return VAR_3;
}
