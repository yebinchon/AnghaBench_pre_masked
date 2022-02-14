
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
struct msghdr {int dummy; } ;
struct TYPE_2__ {int sendmsg; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,struct socket*,struct msghdr*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct msghdr*) ;

__attribute__((used)) static inline int FUNC_3(struct socket *VAR_3, struct msghdr *VAR_4)
{
 int VAR_5 = FUNC_1(VAR_3->ops->sendmsg, VAR_1,
         VAR_2, VAR_3, VAR_4,
         FUNC_2(VAR_4));
 FUNC_0(VAR_5 == -VAR_0);
 return VAR_5;
}
