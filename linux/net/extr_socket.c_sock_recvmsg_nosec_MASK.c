
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
struct msghdr {int dummy; } ;
struct TYPE_2__ {int recvmsg; } ;


 int FUNC_0 (int ,int ,int ,struct socket*,struct msghdr*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct msghdr*) ;

__attribute__((used)) static inline int FUNC_2(struct socket *VAR_2, struct msghdr *VAR_3,
         int VAR_4)
{
 return FUNC_0(VAR_2->ops->recvmsg, VAR_0,
      VAR_1, VAR_2, VAR_3, FUNC_1(VAR_3),
      VAR_4);
}
