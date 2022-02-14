
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct nf_conn {int dummy; } ;
typedef enum sip_header_types { ____Placeholder_sip_header_types } sip_header_types ;
typedef int __be16 ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct nf_conn const*,char const*,unsigned int,unsigned int,int,int*,unsigned int*,unsigned int*) ;
 int FUNC_2 (unsigned int) ;
 unsigned int FUNC_3 (char const*,char**,int) ;
 int FUNC_4 (struct nf_conn const*,char const*,char const**,union nf_inet_addr*,char const*,int) ;

int FUNC_5(const struct nf_conn *VAR_1, const char *VAR_2,
       unsigned int *VAR_3, unsigned int VAR_4,
       enum sip_header_types VAR_5, int *VAR_6,
       unsigned int *VAR_7, unsigned int *VAR_8,
       union nf_inet_addr *VAR_9, __be16 *VAR_10)
{
 const char *VAR_11, *VAR_12 = VAR_2 + VAR_4;
 unsigned int VAR_13;
 int VAR_14;

 VAR_14 = FUNC_1(VAR_1, VAR_2, VAR_3 ? *VAR_3 : 0, VAR_4,
      VAR_5, VAR_6, VAR_7, VAR_8);
 FUNC_0(VAR_14 < 0);
 if (VAR_14 == 0)
  return VAR_14;

 if (!FUNC_4(VAR_1, VAR_2 + *VAR_7, &VAR_11, VAR_9, VAR_12, 1))
  return -1;
 if (*VAR_11 == ':') {
  VAR_11++;
  VAR_13 = FUNC_3(VAR_11, (char **)&VAR_11, 10);
  if (VAR_13 < 1024 || VAR_13 > 65535)
   return -1;
  *VAR_10 = FUNC_2(VAR_13);
 } else
  *VAR_10 = FUNC_2(VAR_0);

 if (VAR_3)
  *VAR_3 = VAR_11 - VAR_2;
 return 1;
}
