
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void** s6_addr32; } ;
struct sockaddr_in6 {TYPE_2__ sin6_addr; void* sin6_port; int sin6_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_3__ {scalar_t__* daddr; void* dport; struct sockaddr_in6 sport; struct sockaddr_in6 saddr; } ;
struct bpf_sock_tuple {TYPE_1__ ipv6; } ;
struct bpf_sock_addr {scalar_t__ type; void* user_port; void** user_ip6; } ;
struct bpf_sock {scalar_t__* src_ip6; scalar_t__ src_port; } ;
typedef int sa ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (struct bpf_sock_addr*,struct sockaddr*,int) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (scalar_t__) ;
 struct bpf_sock* FUNC_3 (struct bpf_sock_addr*,struct bpf_sock_tuple*,int,int ,int ) ;
 struct bpf_sock* FUNC_4 (struct bpf_sock_addr*,struct bpf_sock_tuple*,int,int ,int ) ;
 int FUNC_5 (struct bpf_sock*) ;
 int FUNC_6 (struct sockaddr_in6*,int ,int) ;

int FUNC_7(struct bpf_sock_addr *VAR_13)
{
 struct bpf_sock_tuple VAR_14 = {};
 struct sockaddr_in6 VAR_15;
 struct bpf_sock *VAR_16;


 FUNC_6(&VAR_14.ipv6.saddr, 0, sizeof(VAR_14.ipv6.saddr));
 FUNC_6(&VAR_14.ipv6.sport, 0, sizeof(VAR_14.ipv6.sport));

 VAR_14.ipv6.daddr[0] = FUNC_1(VAR_2);
 VAR_14.ipv6.daddr[1] = FUNC_1(VAR_3);
 VAR_14.ipv6.daddr[2] = FUNC_1(VAR_4);
 VAR_14.ipv6.daddr[3] = FUNC_1(VAR_5);

 VAR_14.ipv6.dport = FUNC_2(VAR_6);

 if (VAR_13->type != VAR_8 && VAR_13->type != VAR_7)
  return 0;
 else if (VAR_13->type == VAR_8)
  VAR_16 = FUNC_3(VAR_13, &VAR_14, sizeof(VAR_14.ipv6),
           VAR_1, 0);
 else
  VAR_16 = FUNC_4(VAR_13, &VAR_14, sizeof(VAR_14.ipv6),
           VAR_1, 0);

 if (!VAR_16)
  return 0;

 if (VAR_16->src_ip6[0] != VAR_14.ipv6.daddr[0] ||
     VAR_16->src_ip6[1] != VAR_14.ipv6.daddr[1] ||
     VAR_16->src_ip6[2] != VAR_14.ipv6.daddr[2] ||
     VAR_16->src_ip6[3] != VAR_14.ipv6.daddr[3] ||
     VAR_16->src_port != VAR_6) {
  FUNC_5(VAR_16);
  return 0;
 }

 FUNC_5(VAR_16);


 VAR_13->user_ip6[0] = FUNC_1(VAR_2);
 VAR_13->user_ip6[1] = FUNC_1(VAR_3);
 VAR_13->user_ip6[2] = FUNC_1(VAR_4);
 VAR_13->user_ip6[3] = FUNC_1(VAR_5);

 VAR_13->user_port = FUNC_2(VAR_6);


 FUNC_6(&VAR_15, 0, sizeof(VAR_15));

 VAR_15.sin6_family = VAR_0;
 VAR_15.sin6_port = FUNC_2(0);

 VAR_15.sin6_addr.s6_addr32[0] = FUNC_1(VAR_9);
 VAR_15.sin6_addr.s6_addr32[1] = FUNC_1(VAR_10);
 VAR_15.sin6_addr.s6_addr32[2] = FUNC_1(VAR_11);
 VAR_15.sin6_addr.s6_addr32[3] = FUNC_1(VAR_12);

 if (FUNC_0(VAR_13, (struct sockaddr *)&VAR_15, sizeof(VAR_15)) != 0)
  return 0;

 return 1;
}
