
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sctp_tsnmap {scalar_t__ base_tsn; scalar_t__ max_tsn_seen; scalar_t__ len; int tsn_map; int cumulative_tsn_ack_point; } ;
typedef scalar_t__ __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (struct sctp_tsnmap*) ;

void FUNC_4(struct sctp_tsnmap *VAR_1, __u32 VAR_2)
{
 u32 VAR_3;

 if (FUNC_0(VAR_2, VAR_1->base_tsn))
  return;
 if (!FUNC_0(VAR_2, VAR_1->base_tsn + VAR_0))
  return;


 if (FUNC_0(VAR_1->max_tsn_seen, VAR_2))
  VAR_1->max_tsn_seen = VAR_2;

 VAR_3 = VAR_2 - VAR_1->base_tsn + 1;

 VAR_1->base_tsn += VAR_3;
 VAR_1->cumulative_tsn_ack_point += VAR_3;
 if (VAR_3 >= VAR_1->len) {



  FUNC_2(VAR_1->tsn_map, VAR_1->len);
 } else {



  FUNC_1(VAR_1->tsn_map, VAR_1->tsn_map, VAR_3, VAR_1->len);
  FUNC_3(VAR_1);
 }
}
