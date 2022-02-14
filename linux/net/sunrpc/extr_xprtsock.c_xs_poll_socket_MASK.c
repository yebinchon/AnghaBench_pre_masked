
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock_xprt {TYPE_2__* sock; int file; } ;
typedef int __poll_t ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* poll ) (int ,TYPE_2__*,int *) ;} ;


 int FUNC_0 (int ,TYPE_2__*,int *) ;

__attribute__((used)) static __poll_t FUNC_1(struct sock_xprt *VAR_0)
{
 return VAR_0->sock->ops->poll(VAR_0->file, VAR_0->sock,
   ((void*)0));
}
