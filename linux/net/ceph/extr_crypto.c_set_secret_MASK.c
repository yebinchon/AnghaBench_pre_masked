
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_crypto_key {int type; int len; int * key; int * tfm; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ceph_crypto_key*) ;
 int * FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *,int *,int ) ;
 int * FUNC_5 (void*,int ,int ) ;
 int FUNC_6 (unsigned int) ;
 unsigned int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(struct ceph_crypto_key *VAR_4, void *VAR_5)
{
 unsigned int VAR_6;
 int VAR_7;

 VAR_4->key = ((void*)0);
 VAR_4->tfm = ((void*)0);

 switch (VAR_4->type) {
 case 128:
  return 0;
 case 129:
  break;
 default:
  return -VAR_2;
 }

 if (!VAR_4->len)
  return -VAR_0;

 VAR_4->key = FUNC_5(VAR_5, VAR_4->len, VAR_3);
 if (!VAR_4->key) {
  VAR_7 = -VAR_1;
  goto fail;
 }


 VAR_6 = FUNC_7();
 VAR_4->tfm = FUNC_3("cbc(aes)", 0, 0);
 FUNC_6(VAR_6);
 if (FUNC_0(VAR_4->tfm)) {
  VAR_7 = FUNC_1(VAR_4->tfm);
  VAR_4->tfm = ((void*)0);
  goto fail;
 }

 VAR_7 = FUNC_4(VAR_4->tfm, VAR_4->key, VAR_4->len);
 if (VAR_7)
  goto fail;

 return 0;

fail:
 FUNC_2(VAR_4);
 return VAR_7;
}
