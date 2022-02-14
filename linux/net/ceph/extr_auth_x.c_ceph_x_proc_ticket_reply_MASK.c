
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ceph_crypto_key {int dummy; } ;
struct ceph_auth_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,void*,int ,int ) ;
 int FUNC_1 (void**,void*,int,int ) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct ceph_auth_client*,struct ceph_crypto_key*,void**,void*) ;

__attribute__((used)) static int FUNC_4(struct ceph_auth_client *VAR_2,
        struct ceph_crypto_key *VAR_3,
        void *VAR_4, void *VAR_5)
{
 void *VAR_6 = VAR_4;
 u8 VAR_7;
 u32 VAR_8;
 int VAR_9;

 FUNC_1(&VAR_6, VAR_5, VAR_7, VAR_1);
 if (VAR_7 != 1)
  return -VAR_0;

 FUNC_0(&VAR_6, VAR_5, VAR_8, VAR_1);
 FUNC_2("%d tickets\n", VAR_8);

 while (VAR_8--) {
  VAR_9 = FUNC_3(VAR_2, VAR_3, &VAR_6, VAR_5);
  if (VAR_9)
   return VAR_9;
 }

 return 0;

bad:
 return -VAR_0;
}
