
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int doff; } ;
struct sk_buff {scalar_t__ data; } ;
struct ip_vs_iphdr {int len; } ;



__attribute__((used)) static char *FUNC_0(struct sk_buff *VAR_0, struct ip_vs_iphdr *VAR_1)
{
 struct tcphdr *VAR_2 = (struct tcphdr *)((char *)VAR_0->data + VAR_1->len);

 if ((VAR_2->doff << 2) < sizeof(struct tcphdr))
  return ((void*)0);

 return (char *)VAR_2 + (VAR_2->doff << 2);
}
