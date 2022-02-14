
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_xprt {TYPE_2__* xpt_server; int xpt_flags; } ;
struct TYPE_4__ {TYPE_1__* sv_ops; } ;
struct TYPE_3__ {int (* svo_enqueue_xprt ) (struct svc_xprt*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct svc_xprt*) ;
 scalar_t__ FUNC_1 (int ,int *) ;

void FUNC_2(struct svc_xprt *VAR_1)
{
 if (FUNC_1(VAR_0, &VAR_1->xpt_flags))
  return;
 VAR_1->xpt_server->sv_ops->svo_enqueue_xprt(VAR_1);
}
