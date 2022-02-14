
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct svc_rqst {int ** rq_respages; int ** rq_next_page; } ;
struct svc_rdma_send_ctxt {int sc_page_count; int ** sc_pages; } ;



__attribute__((used)) static void FUNC_0(struct svc_rqst *VAR_0,
       struct svc_rdma_send_ctxt *VAR_1)
{
 int VAR_2, VAR_3 = VAR_0->rq_next_page - VAR_0->rq_respages;

 VAR_1->sc_page_count += VAR_3;
 for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++) {
  VAR_1->sc_pages[VAR_2] = VAR_0->rq_respages[VAR_2];
  VAR_0->rq_respages[VAR_2] = ((void*)0);
 }


 VAR_0->rq_next_page = VAR_0->rq_respages;
}
