
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bpf_tcp_sock {int state; scalar_t__ family; scalar_t__ protocol; scalar_t__ src_port; scalar_t__ dst_port; int data_segs_out; int data_segs_in; int bytes_acked; int snd_cwnd; int bytes_received; scalar_t__ total_retrans; scalar_t__* dst_ip6; scalar_t__* src_ip6; } ;
struct bpf_sock {int state; scalar_t__ family; scalar_t__ protocol; scalar_t__ src_port; scalar_t__ dst_port; int data_segs_out; int data_segs_in; int bytes_acked; int snd_cwnd; int bytes_received; scalar_t__ total_retrans; scalar_t__* dst_ip6; scalar_t__* src_ip6; } ;
typedef struct bpf_tcp_sock __u32 ;
struct TYPE_4__ {scalar_t__ sin6_port; } ;
struct TYPE_3__ {scalar_t__ sin6_port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*,char*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,int *,struct bpf_tcp_sock*) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_2 (scalar_t__*,int *,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct bpf_tcp_sock*) ;
 int FUNC_5 (struct bpf_tcp_sock*) ;
 int FUNC_6 (char*) ;
 int VAR_12 ;
 TYPE_1__ VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static void FUNC_7(void)
{
 struct bpf_tcp_sock VAR_15, VAR_16, VAR_17;
 struct bpf_sock VAR_18, VAR_19, VAR_20;
 __u32 VAR_21, VAR_22;
 int VAR_23;

 VAR_23 = FUNC_1(VAR_11, &VAR_5,
      &VAR_22);
 FUNC_0(VAR_23 == -1, "bpf_map_lookup_elem(linum_map_fd)",
       "err:%d errno:%d", VAR_23, VAR_7);

 VAR_23 = FUNC_1(VAR_11, &VAR_9,
      &VAR_21);
 FUNC_0(VAR_23 == -1, "bpf_map_lookup_elem(linum_map_fd)",
       "err:%d errno:%d", VAR_23, VAR_7);

 VAR_23 = FUNC_1(VAR_12, &VAR_6, &VAR_18);
 FUNC_0(VAR_23 == -1, "bpf_map_lookup_elem(sk_map_fd, &egress_srv_idx)",
       "err:%d errno:%d", VAR_23, VAR_7);
 VAR_23 = FUNC_1(VAR_14, &VAR_6, &VAR_15);
 FUNC_0(VAR_23 == -1, "bpf_map_lookup_elem(tp_map_fd, &egress_srv_idx)",
       "err:%d errno:%d", VAR_23, VAR_7);

 VAR_23 = FUNC_1(VAR_12, &VAR_4, &VAR_19);
 FUNC_0(VAR_23 == -1, "bpf_map_lookup_elem(sk_map_fd, &egress_cli_idx)",
       "err:%d errno:%d", VAR_23, VAR_7);
 VAR_23 = FUNC_1(VAR_14, &VAR_4, &VAR_16);
 FUNC_0(VAR_23 == -1, "bpf_map_lookup_elem(tp_map_fd, &egress_cli_idx)",
       "err:%d errno:%d", VAR_23, VAR_7);

 VAR_23 = FUNC_1(VAR_12, &VAR_10, &VAR_20);
 FUNC_0(VAR_23 == -1, "bpf_map_lookup_elem(sk_map_fd, &ingress_listen_idx)",
       "err:%d errno:%d", VAR_23, VAR_7);
 VAR_23 = FUNC_1(VAR_14, &VAR_10, &VAR_17);
 FUNC_0(VAR_23 == -1, "bpf_map_lookup_elem(tp_map_fd, &ingress_listen_idx)",
       "err:%d errno:%d", VAR_23, VAR_7);

 FUNC_6("listen_sk: ");
 FUNC_4(&VAR_20);
 FUNC_6("\n");

 FUNC_6("srv_sk: ");
 FUNC_4(&VAR_18);
 FUNC_6("\n");

 FUNC_6("cli_sk: ");
 FUNC_4(&VAR_19);
 FUNC_6("\n");

 FUNC_6("listen_tp: ");
 FUNC_5(&VAR_17);
 FUNC_6("\n");

 FUNC_6("srv_tp: ");
 FUNC_5(&VAR_15);
 FUNC_6("\n");

 FUNC_6("cli_tp: ");
 FUNC_5(&VAR_16);
 FUNC_6("\n");

 FUNC_0(VAR_20.state != 10 ||
       VAR_20.family != VAR_0 ||
       VAR_20.protocol != VAR_2 ||
       FUNC_2(VAR_20.src_ip6, &VAR_8,
       sizeof(VAR_20.src_ip6)) ||
       VAR_20.dst_ip6[0] || VAR_20.dst_ip6[1] ||
       VAR_20.dst_ip6[2] || VAR_20.dst_ip6[3] ||
       VAR_20.src_port != FUNC_3(VAR_13) ||
       VAR_20.dst_port,
       "Unexpected listen_sk",
       "Check listen_sk output. ingress_linum:%u",
       VAR_21);

 FUNC_0(VAR_18.state == 10 ||
       !VAR_18.state ||
       VAR_18.family != VAR_0 ||
       VAR_18.protocol != VAR_2 ||
       FUNC_2(VAR_18.src_ip6, &VAR_8,
       sizeof(VAR_18.src_ip6)) ||
       FUNC_2(VAR_18.dst_ip6, &VAR_8,
       sizeof(VAR_18.dst_ip6)) ||
       VAR_18.src_port != FUNC_3(VAR_13) ||
       VAR_18.dst_port != VAR_3,
       "Unexpected srv_sk", "Check srv_sk output. egress_linum:%u",
       VAR_22);

 FUNC_0(VAR_19.state == 10 ||
       !VAR_19.state ||
       VAR_19.family != VAR_0 ||
       VAR_19.protocol != VAR_2 ||
       FUNC_2(VAR_19.src_ip6, &VAR_8,
       sizeof(VAR_19.src_ip6)) ||
       FUNC_2(VAR_19.dst_ip6, &VAR_8,
       sizeof(VAR_19.dst_ip6)) ||
       VAR_19.src_port != FUNC_3(VAR_3) ||
       VAR_19.dst_port != VAR_13,
       "Unexpected cli_sk", "Check cli_sk output. egress_linum:%u",
       VAR_22);

 FUNC_0(VAR_17.data_segs_out ||
       VAR_17.data_segs_in ||
       VAR_17.total_retrans ||
       VAR_17.bytes_acked,
       "Unexpected listen_tp", "Check listen_tp output. ingress_linum:%u",
       VAR_21);

 FUNC_0(VAR_15.data_segs_out != 2 ||
       VAR_15.data_segs_in ||
       VAR_15.snd_cwnd != 10 ||
       VAR_15.total_retrans ||
       VAR_15.bytes_acked != 2 * VAR_1,
       "Unexpected srv_tp", "Check srv_tp output. egress_linum:%u",
       VAR_22);

 FUNC_0(VAR_16.data_segs_out ||
       VAR_16.data_segs_in != 2 ||
       VAR_16.snd_cwnd != 10 ||
       VAR_16.total_retrans ||
       VAR_16.bytes_received != 2 * VAR_1,
       "Unexpected cli_tp", "Check cli_tp output. egress_linum:%u",
       VAR_22);
}
