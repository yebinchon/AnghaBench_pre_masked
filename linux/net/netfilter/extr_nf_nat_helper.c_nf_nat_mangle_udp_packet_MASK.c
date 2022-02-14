
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct udphdr {int check; int len; } ;
struct sk_buff {unsigned int len; scalar_t__ ip_summed; scalar_t__ data; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sk_buff*,unsigned int,unsigned int,unsigned int,char const*,unsigned int) ;
 int FUNC_3 (struct nf_conn*) ;
 int FUNC_4 (struct sk_buff*,int ,int ,struct udphdr*,int *,int,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_6 (struct sk_buff*) ;

bool
FUNC_7(struct sk_buff *VAR_2,
    struct nf_conn *VAR_3,
    enum ip_conntrack_info VAR_4,
    unsigned int VAR_5,
    unsigned int VAR_6,
    unsigned int VAR_7,
    const char *VAR_8,
    unsigned int VAR_9)
{
 struct udphdr *VAR_10;
 int VAR_11, VAR_12;

 if (FUNC_5(VAR_2, VAR_2->len))
  return 0;

 if (VAR_9 > VAR_7 &&
     VAR_9 - VAR_7 > FUNC_6(VAR_2) &&
     !FUNC_0(VAR_2, VAR_9 - VAR_7))
  return 0;

 VAR_10 = (void *)VAR_2->data + VAR_5;

 VAR_12 = VAR_2->len - VAR_5;
 FUNC_2(VAR_2, VAR_5 + sizeof(*VAR_10),
   VAR_6, VAR_7, VAR_8, VAR_9);


 VAR_11 = VAR_2->len - VAR_5;
 VAR_10->len = FUNC_1(VAR_11);


 if (!VAR_10->check && VAR_2->ip_summed != VAR_0)
  return 1;

 FUNC_4(VAR_2, FUNC_3(VAR_3), VAR_1,
      VAR_10, &VAR_10->check, VAR_11, VAR_12);

 return 1;
}
