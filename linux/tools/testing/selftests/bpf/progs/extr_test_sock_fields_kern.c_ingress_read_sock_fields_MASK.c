
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_port; } ;
struct bpf_tcp_sock {int dummy; } ;
struct bpf_sock {scalar_t__ family; scalar_t__ src_port; int state; int src_ip6; } ;
struct __sk_buff {struct bpf_sock* sk; } ;
typedef int __u32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct bpf_sock* FUNC_0 (struct bpf_sock*) ;
 void* FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 struct bpf_tcp_sock* FUNC_3 (struct bpf_sock*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct bpf_sock*,struct bpf_sock*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct bpf_tcp_sock*,struct bpf_tcp_sock*) ;

int FUNC_7(struct __sk_buff *VAR_8)
{
 __u32 VAR_9 = VAR_0, VAR_10 = VAR_3;
 struct bpf_tcp_sock *VAR_11, *VAR_12;
 struct bpf_sock *VAR_13, *VAR_14;
 struct sockaddr_in6 *VAR_15;
 __u32 VAR_16, VAR_17;

 VAR_17 = VAR_2;

 VAR_13 = VAR_8->sk;
 if (!VAR_13 || VAR_13->family != VAR_1 || !FUNC_4(VAR_13->src_ip6))
  VAR_4;

 VAR_15 = FUNC_1(&VAR_5, &VAR_9);
 if (!VAR_15 || VAR_13->src_port != FUNC_2(VAR_15->sin6_port))
  VAR_4;

 if (VAR_13->state != 10 && VAR_13->state != 12)
  VAR_4;

 VAR_13 = FUNC_0(VAR_13);
 if (!VAR_13)
  VAR_4;

 VAR_11 = FUNC_3(VAR_13);
 if (!VAR_11)
  VAR_4;

 VAR_14 = FUNC_1(&VAR_6, &VAR_10);
 VAR_12 = FUNC_1(&VAR_7, &VAR_10);
 if (!VAR_14 || !VAR_12)
  VAR_4;

 FUNC_5(VAR_14, VAR_13);
 FUNC_6(VAR_12, VAR_11);

 VAR_4;
}
