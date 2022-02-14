
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int rq_res; } ;


 int VAR_0 ;
 int FUNC_0 (struct svc_rqst*,int *) ;

__attribute__((used)) static int
FUNC_1(struct svc_rqst *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1, &VAR_1->rq_res);
 if (VAR_2 == -VAR_0)

  VAR_2 = FUNC_0(VAR_1, &VAR_1->rq_res);

 return VAR_2;
}
