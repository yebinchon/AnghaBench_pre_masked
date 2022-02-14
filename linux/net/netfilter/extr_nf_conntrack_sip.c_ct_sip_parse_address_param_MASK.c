
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct nf_conn {int dummy; } ;


 char* FUNC_0 (char const*,char const*,char const*,int ) ;
 int FUNC_1 (struct nf_conn const*,char const*,char const**,union nf_inet_addr*,char const*,int) ;
 int FUNC_2 (char const*) ;

int FUNC_3(const struct nf_conn *VAR_0, const char *VAR_1,
          unsigned int VAR_2, unsigned int VAR_3,
          const char *VAR_4,
          unsigned int *VAR_5, unsigned int *VAR_6,
          union nf_inet_addr *VAR_7, bool VAR_8)
{
 const char *VAR_9 = VAR_1 + VAR_3;
 const char *VAR_10, *VAR_11;

 VAR_9 = FUNC_0(VAR_1 + VAR_2, VAR_9, ",", FUNC_2(","));
 if (!VAR_9)
  VAR_9 = VAR_1 + VAR_3;

 VAR_10 = FUNC_0(VAR_1 + VAR_2, VAR_9, VAR_4, FUNC_2(VAR_4));
 if (!VAR_10)
  return 0;

 VAR_10 += FUNC_2(VAR_4);
 if (!FUNC_1(VAR_0, VAR_10, &VAR_11, VAR_7, VAR_9, VAR_8))
  return 0;
 *VAR_5 = VAR_10 - VAR_1;
 *VAR_6 = VAR_11 - VAR_10;
 return 1;
}
