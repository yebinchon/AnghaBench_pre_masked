
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_crypto_key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ceph_crypto_key*,void*,int) ;
 int FUNC_1 (void**,void*,int,int ) ;
 int FUNC_2 (void**,void*,int,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_3(struct ceph_crypto_key *VAR_2, void **VAR_3, void *VAR_4)
{
 int VAR_5;
 int VAR_6;

 FUNC_1(VAR_3, VAR_4, VAR_5, VAR_1);
 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_1);

 VAR_6 = FUNC_0(VAR_2, *VAR_3, VAR_5);
 if (VAR_6 < 0)
  return VAR_6;

 *VAR_3 += VAR_5;
 return VAR_6;

e_inval:
 return -VAR_0;
}
