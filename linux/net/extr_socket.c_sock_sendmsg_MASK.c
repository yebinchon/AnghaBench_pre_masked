
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int dummy; } ;


 int FUNC_0 (struct msghdr*) ;
 int FUNC_1 (struct socket*,struct msghdr*,int ) ;
 int FUNC_2 (struct socket*,struct msghdr*) ;

int FUNC_3(struct socket *VAR_0, struct msghdr *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_0, VAR_1,
       FUNC_0(VAR_1));

 return VAR_2 ?: FUNC_2(VAR_0, VAR_1);
}
