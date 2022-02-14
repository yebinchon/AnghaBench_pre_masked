
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_tsnmap_iter {scalar_t__ start; } ;
struct sctp_tsnmap {scalar_t__ cumulative_tsn_ack_point; } ;



__attribute__((used)) static void FUNC_0(const struct sctp_tsnmap *VAR_0,
      struct sctp_tsnmap_iter *VAR_1)
{

 VAR_1->start = VAR_0->cumulative_tsn_ack_point + 1;
}
