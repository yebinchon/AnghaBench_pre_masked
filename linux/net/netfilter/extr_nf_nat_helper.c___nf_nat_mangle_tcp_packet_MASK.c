
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcphdr {int doff; int seq; int check; } ;
struct sk_buff {unsigned int len; scalar_t__ data; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,unsigned int) ;
 int FUNC_1 (struct sk_buff*,unsigned int,unsigned int,unsigned int,char const*,unsigned int) ;
 int FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (struct nf_conn*,int,int ,int) ;
 int FUNC_4 (struct sk_buff*,int ,int ,struct tcphdr*,int *,int,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_6 (struct sk_buff*) ;

bool FUNC_7(struct sk_buff *VAR_1,
    struct nf_conn *VAR_2,
    enum ip_conntrack_info VAR_3,
    unsigned int VAR_4,
    unsigned int VAR_5,
    unsigned int VAR_6,
    const char *VAR_7,
    unsigned int VAR_8, bool VAR_9)
{
 struct tcphdr *VAR_10;
 int VAR_11, VAR_12;

 if (FUNC_5(VAR_1, VAR_1->len))
  return 0;

 if (VAR_8 > VAR_6 &&
     VAR_8 - VAR_6 > FUNC_6(VAR_1) &&
     !FUNC_0(VAR_1, VAR_8 - VAR_6))
  return 0;

 VAR_10 = (void *)VAR_1->data + VAR_4;

 VAR_11 = VAR_1->len - VAR_4;
 FUNC_1(VAR_1, VAR_4 + VAR_10->doff*4,
   VAR_5, VAR_6, VAR_7, VAR_8);

 VAR_12 = VAR_1->len - VAR_4;

 FUNC_4(VAR_1, FUNC_2(VAR_2), VAR_0,
      VAR_10, &VAR_10->check, VAR_12, VAR_11);

 if (VAR_9 && VAR_8 != VAR_6)
  FUNC_3(VAR_2, VAR_3, VAR_10->seq,
     (int)VAR_8 - (int)VAR_6);

 return 1;
}
