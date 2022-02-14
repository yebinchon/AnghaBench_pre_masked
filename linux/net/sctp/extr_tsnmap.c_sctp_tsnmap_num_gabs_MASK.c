
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_tsnmap_iter {int dummy; } ;
struct sctp_tsnmap {int dummy; } ;
struct sctp_gap_ack_block {void* end; void* start; } ;
typedef int __u16 ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sctp_tsnmap*) ;
 int FUNC_2 (struct sctp_tsnmap*,struct sctp_tsnmap_iter*) ;
 scalar_t__ FUNC_3 (struct sctp_tsnmap*,struct sctp_tsnmap_iter*,int*,int*) ;

__u16 FUNC_4(struct sctp_tsnmap *VAR_1,
      struct sctp_gap_ack_block *VAR_2)
{
 struct sctp_tsnmap_iter VAR_3;
 int VAR_4 = 0;


 if (FUNC_1(VAR_1)) {
  __u16 VAR_5 = 0, VAR_6 = 0;
  FUNC_2(VAR_1, &VAR_3);
  while (FUNC_3(VAR_1, &VAR_3,
      &VAR_5,
      &VAR_6)) {

   VAR_2[VAR_4].start = FUNC_0(VAR_5);
   VAR_2[VAR_4].end = FUNC_0(VAR_6);
   VAR_4++;
   if (VAR_4 >= VAR_0)
    break;
  }
 }
 return VAR_4;
}
