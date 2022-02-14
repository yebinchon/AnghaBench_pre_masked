
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff_head {int dummy; } ;
struct sk_buff {struct sk_buff* next; } ;
struct sctp_ulpq {TYPE_2__* asoc; } ;
struct sctp_ulpevent {int tsn; } ;
struct sctp_tsnmap {int dummy; } ;
typedef int __u32 ;
typedef scalar_t__ __u16 ;
struct TYPE_6__ {struct sk_buff* frag_list; } ;
struct TYPE_4__ {struct sctp_tsnmap tsn_map; } ;
struct TYPE_5__ {TYPE_1__ peer; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff*,struct sk_buff_head*) ;
 struct sctp_ulpevent* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sctp_tsnmap*) ;
 int FUNC_4 (struct sctp_tsnmap*,int ) ;
 int FUNC_5 (struct sctp_ulpevent*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct sk_buff_head*) ;
 TYPE_3__* FUNC_8 (struct sk_buff*) ;

__u16 FUNC_9(struct sctp_ulpq *VAR_0, struct sk_buff_head *VAR_1,
       __u16 VAR_2)
{
 __u16 VAR_3 = 0;
 __u32 VAR_4, VAR_5;
 struct sk_buff *VAR_6, *VAR_7, *VAR_8;
 struct sctp_ulpevent *VAR_9;
 struct sctp_tsnmap *VAR_10;

 VAR_10 = &VAR_0->asoc->peer.tsn_map;

 while ((VAR_6 = FUNC_7(VAR_1)) != ((void*)0)) {
  VAR_9 = FUNC_2(VAR_6);
  VAR_4 = VAR_9->tsn;


  if (FUNC_0(VAR_4, FUNC_3(VAR_10)))
   break;





  VAR_3 += FUNC_6(VAR_6);
  VAR_7 = FUNC_8(VAR_6)->frag_list;
  for (VAR_8 = VAR_7; VAR_7; VAR_7 = VAR_7->next) {
   VAR_8 = VAR_7;
   VAR_3 += FUNC_6(VAR_8);
  }
  if (VAR_8)
   VAR_5 = FUNC_2(VAR_8)->tsn;
  else
   VAR_5 = VAR_4;


  FUNC_1(VAR_6, VAR_1);
  FUNC_5(VAR_9);
  while (FUNC_0(VAR_4, VAR_5)) {
   FUNC_4(VAR_10, VAR_4);
   VAR_4++;
  }
  if (VAR_3 >= VAR_2)
   return VAR_3;
 }

 return VAR_3;
}
