
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int rq_auth_data; int rq_argp; int rq_resp; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct svc_rqst*,int ) ;
 int VAR_0 ;
 int FUNC_2 (struct svc_rqst*) ;

void
FUNC_3(struct svc_rqst *VAR_1)
{
 FUNC_2(VAR_1);
 FUNC_0(VAR_1->rq_resp);
 FUNC_0(VAR_1->rq_argp);
 FUNC_0(VAR_1->rq_auth_data);
 FUNC_1(VAR_1, VAR_0);
}
