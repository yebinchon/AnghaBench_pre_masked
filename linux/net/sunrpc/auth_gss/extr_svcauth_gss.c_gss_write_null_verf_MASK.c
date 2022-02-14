
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* head; } ;
struct svc_rqst {TYPE_1__ rq_res; } ;
typedef int __be32 ;
struct TYPE_4__ {int iov_len; int * iov_base; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (struct svc_rqst*,int *) ;

__attribute__((used)) static int
FUNC_2(struct svc_rqst *VAR_1)
{
 __be32 *VAR_2;

 FUNC_0(VAR_1->rq_res.head, VAR_0);
 VAR_2 = VAR_1->rq_res.head->iov_base + VAR_1->rq_res.head->iov_len;

 *VAR_2++ = 0;
 if (!FUNC_1(VAR_1, VAR_2))
  return -1;
 return 0;
}
