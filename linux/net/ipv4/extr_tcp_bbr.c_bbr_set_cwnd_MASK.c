
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tcp_sock {scalar_t__ snd_cwnd; scalar_t__ delivered; scalar_t__ snd_cwnd_clamp; } ;
struct sock {int dummy; } ;
struct rate_sample {int dummy; } ;
struct bbr {scalar_t__ mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct sock*,scalar_t__,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct sock*,struct rate_sample const*,scalar_t__,scalar_t__*) ;
 struct bbr* FUNC_5 (struct sock*) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,scalar_t__) ;
 struct tcp_sock* FUNC_8 (struct sock*) ;

__attribute__((used)) static void FUNC_9(struct sock *VAR_3, const struct rate_sample *VAR_4,
    u32 VAR_5, u32 VAR_6, int VAR_7)
{
 struct tcp_sock *VAR_8 = FUNC_8(VAR_3);
 struct bbr *VAR_9 = FUNC_5(VAR_3);
 u32 VAR_10 = VAR_8->snd_cwnd, VAR_11 = 0;

 if (!VAR_5)
  goto done;

 if (FUNC_4(VAR_3, VAR_4, VAR_5, &VAR_10))
  goto done;

 VAR_11 = FUNC_1(VAR_3, VAR_6, VAR_7);




 VAR_11 += FUNC_0(VAR_3);
 VAR_11 = FUNC_3(VAR_3, VAR_11);


 if (FUNC_2(VAR_3))
  VAR_10 = FUNC_7(VAR_10 + VAR_5, VAR_11);
 else if (VAR_10 < VAR_11 || VAR_8->delivered < VAR_1)
  VAR_10 = VAR_10 + VAR_5;
 VAR_10 = FUNC_6(VAR_10, VAR_2);

done:
 VAR_8->snd_cwnd = FUNC_7(VAR_10, VAR_8->snd_cwnd_clamp);
 if (VAR_9->mode == VAR_0)
  VAR_8->snd_cwnd = FUNC_7(VAR_8->snd_cwnd, VAR_2);
}
