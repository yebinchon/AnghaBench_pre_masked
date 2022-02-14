
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct dccp_sock {scalar_t__ dccps_awl; scalar_t__ dccps_swl; scalar_t__ dccps_gsr; scalar_t__ dccps_gar; unsigned long dccps_rate_last; scalar_t__ dccps_awh; scalar_t__ dccps_swh; } ;
struct dccp_hdr {scalar_t__ dccph_type; } ;
struct TYPE_2__ {scalar_t__ dccpd_seq; scalar_t__ dccpd_ack_seq; } ;


 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,int ,unsigned long long,unsigned long long,unsigned long long,char*,unsigned long long,unsigned long long,unsigned long long) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 struct dccp_hdr* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (struct sock*,scalar_t__,scalar_t__) ;
 struct dccp_sock* FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,scalar_t__) ;
 unsigned long VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_11 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_12(struct sock *VAR_8, struct sk_buff *VAR_9)
{
 const struct dccp_hdr *VAR_10 = FUNC_6(VAR_9);
 struct dccp_sock *VAR_11 = FUNC_9(VAR_8);
 u64 VAR_12, VAR_13, VAR_14 = FUNC_1(VAR_9)->dccpd_seq,
   VAR_15 = FUNC_1(VAR_9)->dccpd_ack_seq;
 if (VAR_10->dccph_type == VAR_3 ||
     VAR_10->dccph_type == VAR_4) {
  if (FUNC_4(VAR_15, VAR_11->dccps_awl, VAR_11->dccps_awh) &&
      FUNC_5(VAR_11->dccps_swl, VAR_14) >= 0)
   FUNC_10(VAR_8, VAR_14);
  else
   return -1;
 }
 VAR_12 = VAR_11->dccps_swl;
 VAR_13 = VAR_11->dccps_awl;

 if (VAR_10->dccph_type == VAR_1 ||
     VAR_10->dccph_type == VAR_0 ||
     VAR_10->dccph_type == VAR_2) {
  VAR_12 = FUNC_0(VAR_11->dccps_gsr, 1);
  VAR_13 = VAR_11->dccps_gar;
 }

 if (FUNC_4(VAR_14, VAR_12, VAR_11->dccps_swh) &&
     (VAR_15 == VAR_5 ||
      FUNC_4(VAR_15, VAR_13, VAR_11->dccps_awh))) {
  FUNC_10(VAR_8, VAR_14);

  if (VAR_10->dccph_type != VAR_3 &&
      VAR_15 != VAR_5 &&
      FUNC_3(VAR_15, VAR_11->dccps_gar))
   VAR_11->dccps_gar = VAR_15;
 } else {
  unsigned long VAR_16 = VAR_6;
  if (FUNC_11(VAR_16, (VAR_11->dccps_rate_last +
          VAR_7)))
   return -1;

  FUNC_2("Step 6 failed for %s packet, "
     "(LSWL(%llu) <= P.seqno(%llu) <= S.SWH(%llu)) and "
     "(P.ackno %s or LAWL(%llu) <= P.ackno(%llu) <= S.AWH(%llu), "
     "sending SYNC...\n", FUNC_7(VAR_10->dccph_type),
     (unsigned long long) VAR_12, (unsigned long long) VAR_14,
     (unsigned long long) VAR_11->dccps_swh,
     (VAR_15 == VAR_5) ? "doesn't exist"
             : "exists",
     (unsigned long long) VAR_13, (unsigned long long) VAR_15,
     (unsigned long long) VAR_11->dccps_awh);

  VAR_11->dccps_rate_last = VAR_16;

  if (VAR_10->dccph_type == VAR_2)
   VAR_14 = VAR_11->dccps_gsr;
  FUNC_8(VAR_8, VAR_14, VAR_3);
  return -1;
 }

 return 0;
}
