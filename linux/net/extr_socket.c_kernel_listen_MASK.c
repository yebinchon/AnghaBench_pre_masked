
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* listen ) (struct socket*,int) ;} ;


 int FUNC_0 (struct socket*,int) ;

int FUNC_1(struct socket *VAR_0, int VAR_1)
{
 return VAR_0->ops->listen(VAR_0, VAR_1);
}
