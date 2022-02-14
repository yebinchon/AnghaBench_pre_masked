
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct nf_conn {int dummy; } ;
typedef enum sdp_header_types { ____Placeholder_sdp_header_types } sdp_header_types ;


 int FUNC_0 (struct nf_conn const*,char const*,unsigned int,unsigned int,int,int,unsigned int*,unsigned int*) ;
 int FUNC_1 (struct nf_conn const*,char const*,int *,union nf_inet_addr*,char const*) ;

__attribute__((used)) static int FUNC_2(const struct nf_conn *VAR_0, const char *VAR_1,
     unsigned int VAR_2, unsigned int VAR_3,
     enum sdp_header_types VAR_4,
     enum sdp_header_types VAR_5,
     unsigned int *VAR_6, unsigned int *VAR_7,
     union nf_inet_addr *VAR_8)
{
 int VAR_9;

 VAR_9 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
        VAR_6, VAR_7);
 if (VAR_9 <= 0)
  return VAR_9;

 if (!FUNC_1(VAR_0, VAR_1 + *VAR_6, ((void*)0), VAR_8,
       VAR_1 + *VAR_6 + *VAR_7))
  return -1;
 return 1;
}
