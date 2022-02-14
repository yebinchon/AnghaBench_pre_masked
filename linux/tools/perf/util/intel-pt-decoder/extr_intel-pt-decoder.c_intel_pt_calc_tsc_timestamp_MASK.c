
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {int payload; } ;
struct intel_pt_decoder {int have_tma; int timestamp; scalar_t__ tsc_slip; scalar_t__ last_packet_type; scalar_t__ cyc_ref_timestamp; int have_calc_cyc_to_tsc; scalar_t__ cycle_cnt; scalar_t__ timestamp_insn_cnt; scalar_t__ tsc_timestamp; TYPE_1__ packet; scalar_t__ ref_timestamp; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int,scalar_t__) ;
 int FUNC_1 (struct intel_pt_decoder*,int) ;
 int FUNC_2 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct intel_pt_decoder *VAR_1)
{
 uint64_t VAR_2;

 VAR_1->have_tma = 0;

 if (VAR_1->ref_timestamp) {
  VAR_2 = FUNC_0(VAR_1->packet.payload,
         VAR_1->ref_timestamp);
  VAR_1->tsc_timestamp = VAR_2;
  VAR_1->timestamp = VAR_2;
  VAR_1->ref_timestamp = 0;
  VAR_1->timestamp_insn_cnt = 0;
 } else if (VAR_1->timestamp) {
  VAR_2 = VAR_1->packet.payload |
       (VAR_1->timestamp & (0xffULL << 56));
  VAR_1->tsc_timestamp = VAR_2;
  if (VAR_2 < VAR_1->timestamp &&
      VAR_1->timestamp - VAR_2 < VAR_1->tsc_slip) {
   FUNC_2("Suppressing backwards timestamp",
     VAR_2);
   VAR_2 = VAR_1->timestamp;
  }
  if (VAR_2 < VAR_1->timestamp) {
   FUNC_2("Wraparound timestamp", VAR_2);
   VAR_2 += (1ULL << 56);
   VAR_1->tsc_timestamp = VAR_2;
  }
  VAR_1->timestamp = VAR_2;
  VAR_1->timestamp_insn_cnt = 0;
 }

 if (VAR_1->last_packet_type == VAR_0) {
  VAR_1->cyc_ref_timestamp = VAR_1->timestamp;
  VAR_1->cycle_cnt = 0;
  VAR_1->have_calc_cyc_to_tsc = 0;
  FUNC_1(VAR_1, 0);
 }

 FUNC_2("Setting timestamp", VAR_1->timestamp);
}
