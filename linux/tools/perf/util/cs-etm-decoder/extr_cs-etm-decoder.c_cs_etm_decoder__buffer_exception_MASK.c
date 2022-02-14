
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct cs_etm_packet_queue {size_t tail; struct cs_etm_packet* packet_buffer; } ;
struct cs_etm_packet {int exception_number; } ;
struct TYPE_3__ {int exception_number; } ;
typedef TYPE_1__ ocsd_generic_trace_elem ;
typedef int ocsd_datapath_resp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cs_etm_packet_queue*,int const,int ) ;

__attribute__((used)) static ocsd_datapath_resp_t
FUNC_1(struct cs_etm_packet_queue *VAR_3,
     const ocsd_generic_trace_elem *VAR_4,
     const uint8_t VAR_5)
{ int VAR_6 = 0;
 struct cs_etm_packet *VAR_7;

 VAR_6 = FUNC_0(VAR_3, VAR_5,
         VAR_0);
 if (VAR_6 != VAR_1 && VAR_6 != VAR_2)
  return VAR_6;

 VAR_7 = &VAR_3->packet_buffer[VAR_3->tail];
 VAR_7->exception_number = VAR_4->exception_number;

 return VAR_6;
}
