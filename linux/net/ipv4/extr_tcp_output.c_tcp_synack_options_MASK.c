
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcp_out_options {unsigned int mss; struct tcp_fastopen_cookie* fastopen_cookie; int options; int tsecr; scalar_t__ tsval; int ws; } ;
struct tcp_md5sig_key {int dummy; } ;
struct tcp_fastopen_cookie {scalar_t__ len; scalar_t__ exp; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct request_sock {int ts_recent; } ;
struct inet_request_sock {int tstamp_ok; int sack_ok; int wscale_ok; int rcv_wscale; } ;
struct TYPE_2__ {scalar_t__ ts_off; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 struct inet_request_sock* FUNC_0 (struct request_sock*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,struct inet_request_sock*,struct tcp_out_options*,unsigned int*) ;
 TYPE_1__* FUNC_3 (struct request_sock*) ;
 int FUNC_4 (struct sock const*) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static unsigned int FUNC_7(const struct sock *VAR_13,
           struct request_sock *VAR_14,
           unsigned int VAR_15, struct sk_buff *VAR_16,
           struct tcp_out_options *VAR_17,
           const struct tcp_md5sig_key *VAR_18,
           struct tcp_fastopen_cookie *VAR_19)
{
 struct inet_request_sock *VAR_20 = FUNC_0(VAR_14);
 unsigned int VAR_21 = VAR_0;
 VAR_17->mss = VAR_15;
 VAR_21 -= VAR_9;

 if (FUNC_1(VAR_20->wscale_ok)) {
  VAR_17->ws = VAR_20->rcv_wscale;
  VAR_17->options |= VAR_5;
  VAR_21 -= VAR_12;
 }
 if (FUNC_1(VAR_20->tstamp_ok)) {
  VAR_17->options |= VAR_4;
  VAR_17->tsval = FUNC_5(VAR_16) + FUNC_3(VAR_14)->ts_off;
  VAR_17->tsecr = VAR_14->ts_recent;
  VAR_21 -= VAR_11;
 }
 if (FUNC_1(VAR_20->sack_ok)) {
  VAR_17->options |= VAR_3;
  if (FUNC_6(!VAR_20->tstamp_ok))
   VAR_21 -= VAR_10;
 }
 if (VAR_19 != ((void*)0) && VAR_19->len >= 0) {
  u32 VAR_22 = VAR_19->len;

  VAR_22 += VAR_19->exp ? VAR_6 :
       VAR_7;
  VAR_22 = (VAR_22 + 3) & ~3U;
  if (VAR_21 >= VAR_22) {
   VAR_17->options |= VAR_1;
   VAR_17->fastopen_cookie = VAR_19;
   VAR_21 -= VAR_22;
  }
 }

 FUNC_2(FUNC_4(VAR_13), VAR_20, VAR_17, &VAR_21);

 return VAR_0 - VAR_21;
}
