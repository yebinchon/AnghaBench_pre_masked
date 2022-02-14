
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tcphdr {int dest; int source; } ;
struct tcp_md5sig_key {int dummy; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct ipv6hdr {int daddr; int saddr; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 struct ipv6hdr* FUNC_1 (struct sk_buff const*) ;
 scalar_t__ FUNC_2 (int const*,int *,int) ;
 int FUNC_3 (char*,char*,int *,int ,int *,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct sock const*) ;
 struct tcphdr* FUNC_6 (struct sk_buff const*) ;
 int * FUNC_7 (struct tcphdr const*) ;
 struct tcp_md5sig_key* FUNC_8 (struct sock const*,int *) ;
 int FUNC_9 (int *,struct tcp_md5sig_key*,int *,struct sk_buff const*) ;

__attribute__((used)) static bool FUNC_10(const struct sock *VAR_3,
        const struct sk_buff *VAR_4)
{
 return 0;
}
