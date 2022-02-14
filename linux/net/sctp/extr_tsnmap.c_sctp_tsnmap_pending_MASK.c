
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sctp_tsnmap {scalar_t__ cumulative_tsn_ack_point; scalar_t__ max_tsn_seen; scalar_t__ base_tsn; scalar_t__ len; int tsn_map; } ;
typedef scalar_t__ __u32 ;
typedef scalar_t__ __u16 ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;

__u16 FUNC_1(struct sctp_tsnmap *VAR_0)
{
 __u32 VAR_1 = VAR_0->cumulative_tsn_ack_point;
 __u32 VAR_2 = VAR_0->max_tsn_seen;
 __u32 VAR_3 = VAR_0->base_tsn;
 __u16 VAR_4;
 u32 VAR_5;

 VAR_4 = VAR_2 - VAR_1;
 VAR_5 = VAR_2 - VAR_3;

 if (VAR_5 == 0 || VAR_5 >= VAR_0->len)
  goto out;

 VAR_4 -= FUNC_0(VAR_0->tsn_map, VAR_5 + 1);
out:
 return VAR_4;
}
