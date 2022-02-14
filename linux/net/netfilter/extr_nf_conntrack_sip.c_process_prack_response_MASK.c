
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_ct_sip_master {unsigned int invite_cseq; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int FUNC_0 (struct nf_conn*,int) ;
 struct nf_conn* FUNC_1 (struct sk_buff*,int*) ;
 struct nf_ct_sip_master* FUNC_2 (struct nf_conn*) ;
 int FUNC_3 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, unsigned int VAR_2,
      unsigned int VAR_3,
      const char **VAR_4, unsigned int *VAR_5,
      unsigned int VAR_6, unsigned int VAR_7)
{
 enum ip_conntrack_info VAR_8;
 struct nf_conn *VAR_9 = FUNC_1(VAR_1, &VAR_8);
 struct nf_ct_sip_master *VAR_10 = FUNC_2(VAR_9);

 if ((VAR_7 >= 100 && VAR_7 <= 199) ||
     (VAR_7 >= 200 && VAR_7 <= 299))
  return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 else if (VAR_10->invite_cseq == VAR_6)
  FUNC_0(VAR_9, 1);
 return VAR_0;
}
