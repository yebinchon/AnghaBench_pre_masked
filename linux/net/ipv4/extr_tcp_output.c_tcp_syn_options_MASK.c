
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int rcv_wscale; int ts_recent; } ;
struct tcp_sock {int syn_fastopen; int syn_fastopen_exp; TYPE_2__ rx_opt; scalar_t__ tsoffset; TYPE_1__* af_specific; int md5sig_info; struct tcp_fastopen_request* fastopen_req; } ;
struct tcp_out_options {int options; TYPE_4__* fastopen_cookie; int ws; int tsecr; scalar_t__ tsval; int mss; } ;
struct tcp_md5sig_key {int dummy; } ;
struct TYPE_9__ {scalar_t__ len; scalar_t__ exp; } ;
struct tcp_fastopen_request {TYPE_4__ cookie; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {int sysctl_tcp_window_scaling; int sysctl_tcp_sack; scalar_t__ sysctl_tcp_timestamps; } ;
struct TYPE_10__ {TYPE_3__ ipv4; } ;
struct TYPE_6__ {struct tcp_md5sig_key* (* md5_lookup ) (struct sock*,struct sock*) ;} ;


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
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct tcp_sock*,struct tcp_out_options*,unsigned int*) ;
 TYPE_5__* FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (int *) ;
 struct tcp_md5sig_key* FUNC_5 (struct sock*,struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int VAR_13 ;
 struct tcp_sock* FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (struct sk_buff*) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static unsigned int FUNC_10(struct sock *VAR_14, struct sk_buff *VAR_15,
    struct tcp_out_options *VAR_16,
    struct tcp_md5sig_key **VAR_17)
{
 struct tcp_sock *VAR_18 = FUNC_7(VAR_14);
 unsigned int VAR_19 = VAR_0;
 struct tcp_fastopen_request *VAR_20 = VAR_18->fastopen_req;

 *VAR_17 = ((void*)0);
 VAR_16->mss = FUNC_6(VAR_14);
 VAR_19 -= VAR_9;

 if (FUNC_0(FUNC_3(VAR_14)->ipv4.sysctl_tcp_timestamps && !*VAR_17)) {
  VAR_16->options |= VAR_4;
  VAR_16->tsval = FUNC_8(VAR_15) + VAR_18->tsoffset;
  VAR_16->tsecr = VAR_18->rx_opt.ts_recent;
  VAR_19 -= VAR_11;
 }
 if (FUNC_0(FUNC_3(VAR_14)->ipv4.sysctl_tcp_window_scaling)) {
  VAR_16->ws = VAR_18->rx_opt.rcv_wscale;
  VAR_16->options |= VAR_5;
  VAR_19 -= VAR_12;
 }
 if (FUNC_0(FUNC_3(VAR_14)->ipv4.sysctl_tcp_sack)) {
  VAR_16->options |= VAR_3;
  if (FUNC_9(!(VAR_4 & VAR_16->options)))
   VAR_19 -= VAR_10;
 }

 if (VAR_20 && VAR_20->cookie.len >= 0) {
  u32 VAR_21 = VAR_20->cookie.len;

  VAR_21 += VAR_20->cookie.exp ? VAR_6 :
            VAR_7;
  VAR_21 = (VAR_21 + 3) & ~3U;
  if (VAR_19 >= VAR_21) {
   VAR_16->options |= VAR_1;
   VAR_16->fastopen_cookie = &VAR_20->cookie;
   VAR_19 -= VAR_21;
   VAR_18->syn_fastopen = 1;
   VAR_18->syn_fastopen_exp = VAR_20->cookie.exp ? 1 : 0;
  }
 }

 FUNC_2(VAR_18, VAR_16, &VAR_19);

 return VAR_0 - VAR_19;
}
