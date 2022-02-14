
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union tcp_md5_addr {int dummy; } tcp_md5_addr ;
struct tcphdr {int dest; int source; } ;
struct tcp_md5sig_key {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct iphdr {int daddr; int saddr; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 struct iphdr* FUNC_1 (struct sk_buff const*) ;
 scalar_t__ FUNC_2 (int const*,unsigned char*,int) ;
 int FUNC_3 (char*,int *,int ,int *,int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sock const*) ;
 struct tcphdr* FUNC_6 (struct sk_buff const*) ;
 struct tcp_md5sig_key* FUNC_7 (struct sock const*,union tcp_md5_addr*,int ) ;
 int * FUNC_8 (struct tcphdr const*) ;
 int FUNC_9 (unsigned char*,struct tcp_md5sig_key*,int *,struct sk_buff const*) ;

__attribute__((used)) static bool FUNC_10(const struct sock *VAR_4,
        const struct sk_buff *VAR_5)
{
 return 0;
}
