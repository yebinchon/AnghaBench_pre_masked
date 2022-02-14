
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_tsnmap {int len; scalar_t__ num_dup_tsns; void* cumulative_tsn_ack_point; void* max_tsn_seen; void* base_tsn; int * tsn_map; } ;
typedef int gfp_t ;
typedef void* __u32 ;
typedef int __u16 ;


 int FUNC_0 (int *,int) ;
 int * FUNC_1 (int,int ) ;

struct sctp_tsnmap *FUNC_2(struct sctp_tsnmap *VAR_0, __u16 VAR_1,
         __u32 VAR_2, gfp_t VAR_3)
{
 if (!VAR_0->tsn_map) {
  VAR_0->tsn_map = FUNC_1(VAR_1>>3, VAR_3);
  if (VAR_0->tsn_map == ((void*)0))
   return ((void*)0);

  VAR_0->len = VAR_1;
 } else {
  FUNC_0(VAR_0->tsn_map, VAR_0->len);
 }


 VAR_0->base_tsn = VAR_2;
 VAR_0->cumulative_tsn_ack_point = VAR_2 - 1;
 VAR_0->max_tsn_seen = VAR_0->cumulative_tsn_ack_point;
 VAR_0->num_dup_tsns = 0;

 return VAR_0;
}
