
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct modsig {int raw_pkcs7_len; int raw_pkcs7; } ;



int FUNC_0(const struct modsig *VAR_0, const void **VAR_1,
         u32 *VAR_2)
{
 *VAR_1 = &VAR_0->raw_pkcs7;
 *VAR_2 = VAR_0->raw_pkcs7_len;

 return 0;
}
