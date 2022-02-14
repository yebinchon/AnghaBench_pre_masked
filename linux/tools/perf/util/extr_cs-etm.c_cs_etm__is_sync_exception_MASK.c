
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
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct cs_etm_queue*,int ,struct cs_etm_packet*,int ) ;

__attribute__((used)) static bool FUNC_1(struct cs_etm_queue *VAR_16,
          struct cs_etm_traceid_queue *VAR_17,
          u64 VAR_18)
{
 u8 VAR_19 = VAR_17->trace_chan_id;
 struct cs_etm_packet *VAR_20 = VAR_17->packet;
 struct cs_etm_packet *VAR_21 = VAR_17->prev_packet;

 if (VAR_18 == VAR_14)
  if (VAR_20->exception_number == VAR_5 ||
      VAR_20->exception_number == VAR_2 ||
      VAR_20->exception_number == VAR_3 ||
      VAR_20->exception_number == VAR_6 ||
      VAR_20->exception_number == VAR_4 ||
      VAR_20->exception_number == VAR_0 ||
      VAR_20->exception_number == VAR_1)
   return 1;

 if (VAR_18 == VAR_15) {
  if (VAR_20->exception_number == VAR_13 ||
      VAR_20->exception_number == VAR_7 ||
      VAR_20->exception_number == VAR_12 ||
      VAR_20->exception_number == VAR_9)
   return 1;





  if (VAR_20->exception_number == VAR_8 &&
      !FUNC_0(VAR_16, VAR_19, VAR_21,
       VAR_21->end_addr))
   return 1;
  if (VAR_20->exception_number > VAR_11 &&
      VAR_20->exception_number <= VAR_10)
   return 1;
 }

 return 0;
}
