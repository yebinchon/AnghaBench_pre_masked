
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module_signature {scalar_t__ id_type; scalar_t__ algo; scalar_t__ hash; scalar_t__ signer_len; scalar_t__ key_id_len; scalar_t__* __pad; int sig_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (char*,char const*) ;

int FUNC_2(const struct module_signature *VAR_3, size_t VAR_4,
    const char *VAR_5)
{
 if (FUNC_0(VAR_3->sig_len) >= VAR_4 - sizeof(*VAR_3))
  return -VAR_0;

 if (VAR_3->id_type != VAR_2) {
  FUNC_1("%s: Module is not signed with expected PKCS#7 message\n",
         VAR_5);
  return -VAR_1;
 }

 if (VAR_3->algo != 0 ||
     VAR_3->hash != 0 ||
     VAR_3->signer_len != 0 ||
     VAR_3->key_id_len != 0 ||
     VAR_3->__pad[0] != 0 ||
     VAR_3->__pad[1] != 0 ||
     VAR_3->__pad[2] != 0) {
  FUNC_1("%s: PKCS#7 signature info has unexpected non-zero params\n",
         VAR_5);
  return -VAR_0;
 }

 return 0;
}
