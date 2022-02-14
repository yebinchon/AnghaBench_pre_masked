
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcp_sock {int snd_una; } ;
struct tcp_sacktag_state {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct TYPE_2__ {int sacked; int end_seq; int seq; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (struct sk_buff*) ;
 struct sk_buff* FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*,struct sk_buff*,struct sk_buff*,struct tcp_sacktag_state*,int,int,int,int) ;
 struct tcp_sock* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (struct sk_buff*,struct sk_buff*,int,int) ;

__attribute__((used)) static struct sk_buff *FUNC_16(struct sock *VAR_5, struct sk_buff *VAR_6,
       struct tcp_sacktag_state *VAR_7,
       u32 VAR_8, u32 VAR_9,
       bool VAR_10)
{
 struct tcp_sock *VAR_11 = FUNC_10(VAR_5);
 struct sk_buff *VAR_12;
 int VAR_13;
 int VAR_14 = 0;
 int VAR_15;
 int VAR_16;


 if (!VAR_10 &&
     (FUNC_2(VAR_6)->sacked & (VAR_1|VAR_3)) == VAR_3)
  goto fallback;
 if (!FUNC_5(VAR_6))
  goto fallback;

 if (!FUNC_3(FUNC_2(VAR_6)->end_seq, VAR_11->snd_una))
  goto fallback;


 VAR_12 = FUNC_7(VAR_6);
 if (!VAR_12)
  goto fallback;

 if ((FUNC_2(VAR_12)->sacked & VAR_4) != VAR_2)
  goto fallback;

 if (!FUNC_11(VAR_12))
  goto fallback;

 VAR_16 = !FUNC_3(VAR_8, FUNC_2(VAR_6)->seq) &&
    !FUNC_4(VAR_9, FUNC_2(VAR_6)->end_seq);

 if (VAR_16) {
  VAR_15 = VAR_6->len;
  VAR_14 = FUNC_13(VAR_6);
  VAR_13 = FUNC_14(VAR_6);




  if (VAR_13 != FUNC_14(VAR_12))
   goto fallback;
 } else {
  if (!FUNC_3(FUNC_2(VAR_6)->end_seq, VAR_8))
   goto noop;




  if (FUNC_13(VAR_6) <= 1)
   goto noop;

  VAR_16 = !FUNC_3(VAR_8, FUNC_2(VAR_6)->seq);
  if (!VAR_16) {
   goto fallback;
  }

  VAR_15 = VAR_9 - FUNC_2(VAR_6)->seq;
  FUNC_0(VAR_15 < 0);
  FUNC_0(VAR_15 > VAR_6->len);





  VAR_13 = FUNC_12(VAR_6);




  if (VAR_13 != FUNC_14(VAR_12))
   goto fallback;

  if (VAR_15 == VAR_13) {
   VAR_14 = 1;
  } else if (VAR_15 < VAR_13) {
   goto noop;
  } else {
   VAR_14 = VAR_15 / VAR_13;
   VAR_15 = VAR_14 * VAR_13;
  }
 }


 if (!FUNC_3(FUNC_2(VAR_6)->seq + VAR_15, VAR_11->snd_una))
  goto fallback;

 if (!FUNC_15(VAR_12, VAR_6, VAR_14, VAR_15))
  goto fallback;
 if (!FUNC_9(VAR_5, VAR_12, VAR_6, VAR_7, VAR_14, VAR_15, VAR_13, VAR_10))
  goto out;




 VAR_6 = FUNC_6(VAR_12);
 if (!VAR_6)
  goto out;

 if (!FUNC_5(VAR_6) ||
     ((FUNC_2(VAR_6)->sacked & VAR_4) != VAR_2) ||
     (VAR_13 != FUNC_14(VAR_6)))
  goto out;

 VAR_15 = VAR_6->len;
 VAR_14 = FUNC_13(VAR_6);
 if (FUNC_15(VAR_12, VAR_6, VAR_14, VAR_15))
  FUNC_9(VAR_5, VAR_12, VAR_6, VAR_7, VAR_14,
    VAR_15, VAR_13, 0);

out:
 return VAR_12;

noop:
 return VAR_6;

fallback:
 FUNC_1(FUNC_8(VAR_5), VAR_0);
 return ((void*)0);
}
