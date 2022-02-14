
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sctp_tsnmap_iter {scalar_t__ start; } ;
struct sctp_tsnmap {scalar_t__ cumulative_tsn_ack_point; int len; int tsn_map; scalar_t__ base_tsn; int max_tsn_seen; } ;
typedef scalar_t__ __u16 ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,int ,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(const struct sctp_tsnmap *VAR_0,
        struct sctp_tsnmap_iter *VAR_1,
        __u16 *VAR_2, __u16 *VAR_3)
{
 int VAR_4 = 0;
 __u16 VAR_5 = 0, VAR_6 = 0, VAR_7;


 if (FUNC_0(VAR_0->max_tsn_seen, VAR_1->start))
  return 0;

 VAR_7 = VAR_1->start - VAR_0->base_tsn;
 FUNC_1(VAR_0->tsn_map, VAR_7, VAR_0->len,
     &VAR_5, &VAR_6);


 if (VAR_5 && !VAR_6)
  VAR_6 = VAR_0->len - 1;




 if (VAR_6) {



  *VAR_2 = VAR_5 + 1;
  *VAR_3 = VAR_6 + 1;


  VAR_1->start = VAR_0->cumulative_tsn_ack_point + *VAR_3 + 1;
  VAR_4 = 1;
 }

 return VAR_4;
}
