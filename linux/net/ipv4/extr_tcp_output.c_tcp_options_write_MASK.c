
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ dsack; } ;
struct tcp_sock {TYPE_1__ rx_opt; struct tcp_sack_block* selective_acks; struct tcp_sack_block* duplicate_sack; } ;
struct tcp_sack_block {int start_seq; int end_seq; } ;
struct tcp_out_options {int options; int mss; int tsval; int tsecr; int ws; int num_sack_blocks; struct tcp_fastopen_cookie* fastopen_cookie; int * hash_location; } ;
struct tcp_fastopen_cookie {int len; int val; scalar_t__ exp; } ;
typedef int __u8 ;
typedef void* __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (void**,int*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(__be32 *VAR_24, struct tcp_sock *VAR_25,
         struct tcp_out_options *VAR_26)
{
 u16 VAR_27 = VAR_26->options;

 if (FUNC_4(VAR_1 & VAR_27)) {
  *VAR_24++ = FUNC_0((VAR_19 << 24) | (VAR_19 << 16) |
          (VAR_17 << 8) | VAR_7);

  VAR_26->hash_location = (__u8 *)VAR_24;
  VAR_24 += 4;
 }

 if (FUNC_4(VAR_26->mss)) {
  *VAR_24++ = FUNC_0((VAR_18 << 24) |
          (VAR_8 << 16) |
          VAR_26->mss);
 }

 if (FUNC_1(VAR_3 & VAR_27)) {
  if (FUNC_4(VAR_2 & VAR_27)) {
   *VAR_24++ = FUNC_0((VAR_21 << 24) |
           (VAR_11 << 16) |
           (VAR_22 << 8) |
           VAR_12);
   VAR_27 &= ~VAR_2;
  } else {
   *VAR_24++ = FUNC_0((VAR_19 << 24) |
           (VAR_19 << 16) |
           (VAR_22 << 8) |
           VAR_12);
  }
  *VAR_24++ = FUNC_0(VAR_26->tsval);
  *VAR_24++ = FUNC_0(VAR_26->tsecr);
 }

 if (FUNC_4(VAR_2 & VAR_27)) {
  *VAR_24++ = FUNC_0((VAR_19 << 24) |
          (VAR_19 << 16) |
          (VAR_21 << 8) |
          VAR_11);
 }

 if (FUNC_4(VAR_4 & VAR_27)) {
  *VAR_24++ = FUNC_0((VAR_19 << 24) |
          (VAR_23 << 16) |
          (VAR_13 << 8) |
          VAR_26->ws);
 }

 if (FUNC_4(VAR_26->num_sack_blocks)) {
  struct tcp_sack_block *VAR_28 = VAR_25->rx_opt.dsack ?
   VAR_25->duplicate_sack : VAR_25->selective_acks;
  int VAR_29;

  *VAR_24++ = FUNC_0((VAR_19 << 24) |
          (VAR_19 << 16) |
          (VAR_20 << 8) |
          (VAR_9 + (VAR_26->num_sack_blocks *
           VAR_10)));

  for (VAR_29 = 0; VAR_29 < VAR_26->num_sack_blocks;
       ++VAR_29) {
   *VAR_24++ = FUNC_0(VAR_28[VAR_29].start_seq);
   *VAR_24++ = FUNC_0(VAR_28[VAR_29].end_seq);
  }

  VAR_25->rx_opt.dsack = 0;
 }

 if (FUNC_4(VAR_0 & VAR_27)) {
  struct tcp_fastopen_cookie *VAR_30 = VAR_26->fastopen_cookie;
  u8 *VAR_31 = (u8 *)VAR_24;
  u32 VAR_32;

  if (VAR_30->exp) {
   VAR_32 = VAR_5 + VAR_30->len;
   *VAR_24 = FUNC_0((VAR_14 << 24) | (VAR_32 << 16) |
         VAR_16);
   VAR_31 += VAR_5;
  } else {
   VAR_32 = VAR_6 + VAR_30->len;
   *VAR_31++ = VAR_15;
   *VAR_31++ = VAR_32;
  }

  FUNC_2(VAR_31, VAR_30->val, VAR_30->len);
  if ((VAR_32 & 3) == 2) {
   VAR_31[VAR_30->len] = VAR_19;
   VAR_31[VAR_30->len + 1] = VAR_19;
  }
  VAR_24 += (VAR_32 + 3) >> 2;
 }

 FUNC_3(VAR_24, &VAR_27);
}
