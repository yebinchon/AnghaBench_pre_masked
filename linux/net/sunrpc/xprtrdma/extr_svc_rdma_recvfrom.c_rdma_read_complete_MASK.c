
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buflen; int len; int * tail; int * head; int page_len; int * pages; } ;
struct svc_rqst {TYPE_1__ rq_arg; int * rq_respages; int * rq_next_page; int * rq_pages; } ;
struct TYPE_4__ {int buflen; int len; int * tail; int * head; int page_len; } ;
struct svc_rdma_recv_ctxt {int rc_page_count; size_t rc_hdr_count; TYPE_2__ rc_arg; int * rc_pages; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct svc_rqst *VAR_0,
          struct svc_rdma_recv_ctxt *VAR_1)
{
 int VAR_2;




 for (VAR_2 = 0; VAR_2 < VAR_1->rc_page_count; VAR_2++) {
  FUNC_0(VAR_0->rq_pages[VAR_2]);
  VAR_0->rq_pages[VAR_2] = VAR_1->rc_pages[VAR_2];
 }
 VAR_1->rc_page_count = 0;


 VAR_0->rq_arg.pages = &VAR_0->rq_pages[VAR_1->rc_hdr_count];
 VAR_0->rq_arg.page_len = VAR_1->rc_arg.page_len;


 VAR_0->rq_respages = &VAR_0->rq_pages[VAR_2];
 VAR_0->rq_next_page = VAR_0->rq_respages + 1;


 VAR_0->rq_arg.head[0] = VAR_1->rc_arg.head[0];
 VAR_0->rq_arg.tail[0] = VAR_1->rc_arg.tail[0];
 VAR_0->rq_arg.len = VAR_1->rc_arg.len;
 VAR_0->rq_arg.buflen = VAR_1->rc_arg.buflen;
}
