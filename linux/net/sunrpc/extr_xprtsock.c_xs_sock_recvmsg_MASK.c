
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int msg_iter; } ;
typedef scalar_t__ ssize_t ;


 int FUNC_0 (int *,size_t) ;
 scalar_t__ FUNC_1 (struct socket*,struct msghdr*,int) ;

__attribute__((used)) static ssize_t
FUNC_2(struct socket *VAR_0, struct msghdr *VAR_1, int VAR_2, size_t VAR_3)
{
 ssize_t VAR_4;
 if (VAR_3 != 0)
  FUNC_0(&VAR_1->msg_iter, VAR_3);
 VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 return VAR_4 > 0 ? VAR_4 + VAR_3 : VAR_4;
}
