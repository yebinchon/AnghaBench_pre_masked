
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ceph_crypto_key {int len; int type; int * key; int created; } ;


 int VAR_0 ;
 int FUNC_0 (void**,int) ;
 int FUNC_1 (void**,int *,int) ;

int FUNC_2(struct ceph_crypto_key *VAR_1, void **VAR_2, void *VAR_3)
{
 if (*VAR_2 + sizeof(u16) + sizeof(VAR_1->created) +
     sizeof(u16) + VAR_1->len > VAR_3)
  return -VAR_0;
 FUNC_0(VAR_2, VAR_1->type);
 FUNC_1(VAR_2, &VAR_1->created, sizeof(VAR_1->created));
 FUNC_0(VAR_2, VAR_1->len);
 FUNC_1(VAR_2, VAR_1->key, VAR_1->len);
 return 0;
}
