
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {struct auth_ops* rq_authop; } ;
struct auth_ops {int (* release ) (struct svc_rqst*) ;} ;


 int FUNC_0 (struct svc_rqst*) ;
 int FUNC_1 (struct auth_ops*) ;

int FUNC_2(struct svc_rqst *VAR_0)
{
 struct auth_ops *VAR_1 = VAR_0->rq_authop;
 int VAR_2 = 0;

 VAR_0->rq_authop = ((void*)0);

 if (VAR_1) {
  VAR_2 = VAR_1->release(VAR_0);
  FUNC_1(VAR_1);
 }
 return VAR_2;
}
