
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_xprt {TYPE_2__* xpt_server; int xpt_flags; } ;
struct TYPE_4__ {TYPE_1__* sv_ops; } ;
struct TYPE_3__ {int (* svo_enqueue_xprt ) (struct svc_xprt*) ;} ;


 int FUNC_0 (int,char*,struct svc_xprt*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct svc_xprt*) ;
 int FUNC_4 (struct svc_xprt*) ;
 int FUNC_5 (struct svc_xprt*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct svc_xprt *VAR_1)
{
 if (!FUNC_6(VAR_0, &VAR_1->xpt_flags)) {
  FUNC_0(1, "xprt=0x%p already busy!", VAR_1);
  return;
 }




 FUNC_4(VAR_1);
 FUNC_2();
 FUNC_1(VAR_0, &VAR_1->xpt_flags);
 VAR_1->xpt_server->sv_ops->svo_enqueue_xprt(VAR_1);
 FUNC_5(VAR_1);
}
