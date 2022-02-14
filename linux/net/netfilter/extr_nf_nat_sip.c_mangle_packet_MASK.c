
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int dummy; } ;
struct tcphdr {int doff; } ;
struct sk_buff {char* data; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned int,unsigned int,char const*,unsigned int,int) ;
 struct nf_conn* FUNC_1 (struct sk_buff*,int*) ;
 scalar_t__ FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (struct sk_buff*,struct nf_conn*,int,unsigned int,unsigned int,unsigned int,char const*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_4(struct sk_buff *VAR_1, unsigned int VAR_2,
      unsigned int VAR_3,
      const char **VAR_4, unsigned int *VAR_5,
      unsigned int VAR_6, unsigned int VAR_7,
      const char *VAR_8, unsigned int VAR_9)
{
 enum ip_conntrack_info VAR_10;
 struct nf_conn *VAR_11 = FUNC_1(VAR_1, &VAR_10);
 struct tcphdr *VAR_12;
 unsigned int VAR_13;

 if (FUNC_2(VAR_11) == VAR_0) {
  VAR_12 = (struct tcphdr *)(VAR_1->data + VAR_2);
  VAR_13 = VAR_2 + VAR_12->doff * 4;
  VAR_6 += VAR_3 - VAR_13;

  if (!FUNC_0(VAR_1, VAR_11, VAR_10,
      VAR_2, VAR_6, VAR_7,
      VAR_8, VAR_9, 0))
   return 0;
 } else {
  VAR_13 = VAR_2 + sizeof(struct udphdr);
  VAR_6 += VAR_3 - VAR_13;

  if (!FUNC_3(VAR_1, VAR_11, VAR_10,
           VAR_2, VAR_6, VAR_7,
           VAR_8, VAR_9))
   return 0;
 }


 *VAR_4 = VAR_1->data + VAR_3;
 *VAR_5 += VAR_9 - VAR_7;
 return 1;
}
