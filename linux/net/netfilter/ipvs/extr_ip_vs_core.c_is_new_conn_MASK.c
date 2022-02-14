
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int syn; int type; } ;
struct sk_buff {int dummy; } ;
struct sctphdr {int dummy; } ;
struct sctp_chunkhdr {int syn; int type; } ;
struct ip_vs_iphdr {int protocol; int len; } ;
typedef int schunk ;
typedef int _tcph ;




 int VAR_0 ;
 struct tcphdr* FUNC_0 (struct sk_buff const*,int ,int,struct tcphdr*) ;

__attribute__((used)) static inline bool FUNC_1(const struct sk_buff *VAR_1,
          struct ip_vs_iphdr *VAR_2)
{
 switch (VAR_2->protocol) {
 case 128: {
  struct tcphdr VAR_3, *VAR_4;

  VAR_4 = FUNC_0(VAR_1, VAR_2->len, sizeof(VAR_3), &VAR_3);
  if (VAR_4 == ((void*)0))
   return 0;
  return VAR_4->syn;
 }
 case 129: {
  struct sctp_chunkhdr *VAR_5, VAR_6;

  VAR_5 = FUNC_0(VAR_1, VAR_2->len + sizeof(struct sctphdr),
      sizeof(VAR_6), &VAR_6);
  if (VAR_5 == ((void*)0))
   return 0;
  return VAR_5->type == VAR_0;
 }
 default:
  return 0;
 }
}
