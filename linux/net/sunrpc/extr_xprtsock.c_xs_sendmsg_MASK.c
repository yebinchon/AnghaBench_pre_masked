
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int msg_iter; } ;


 int FUNC_0 (int *,size_t) ;
 int FUNC_1 (struct socket*,struct msghdr*) ;

__attribute__((used)) static int FUNC_2(struct socket *VAR_0, struct msghdr *VAR_1, size_t VAR_2)
{
 if (VAR_2)
  FUNC_0(&VAR_1->msg_iter, VAR_2);
 return FUNC_1(VAR_0, VAR_1);
}
