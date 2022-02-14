
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_in6 {int sin6_port; } ;
struct bpf_tcp_sock {int dummy; } ;
struct bpf_spinlock_cnt {int cnt; int lock; } ;
struct bpf_sock {int state; scalar_t__ family; scalar_t__ protocol; scalar_t__ src_port; int src_ip6; } ;
struct __sk_buff {struct bpf_sock* sk; } ;
typedef scalar_t__ __u32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int *,scalar_t__*) ;
 scalar_t__ FUNC_1 (int ) ;
 struct bpf_sock* FUNC_2 (struct bpf_sock*) ;
 struct bpf_spinlock_cnt* FUNC_3 (int *,struct bpf_sock*,struct bpf_spinlock_cnt*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct bpf_tcp_sock* FUNC_6 (struct bpf_sock*) ;
 int FUNC_7 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (struct bpf_sock*,struct bpf_sock*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (struct bpf_tcp_sock*,struct bpf_tcp_sock*) ;

int FUNC_10(struct __sk_buff *VAR_14)
{
 struct bpf_spinlock_cnt VAR_15 = { .lock = 0, .cnt = 0xeB9F };
 __u32 VAR_16 = VAR_1, VAR_17 = VAR_0, VAR_18;
 struct bpf_spinlock_cnt *VAR_19, *VAR_20;
 struct sockaddr_in6 *VAR_21, *VAR_22;
 struct bpf_tcp_sock *VAR_23, *VAR_24;
 struct bpf_sock *VAR_25, *VAR_26;
 __u32 VAR_27, VAR_28;

 VAR_28 = VAR_5;

 VAR_25 = VAR_14->sk;
 if (!VAR_25 || VAR_25->state == 10)
  VAR_8;

 VAR_25 = FUNC_2(VAR_25);
 if (!VAR_25 || VAR_25->family != VAR_2 || VAR_25->protocol != VAR_7 ||
     !FUNC_7(VAR_25->src_ip6))
  VAR_8;

 VAR_23 = FUNC_6(VAR_25);
 if (!VAR_23)
  VAR_8;

 VAR_21 = FUNC_0(&VAR_9, &VAR_16);
 VAR_22 = FUNC_0(&VAR_9, &VAR_17);
 if (!VAR_21 || !VAR_22)
  VAR_8;

 if (VAR_25->src_port == FUNC_1(VAR_21->sin6_port))
  VAR_18 = VAR_6;
 else if (VAR_25->src_port == FUNC_1(VAR_22->sin6_port))
  VAR_18 = VAR_4;
 else
  VAR_8;

 VAR_26 = FUNC_0(&VAR_12, &VAR_18);
 VAR_24 = FUNC_0(&VAR_13, &VAR_18);
 if (!VAR_26 || !VAR_24)
  VAR_8;

 FUNC_8(VAR_26, VAR_25);
 FUNC_9(VAR_24, VAR_23);

 if (VAR_18 == VAR_6) {

  VAR_19 = FUNC_3(&VAR_10, VAR_25, 0, 0);
  VAR_20 = FUNC_3(&VAR_11, VAR_25,
         0, 0);
 } else {
  VAR_19 = FUNC_3(&VAR_10, VAR_25,
       &VAR_15,
       VAR_3);
  VAR_20 = FUNC_3(&VAR_11,
         VAR_25, &VAR_15,
         VAR_3);
 }

 if (!VAR_19 || !VAR_20)
  VAR_8;





 VAR_19->cnt += 1;
 FUNC_4(&VAR_20->lock);
 VAR_20->cnt += 10;
 FUNC_5(&VAR_20->lock);

 VAR_8;
}
