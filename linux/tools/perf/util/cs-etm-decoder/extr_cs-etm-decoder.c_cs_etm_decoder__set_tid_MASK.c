
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct cs_etm_queue {int dummy; } ;
struct cs_etm_packet_queue {int dummy; } ;
typedef int pid_t ;
struct TYPE_4__ {int context_id; int ctxt_id_valid; } ;
struct TYPE_5__ {TYPE_1__ context; } ;
typedef TYPE_2__ ocsd_generic_trace_elem ;
typedef int ocsd_datapath_resp_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct cs_etm_queue*,int ,int const) ;
 int FUNC_1 (struct cs_etm_packet_queue*) ;

__attribute__((used)) static ocsd_datapath_resp_t
FUNC_2(struct cs_etm_queue *VAR_2,
   struct cs_etm_packet_queue *VAR_3,
   const ocsd_generic_trace_elem *VAR_4,
   const uint8_t VAR_5)
{
 pid_t VAR_6;


 if (!VAR_4->context.ctxt_id_valid)
  return VAR_0;

 VAR_6 = VAR_4->context.context_id;
 if (FUNC_0(VAR_2, VAR_6, VAR_5))
  return VAR_1;





 FUNC_1(VAR_3);

 return VAR_0;
}
