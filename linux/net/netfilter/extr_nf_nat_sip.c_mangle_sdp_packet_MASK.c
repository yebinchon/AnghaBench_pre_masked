
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum sdp_header_types { ____Placeholder_sdp_header_types } sdp_header_types ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct nf_conn*,char const*,unsigned int,unsigned int,int,int,unsigned int*,unsigned int*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,unsigned int,unsigned int,char const**,unsigned int*,unsigned int,unsigned int,char*,int) ;
 struct nf_conn* FUNC_2 (struct sk_buff*,int*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2, unsigned int VAR_3,
        unsigned int VAR_4,
        const char **VAR_5, unsigned int *VAR_6,
        unsigned int VAR_7,
        enum sdp_header_types VAR_8,
        enum sdp_header_types VAR_9,
        char *VAR_10, int VAR_11)
{
 enum ip_conntrack_info VAR_12;
 struct nf_conn *VAR_13 = FUNC_2(VAR_2, &VAR_12);
 unsigned int VAR_14, VAR_15;

 if (FUNC_0(VAR_13, *VAR_5, VAR_7, *VAR_6, VAR_8, VAR_9,
      &VAR_15, &VAR_14) <= 0)
  return -VAR_1;
 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_15, VAR_14, VAR_10, VAR_11) ? 0 : -VAR_0;
}
