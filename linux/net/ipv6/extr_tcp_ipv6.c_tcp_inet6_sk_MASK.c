
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tcp6_sock {int dummy; } ;
struct sock {int dummy; } ;
struct ipv6_pinfo {int dummy; } ;



__attribute__((used)) static struct ipv6_pinfo *FUNC_0(const struct sock *VAR_0)
{
 unsigned int VAR_1 = sizeof(struct tcp6_sock) - sizeof(struct ipv6_pinfo);

 return (struct ipv6_pinfo *)(((u8 *)VAR_0) + VAR_1);
}
