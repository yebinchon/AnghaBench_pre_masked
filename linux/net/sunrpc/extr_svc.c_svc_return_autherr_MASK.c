
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int rq_flags; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;

__be32
FUNC_1(struct svc_rqst *VAR_1, __be32 VAR_2)
{
 FUNC_0(VAR_0, &VAR_1->rq_flags);
 return VAR_2;
}
