
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct cs_etm_traceid_queue {struct cs_etm_packet* prev_packet; struct cs_etm_packet* packet; int trace_chan_id; } ;
struct cs_etm_queue {int dummy; } ;
struct cs_etm_packet {scalar_t__ exception_number; int end_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct cs_etm_queue*,int ,struct cs_etm_packet*,int ) ;

__attribute__((used)) static bool FUNC_1(struct cs_etm_queue *VAR_4,
          struct cs_etm_traceid_queue *VAR_5, u64 VAR_6)
{
 u8 VAR_7 = VAR_5->trace_chan_id;
 struct cs_etm_packet *VAR_8 = VAR_5->packet;
 struct cs_etm_packet *VAR_9 = VAR_5->prev_packet;

 if (VAR_6 == VAR_2)
  if (VAR_8->exception_number == VAR_0)
   return 1;






 if (VAR_6 == VAR_3) {
  if (VAR_8->exception_number == VAR_1 &&
      FUNC_0(VAR_4, VAR_7, VAR_9,
      VAR_9->end_addr))
   return 1;
 }

 return 0;
}
