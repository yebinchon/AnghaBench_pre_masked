
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_crypto_key {int key; } ;


 int FUNC_0 (struct ceph_crypto_key*,struct ceph_crypto_key const*,int) ;
 int FUNC_1 (struct ceph_crypto_key*,int ) ;

int FUNC_2(struct ceph_crypto_key *VAR_0,
     const struct ceph_crypto_key *VAR_1)
{
 FUNC_0(VAR_0, VAR_1, sizeof(struct ceph_crypto_key));
 return FUNC_1(VAR_0, VAR_1->key);
}
