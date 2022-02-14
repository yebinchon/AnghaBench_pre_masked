
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u64 ;
typedef void* u32 ;
struct tcp_sock {scalar_t__ undo_retrans; int lost_out; int retrans_out; int sacked_out; int delivered; int lost_cnt_hint; scalar_t__ lost_skb_hint; scalar_t__ high_seq; scalar_t__ snd_una; scalar_t__ undo_marker; } ;
struct tcp_sacktag_state {scalar_t__ first_sackt; int flag; void* last_sackt; void* reord; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {void* seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (void*,scalar_t__) ;
 scalar_t__ FUNC_2 (void*,void*) ;
 void* FUNC_3 (struct tcp_sock*) ;
 int FUNC_4 (struct tcp_sock*,int,void*,void*) ;
 struct tcp_sock* FUNC_5 (struct sock*) ;

__attribute__((used)) static u8 FUNC_6(struct sock *VAR_6,
     struct tcp_sacktag_state *VAR_7, u8 VAR_8,
     u32 VAR_9, u32 VAR_10,
     int VAR_11, int VAR_12,
     u64 VAR_13)
{
 struct tcp_sock *VAR_14 = FUNC_5(VAR_6);


 if (VAR_11 && (VAR_8 & VAR_3)) {
  if (VAR_14->undo_marker && VAR_14->undo_retrans > 0 &&
      FUNC_1(VAR_10, VAR_14->undo_marker))
   VAR_14->undo_retrans--;
  if ((VAR_8 & VAR_4) &&
      FUNC_2(VAR_9, VAR_7->reord))
    VAR_7->reord = VAR_9;
 }


 if (!FUNC_1(VAR_10, VAR_14->snd_una))
  return VAR_8;

 if (!(VAR_8 & VAR_4)) {
  FUNC_4(VAR_14, VAR_8, VAR_10, VAR_13);

  if (VAR_8 & VAR_5) {




   if (VAR_8 & VAR_2) {
    VAR_8 &= ~(VAR_2|VAR_5);
    VAR_14->lost_out -= VAR_12;
    VAR_14->retrans_out -= VAR_12;
   }
  } else {
   if (!(VAR_8 & VAR_3)) {



    if (FUNC_2(VAR_9,
        FUNC_3(VAR_14)) &&
        FUNC_2(VAR_9, VAR_7->reord))
     VAR_7->reord = VAR_9;

    if (!FUNC_1(VAR_10, VAR_14->high_seq))
     VAR_7->flag |= VAR_1;
    if (VAR_7->first_sackt == 0)
     VAR_7->first_sackt = VAR_13;
    VAR_7->last_sackt = VAR_13;
   }

   if (VAR_8 & VAR_2) {
    VAR_8 &= ~VAR_2;
    VAR_14->lost_out -= VAR_12;
   }
  }

  VAR_8 |= VAR_4;
  VAR_7->flag |= VAR_0;
  VAR_14->sacked_out += VAR_12;
  VAR_14->delivered += VAR_12;


  if (VAR_14->lost_skb_hint &&
      FUNC_2(VAR_9, FUNC_0(VAR_14->lost_skb_hint)->seq))
   VAR_14->lost_cnt_hint += VAR_12;
 }





 if (VAR_11 && (VAR_8 & VAR_5)) {
  VAR_8 &= ~VAR_5;
  VAR_14->retrans_out -= VAR_12;
 }

 return VAR_8;
}
