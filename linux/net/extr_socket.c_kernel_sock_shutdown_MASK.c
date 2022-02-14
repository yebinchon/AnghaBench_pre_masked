
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
typedef enum sock_shutdown_cmd { ____Placeholder_sock_shutdown_cmd } sock_shutdown_cmd ;
struct TYPE_2__ {int (* shutdown ) (struct socket*,int) ;} ;


 int FUNC_0 (struct socket*,int) ;

int FUNC_1(struct socket *VAR_0, enum sock_shutdown_cmd VAR_1)
{
 return VAR_0->ops->shutdown(VAR_0, VAR_1);
}
