
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum sip_header_types { ____Placeholder_sip_header_types } sip_header_types ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;
typedef int __be16 ;


 scalar_t__ FUNC_0 (struct nf_conn*,char const*,int *,unsigned int,int,int *,unsigned int*,unsigned int*,union nf_inet_addr*,int *) ;
 int FUNC_1 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,unsigned int,unsigned int,union nf_inet_addr*,int ) ;
 struct nf_conn* FUNC_2 (struct sk_buff*,int*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0, unsigned int VAR_1,
   unsigned int VAR_2,
   const char **VAR_3, unsigned int *VAR_4,
   enum sip_header_types VAR_5)
{
 enum ip_conntrack_info VAR_6;
 struct nf_conn *VAR_7 = FUNC_2(VAR_0, &VAR_6);
 unsigned int VAR_8, VAR_9;
 union nf_inet_addr VAR_10;
 __be16 VAR_11;

 if (FUNC_0(VAR_7, *VAR_3, ((void*)0), *VAR_4, VAR_5, ((void*)0),
        &VAR_9, &VAR_8, &VAR_10, &VAR_11) <= 0)
  return 1;
 return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
   VAR_9, VAR_8, &VAR_10, VAR_11);
}
