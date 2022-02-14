
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum sdp_header_types { ____Placeholder_sdp_header_types } sdp_header_types ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,unsigned int,int,int,char*,unsigned int) ;
 struct nf_conn* FUNC_2 (struct sk_buff*,int*) ;
 unsigned int FUNC_3 (struct nf_conn*,char*,union nf_inet_addr const*,int) ;

__attribute__((used)) static unsigned int FUNC_4(struct sk_buff *VAR_1, unsigned int VAR_2,
        unsigned int VAR_3,
        const char **VAR_4, unsigned int *VAR_5,
        unsigned int VAR_6,
        enum sdp_header_types VAR_7,
        enum sdp_header_types VAR_8,
        const union nf_inet_addr *VAR_9)
{
 enum ip_conntrack_info VAR_10;
 struct nf_conn *VAR_11 = FUNC_2(VAR_1, &VAR_10);
 char VAR_12[VAR_0];
 unsigned int VAR_13;

 VAR_13 = FUNC_3(VAR_11, VAR_12, VAR_9, 0);
 if (FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_6, VAR_7, VAR_8, VAR_12, VAR_13))
  return 0;

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
