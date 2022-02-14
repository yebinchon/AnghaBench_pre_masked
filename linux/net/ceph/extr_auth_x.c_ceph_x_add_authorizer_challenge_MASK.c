
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ceph_x_authorizer {int dummy; } ;
struct ceph_authorizer {int dummy; } ;
struct ceph_auth_client {int dummy; } ;


 int FUNC_0 (struct ceph_x_authorizer*,void*,int,int *) ;
 int FUNC_1 (struct ceph_x_authorizer*,int *) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int FUNC_3(struct ceph_auth_client *VAR_0,
        struct ceph_authorizer *VAR_1,
        void *VAR_2,
        int VAR_3)
{
 struct ceph_x_authorizer *VAR_4 = (void *)VAR_1;
 u64 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, VAR_2, VAR_3,
       &VAR_5);
 if (VAR_6) {
  FUNC_2("failed to decrypt authorize challenge: %d", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_1(VAR_4, &VAR_5);
 if (VAR_6) {
  FUNC_2("failed to encrypt authorizer w/ challenge: %d", VAR_6);
  return VAR_6;
 }

 return 0;
}
