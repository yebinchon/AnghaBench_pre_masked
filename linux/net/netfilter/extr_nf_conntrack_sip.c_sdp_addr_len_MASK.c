
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union nf_inet_addr {int dummy; } nf_inet_addr ;
struct nf_conn {int dummy; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (struct nf_conn const*,char const*,char const**,union nf_inet_addr*,char const*) ;

__attribute__((used)) static int FUNC_2(const struct nf_conn *VAR_0, const char *VAR_1,
   const char *VAR_2, int *VAR_3)
{
 union nf_inet_addr VAR_4;
 const char *VAR_5 = VAR_1;

 if (!FUNC_1(VAR_0, VAR_1, &VAR_1, &VAR_4, VAR_2)) {
  FUNC_0("ip: %s parse failed.!\n", VAR_1);
  return 0;
 }

 return VAR_1 - VAR_5;
}
