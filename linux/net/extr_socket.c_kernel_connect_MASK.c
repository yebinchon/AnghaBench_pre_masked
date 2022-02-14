
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {int (* connect ) (struct socket*,struct sockaddr*,int,int) ;} ;


 int FUNC_0 (struct socket*,struct sockaddr*,int,int) ;

int FUNC_1(struct socket *VAR_0, struct sockaddr *VAR_1, int VAR_2,
     int VAR_3)
{
 return VAR_0->ops->connect(VAR_0, VAR_1, VAR_2, VAR_3);
}
