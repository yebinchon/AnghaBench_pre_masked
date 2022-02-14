
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int doff; } ;
struct sk_buff {unsigned char* data; } ;
struct nf_conn_seqadj {int * seq; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 unsigned int FUNC_0 (int) ;
 unsigned char VAR_0 ;


 unsigned char VAR_1 ;
 int FUNC_1 (struct sk_buff*,struct tcphdr*,unsigned int,unsigned int,int *) ;
 struct nf_conn_seqadj* FUNC_2 (struct nf_conn*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_4(struct sk_buff *VAR_2,
          unsigned int VAR_3,
          struct nf_conn *VAR_4,
          enum ip_conntrack_info VAR_5)
{
 struct tcphdr *VAR_6 = (void *)VAR_2->data + VAR_3;
 struct nf_conn_seqadj *VAR_7 = FUNC_2(VAR_4);
 unsigned int VAR_8, VAR_9, VAR_10;

 VAR_9 = VAR_3 + sizeof(struct tcphdr);
 VAR_10 = VAR_3 + VAR_6->doff * 4;

 if (FUNC_3(VAR_2, VAR_10))
  return 0;

 VAR_6 = (void *)VAR_2->data + VAR_3;
 VAR_8 = FUNC_0(VAR_5);

 while (VAR_9 < VAR_10) {

  unsigned char *VAR_11 = VAR_2->data + VAR_9;

  switch (VAR_11[0]) {
  case 129:
   return 1;
  case 128:
   VAR_9++;
   continue;
  default:

   if (VAR_9 + 1 == VAR_10 ||
       VAR_9 + VAR_11[1] > VAR_10 ||
       VAR_11[1] < 2)
    return 0;
   if (VAR_11[0] == VAR_1 &&
       VAR_11[1] >= 2+VAR_0 &&
       ((VAR_11[1] - 2) % VAR_0) == 0)
    FUNC_1(VAR_2, VAR_6, VAR_9 + 2,
       VAR_9+VAR_11[1],
       &VAR_7->seq[!VAR_8]);
   VAR_9 += VAR_11[1];
  }
 }
 return 1;
}
