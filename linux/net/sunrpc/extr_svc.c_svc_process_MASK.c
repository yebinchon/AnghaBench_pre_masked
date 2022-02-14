
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct svc_serv {TYPE_4__* sv_stats; } ;
struct TYPE_7__ {TYPE_2__* tail; int buflen; scalar_t__ page_len; scalar_t__ page_base; scalar_t__ len; int * pages; struct kvec* head; } ;
struct TYPE_5__ {struct kvec* head; } ;
struct svc_rqst {scalar_t__ rq_prot; TYPE_3__ rq_res; int * rq_respages; int * rq_next_page; struct svc_serv* rq_server; TYPE_1__ rq_arg; } ;
struct kvec {scalar_t__ iov_len; int iov_base; } ;
struct TYPE_8__ {int rpcbadfmt; } ;
struct TYPE_6__ {scalar_t__ iov_len; int * iov_base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct svc_rqst*) ;
 scalar_t__ FUNC_3 (struct kvec*) ;
 int FUNC_4 (struct svc_rqst*,char*,scalar_t__) ;
 int FUNC_5 (struct svc_rqst*,struct kvec*,struct kvec*) ;
 int FUNC_6 (struct kvec*,int ) ;
 int FUNC_7 (struct svc_rqst*) ;

int
FUNC_8(struct svc_rqst *VAR_2)
{
 struct kvec *VAR_3 = &VAR_2->rq_arg.head[0];
 struct kvec *VAR_4 = &VAR_2->rq_res.head[0];
 struct svc_serv *VAR_5 = VAR_2->rq_server;
 u32 VAR_6;





 VAR_2->rq_next_page = &VAR_2->rq_respages[1];
 VAR_4->iov_base = FUNC_1(VAR_2->rq_respages[0]);
 VAR_4->iov_len = 0;
 VAR_2->rq_res.pages = VAR_2->rq_respages + 1;
 VAR_2->rq_res.len = 0;
 VAR_2->rq_res.page_base = 0;
 VAR_2->rq_res.page_len = 0;
 VAR_2->rq_res.buflen = VAR_1;
 VAR_2->rq_res.tail[0].iov_base = ((void*)0);
 VAR_2->rq_res.tail[0].iov_len = 0;

 VAR_6 = FUNC_3(VAR_3);
 if (VAR_6 != 0) {

  FUNC_4(VAR_2, "bad direction %d, dropping request\n", VAR_6);
  VAR_5->sv_stats->rpcbadfmt++;
  goto out_drop;
 }


 if (VAR_2->rq_prot == VAR_0)
  FUNC_6(VAR_4, 0);


 if (FUNC_0(FUNC_5(VAR_2, VAR_3, VAR_4)))
  return FUNC_7(VAR_2);

out_drop:
 FUNC_2(VAR_2);
 return 0;
}
