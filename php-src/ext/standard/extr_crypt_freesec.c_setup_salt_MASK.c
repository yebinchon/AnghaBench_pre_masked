
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct php_crypt_extended_data {int old_salt; int saltbits; } ;



__attribute__((used)) static void
FUNC_0(uint32_t VAR_0, struct php_crypt_extended_data *VAR_1)
{
 uint32_t VAR_2, VAR_3, VAR_4;
 int VAR_5;

 if (VAR_0 == VAR_1->old_salt)
  return;
 VAR_1->old_salt = VAR_0;

 VAR_4 = 0;
 VAR_3 = 1;
 VAR_2 = 0x800000;
 for (VAR_5 = 0; VAR_5 < 24; VAR_5++) {
  if (VAR_0 & VAR_3)
   VAR_4 |= VAR_2;
  VAR_3 <<= 1;
  VAR_2 >>= 1;
 }
 VAR_1->saltbits = VAR_4;
}
