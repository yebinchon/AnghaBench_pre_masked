
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_rqst {int rq_rcv_buf; TYPE_2__* rq_cred; } ;
struct page {int dummy; } ;
struct TYPE_4__ {TYPE_1__* cr_auth; } ;
struct TYPE_3__ {int au_ralign; } ;


 int VAR_0 ;
 int FUNC_0 (struct rpc_rqst*) ;
 int FUNC_1 (int *,unsigned int,struct page**,unsigned int,unsigned int) ;

void FUNC_2(struct rpc_rqst *VAR_1, struct page **VAR_2,
        unsigned int VAR_3, unsigned int VAR_4,
        unsigned int VAR_5)
{



 VAR_5 += VAR_0 + VAR_1->rq_cred->cr_auth->au_ralign - 1;

 FUNC_1(&VAR_1->rq_rcv_buf, VAR_5 << 2, VAR_2, VAR_3, VAR_4);
 FUNC_0(VAR_1);
}
