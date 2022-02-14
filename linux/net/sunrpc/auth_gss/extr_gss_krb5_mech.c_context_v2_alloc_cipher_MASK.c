
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct krb5_ctx {TYPE_1__* gk5e; } ;
struct crypto_sync_skcipher {int dummy; } ;
struct TYPE_2__ {int keylength; } ;


 scalar_t__ FUNC_0 (struct crypto_sync_skcipher*) ;
 struct crypto_sync_skcipher* FUNC_1 (char const*,int ,int ) ;
 int FUNC_2 (struct crypto_sync_skcipher*) ;
 scalar_t__ FUNC_3 (struct crypto_sync_skcipher*,int *,int ) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static struct crypto_sync_skcipher *
FUNC_5(struct krb5_ctx *VAR_0, const char *VAR_1, u8 *VAR_2)
{
 struct crypto_sync_skcipher *VAR_3;

 VAR_3 = FUNC_1(VAR_1, 0, 0);
 if (FUNC_0(VAR_3)) {
  FUNC_4("gss_kerberos_mech: unable to initialize "
   "crypto algorithm %s\n", VAR_1);
  return ((void*)0);
 }
 if (FUNC_3(VAR_3, VAR_2, VAR_0->gk5e->keylength)) {
  FUNC_4("gss_kerberos_mech: error setting key for "
   "crypto algorithm %s\n", VAR_1);
  FUNC_2(VAR_3);
  return ((void*)0);
 }
 return VAR_3;
}
