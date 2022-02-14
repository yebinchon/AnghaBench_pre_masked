
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct nf_conn {int dummy; } ;


 int FUNC_0 (struct nf_conn const*,char const*,char const*,int*) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (struct nf_conn const*,char const*,char const**,union nf_inet_addr*,char const*,int) ;

__attribute__((used)) static int FUNC_3(const struct nf_conn *VAR_0, const char *VAR_1,
        const char *VAR_2, int *VAR_3)
{
 union nf_inet_addr VAR_4;
 const char *VAR_5 = VAR_1;

 if (!FUNC_2(VAR_0, VAR_1, &VAR_1, &VAR_4, VAR_2, 1)) {
  FUNC_1("ip: %s parse failed.!\n", VAR_1);
  return 0;
 }


 if (*VAR_1 == ':') {
  VAR_1++;
  VAR_1 += FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 }
 return VAR_1 - VAR_5;
}
