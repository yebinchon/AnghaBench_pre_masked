
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int doff; int check; } ;
struct sk_buff {unsigned char* data; } ;
struct nf_conn_synproxy {scalar_t__ tsoff; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int __be32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned char VAR_1 ;


 unsigned char VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,struct sk_buff*,int ,int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,unsigned int) ;

__attribute__((used)) static unsigned int
FUNC_5(struct sk_buff *VAR_3, unsigned int VAR_4,
         struct tcphdr *VAR_5, struct nf_conn *VAR_6,
         enum ip_conntrack_info VAR_7,
         const struct nf_conn_synproxy *VAR_8)
{
 unsigned int VAR_9, VAR_10;
 __be32 *VAR_11, VAR_12;

 if (VAR_8->tsoff == 0)
  return 1;

 VAR_9 = VAR_4 + sizeof(struct tcphdr);
 VAR_10 = VAR_4 + VAR_5->doff * 4;

 if (FUNC_4(VAR_3, VAR_10))
  return 0;

 while (VAR_9 < VAR_10) {
  unsigned char *VAR_13 = VAR_3->data + VAR_9;

  switch (VAR_13[0]) {
  case 129:
   return 1;
  case 128:
   VAR_9++;
   continue;
  default:
   if (VAR_9 + 1 == VAR_10 ||
       VAR_9 + VAR_13[1] > VAR_10 ||
       VAR_13[1] < 2)
    return 0;
   if (VAR_13[0] == VAR_2 &&
       VAR_13[1] == VAR_1) {
    if (FUNC_0(VAR_7) == VAR_0) {
     VAR_11 = (__be32 *)&VAR_13[2];
     VAR_12 = *VAR_11;
     *VAR_11 = FUNC_1(FUNC_3(*VAR_11) -
           VAR_8->tsoff);
    } else {
     VAR_11 = (__be32 *)&VAR_13[6];
     VAR_12 = *VAR_11;
     *VAR_11 = FUNC_1(FUNC_3(*VAR_11) +
           VAR_8->tsoff);
    }
    FUNC_2(&VAR_5->check, VAR_3,
        VAR_12, *VAR_11, 0);
    return 1;
   }
   VAR_9 += VAR_13[1];
  }
 }
 return 1;
}
