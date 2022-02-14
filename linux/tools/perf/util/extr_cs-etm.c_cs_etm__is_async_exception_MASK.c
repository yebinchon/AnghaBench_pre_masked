
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct cs_etm_traceid_queue {struct cs_etm_packet* packet; } ;
struct cs_etm_packet {scalar_t__ exception_number; } ;


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

__attribute__((used)) static bool FUNC_0(struct cs_etm_traceid_queue *VAR_14,
           u64 VAR_15)
{
 struct cs_etm_packet *VAR_16 = VAR_14->packet;

 if (VAR_15 == VAR_12)
  if (VAR_16->exception_number == VAR_1 ||
      VAR_16->exception_number == VAR_0 ||
      VAR_16->exception_number == VAR_4 ||
      VAR_16->exception_number == VAR_3 ||
      VAR_16->exception_number == VAR_2)
   return 1;

 if (VAR_15 == VAR_13)
  if (VAR_16->exception_number == VAR_10 ||
      VAR_16->exception_number == VAR_6 ||
      VAR_16->exception_number == VAR_11 ||
      VAR_16->exception_number == VAR_8 ||
      VAR_16->exception_number == VAR_5 ||
      VAR_16->exception_number == VAR_9 ||
      VAR_16->exception_number == VAR_7)
   return 1;

 return 0;
}
