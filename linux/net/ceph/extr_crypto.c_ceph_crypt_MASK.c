
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_crypto_key {int type; } ;




 int VAR_0 ;
 int FUNC_0 (struct ceph_crypto_key const*,int,void*,int,int,int*) ;

int FUNC_1(const struct ceph_crypto_key *VAR_1, bool VAR_2,
        void *VAR_3, int VAR_4, int VAR_5, int *VAR_6)
{
 switch (VAR_1->type) {
 case 128:
  *VAR_6 = VAR_5;
  return 0;
 case 129:
  return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
          VAR_6);
 default:
  return -VAR_0;
 }
}
