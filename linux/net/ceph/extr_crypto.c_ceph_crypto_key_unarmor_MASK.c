
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_crypto_key {int len; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ceph_crypto_key*,void**,void*) ;
 int FUNC_1 (void*,char const*,char const*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (char const*) ;

int FUNC_6(struct ceph_crypto_key *VAR_2, const char *VAR_3)
{
 int VAR_4 = FUNC_5(VAR_3);
 int VAR_5 = VAR_4 * 3 / 4;
 void *VAR_6, *VAR_7;
 int VAR_8;

 FUNC_2("crypto_key_unarmor %s\n", VAR_3);
 VAR_6 = FUNC_4(VAR_5, VAR_1);
 if (!VAR_6)
  return -VAR_0;
 VAR_5 = FUNC_1(VAR_6, VAR_3, VAR_3+VAR_4);
 if (VAR_5 < 0) {
  FUNC_3(VAR_6);
  return VAR_5;
 }

 VAR_7 = VAR_6;
 VAR_8 = FUNC_0(VAR_2, &VAR_7, VAR_7 + VAR_5);
 FUNC_3(VAR_6);
 if (VAR_8)
  return VAR_8;
 FUNC_2("crypto_key_unarmor key %p type %d len %d\n", VAR_2,
      VAR_2->type, VAR_2->len);
 return 0;
}
