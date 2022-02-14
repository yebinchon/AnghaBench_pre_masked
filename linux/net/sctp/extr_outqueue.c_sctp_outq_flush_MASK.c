
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sctp_outq {TYPE_1__* asoc; } ;
struct sctp_flush_ctx {int gfp; int * packet; TYPE_1__* asoc; int transport_list; int * transport; struct sctp_outq* q; } ;
typedef int gfp_t ;
struct TYPE_2__ {scalar_t__ src_out_of_asoc_ok; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct sctp_flush_ctx*) ;
 int FUNC_2 (struct sctp_flush_ctx*,int) ;
 int FUNC_3 (struct sctp_flush_ctx*) ;

__attribute__((used)) static void FUNC_4(struct sctp_outq *VAR_0, int VAR_1, gfp_t VAR_2)
{
 struct sctp_flush_ctx VAR_3 = {
  .q = VAR_0,
  .transport = ((void*)0),
  .transport_list = FUNC_0(VAR_3.transport_list),
  .asoc = VAR_0->asoc,
  .packet = ((void*)0),
  .gfp = VAR_2,
 };
 FUNC_1(&VAR_3);

 if (VAR_0->asoc->src_out_of_asoc_ok)
  goto sctp_flush_out;

 FUNC_2(&VAR_3, VAR_1);

sctp_flush_out:

 FUNC_3(&VAR_3);
}
