
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct php_crypt_extended_data {int initialized; scalar_t__ old_salt; scalar_t__ saltbits; scalar_t__ old_rawkey1; scalar_t__ old_rawkey0; } ;



__attribute__((used)) static void
FUNC_0(struct php_crypt_extended_data *VAR_0)
{
 VAR_0->old_rawkey0 = VAR_0->old_rawkey1 = 0;
 VAR_0->saltbits = 0;
 VAR_0->old_salt = 0;

 VAR_0->initialized = 1;
}
