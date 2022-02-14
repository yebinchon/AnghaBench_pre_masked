
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int sk; } ;
struct net {int dummy; } ;


 struct net* FUNC_0 (int ) ;
 struct socket* FUNC_1 (int,int*) ;
 int FUNC_2 (struct socket*) ;

bool FUNC_3(struct net *VAR_0, int VAR_1)
{
 int VAR_2;
 struct socket *VAR_3 = FUNC_1(VAR_1, &VAR_2);
 bool VAR_4 = 0;

 if (!VAR_3)
  goto out;
 if (FUNC_0(VAR_3->sk) != VAR_0)
  VAR_4 = 1;
 FUNC_2(VAR_3);
out:
 return VAR_4;
}
