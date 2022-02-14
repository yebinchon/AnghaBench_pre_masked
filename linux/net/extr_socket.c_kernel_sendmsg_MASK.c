
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct msghdr {int msg_iter; } ;
struct kvec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,struct kvec*,size_t,size_t) ;
 int FUNC_1 (struct socket*,struct msghdr*) ;

int FUNC_2(struct socket *VAR_1, struct msghdr *VAR_2,
     struct kvec *VAR_3, size_t VAR_4, size_t VAR_5)
{
 FUNC_0(&VAR_2->msg_iter, VAR_0, VAR_3, VAR_4, VAR_5);
 return FUNC_1(VAR_1, VAR_2);
}
