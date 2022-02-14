
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rpc_rqst {int rq_enc_pages_num; int * rq_release_snd_buf; int * rq_enc_pages; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct rpc_rqst *VAR_0)
{
 int VAR_1;

 for (VAR_1=0; VAR_1 < VAR_0->rq_enc_pages_num; VAR_1++)
  FUNC_0(VAR_0->rq_enc_pages[VAR_1]);
 FUNC_1(VAR_0->rq_enc_pages);
 VAR_0->rq_release_snd_buf = ((void*)0);
}
