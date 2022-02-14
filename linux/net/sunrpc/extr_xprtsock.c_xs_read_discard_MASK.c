
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int msg_iter; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,size_t) ;
 int FUNC_1 (struct socket*,struct msghdr*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct socket *VAR_1, struct msghdr *VAR_2, int VAR_3,
  size_t VAR_4)
{
 FUNC_0(&VAR_2->msg_iter, VAR_0, VAR_4);
 return FUNC_1(VAR_1, VAR_2, VAR_3);
}
