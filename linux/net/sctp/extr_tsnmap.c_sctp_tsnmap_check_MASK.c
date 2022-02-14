
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sctp_tsnmap {scalar_t__ base_tsn; scalar_t__ len; int tsn_map; int cumulative_tsn_ack_point; } ;
typedef scalar_t__ __u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;

int FUNC_3(const struct sctp_tsnmap *VAR_1, __u32 VAR_2)
{
 u32 VAR_3;


 if (FUNC_1(VAR_2, VAR_1->cumulative_tsn_ack_point))
  return 1;




 if (!FUNC_0(VAR_2, VAR_1->base_tsn + VAR_0))
  return -1;


 VAR_3 = VAR_2 - VAR_1->base_tsn;


 if (VAR_3 < VAR_1->len && FUNC_2(VAR_3, VAR_1->tsn_map))
  return 1;
 else
  return 0;
}
