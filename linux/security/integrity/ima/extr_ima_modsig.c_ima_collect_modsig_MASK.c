
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_signature {int dummy; } ;
struct modsig {int hash_algo; int digest_size; int digest; int pkcs7_msg; scalar_t__ raw_pkcs7_len; } ;
typedef int loff_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int *,int *) ;
 int FUNC_1 (int ,void const*,int ) ;
 scalar_t__ FUNC_2 (int ) ;

void FUNC_3(struct modsig *VAR_1, const void *VAR_2, loff_t VAR_3)
{
 int VAR_4;





 VAR_3 -= VAR_1->raw_pkcs7_len + FUNC_2(VAR_0) +
  sizeof(struct module_signature);
 VAR_4 = FUNC_1(VAR_1->pkcs7_msg, VAR_2, VAR_3);
 if (VAR_4)
  return;


 VAR_4 = FUNC_0(VAR_1->pkcs7_msg, &VAR_1->digest,
         &VAR_1->digest_size, &VAR_1->hash_algo);
}
