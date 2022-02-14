
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_ct_sip_master {unsigned int invite_cseq; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct nf_conn*,int) ;
 struct nf_conn* FUNC_1 (struct sk_buff*,int*) ;
 struct nf_ct_sip_master* FUNC_2 (struct nf_conn*) ;
 unsigned int FUNC_3 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_1, unsigned int VAR_2,
      unsigned int VAR_3,
      const char **VAR_4, unsigned int *VAR_5,
      unsigned int VAR_6)
{
 enum ip_conntrack_info VAR_7;
 struct nf_conn *VAR_8 = FUNC_1(VAR_1, &VAR_7);
 struct nf_ct_sip_master *VAR_9 = FUNC_2(VAR_8);
 unsigned int VAR_10;

 FUNC_0(VAR_8, 1);
 VAR_10 = FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
 if (VAR_10 == VAR_0)
  VAR_9->invite_cseq = VAR_6;
 return VAR_10;
}
