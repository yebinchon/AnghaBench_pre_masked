
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {void* s_addr; } ;
struct sockaddr_in {TYPE_2__ sin_addr; void* sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
struct TYPE_3__ {scalar_t__ daddr; void* dport; struct sockaddr_in sport; struct sockaddr_in saddr; } ;
struct bpf_sock_tuple {TYPE_1__ ipv4; } ;
struct bpf_sock_addr {scalar_t__ type; void* user_port; void* user_ip4; } ;
struct bpf_sock {scalar_t__ src_ip4; scalar_t__ src_port; } ;
typedef int sa ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct bpf_sock_addr*,struct sockaddr*,int) ;
 void* FUNC_1 (int ) ;
 void* FUNC_2 (scalar_t__) ;
 struct bpf_sock* FUNC_3 (struct bpf_sock_addr*,struct bpf_sock_tuple*,int,int ,int ) ;
 struct bpf_sock* FUNC_4 (struct bpf_sock_addr*,struct bpf_sock_tuple*,int,int ,int ) ;
 int FUNC_5 (struct bpf_sock*) ;
 int FUNC_6 (struct sockaddr_in*,int ,int) ;

int FUNC_7(struct bpf_sock_addr *VAR_7)
{
 struct bpf_sock_tuple VAR_8 = {};
 struct sockaddr_in VAR_9;
 struct bpf_sock *VAR_10;


 FUNC_6(&VAR_8.ipv4.saddr, 0, sizeof(VAR_8.ipv4.saddr));
 FUNC_6(&VAR_8.ipv4.sport, 0, sizeof(VAR_8.ipv4.sport));

 VAR_8.ipv4.daddr = FUNC_1(VAR_2);
 VAR_8.ipv4.dport = FUNC_2(VAR_3);

 if (VAR_7->type != VAR_5 && VAR_7->type != VAR_4)
  return 0;
 else if (VAR_7->type == VAR_5)
  VAR_10 = FUNC_3(VAR_7, &VAR_8, sizeof(VAR_8.ipv4),
           VAR_1, 0);
 else
  VAR_10 = FUNC_4(VAR_7, &VAR_8, sizeof(VAR_8.ipv4),
           VAR_1, 0);

 if (!VAR_10)
  return 0;

 if (VAR_10->src_ip4 != VAR_8.ipv4.daddr ||
     VAR_10->src_port != VAR_3) {
  FUNC_5(VAR_10);
  return 0;
 }

 FUNC_5(VAR_10);


 VAR_7->user_ip4 = FUNC_1(VAR_2);
 VAR_7->user_port = FUNC_2(VAR_3);


 FUNC_6(&VAR_9, 0, sizeof(VAR_9));

 VAR_9.sin_family = VAR_0;
 VAR_9.sin_port = FUNC_2(0);
 VAR_9.sin_addr.s_addr = FUNC_1(VAR_6);

 if (FUNC_0(VAR_7, (struct sockaddr *)&VAR_9, sizeof(VAR_9)) != 0)
  return 0;

 return 1;
}
