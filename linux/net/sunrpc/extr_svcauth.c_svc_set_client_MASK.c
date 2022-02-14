
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_rqst {TYPE_1__* rq_authop; int * rq_client; } ;
struct TYPE_2__ {int (* set_client ) (struct svc_rqst*) ;} ;


 int FUNC_0 (struct svc_rqst*) ;

int FUNC_1(struct svc_rqst *VAR_0)
{
 VAR_0->rq_client = ((void*)0);
 return VAR_0->rq_authop->set_client(VAR_0);
}
