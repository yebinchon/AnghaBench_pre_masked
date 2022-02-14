
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_auth_client {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (struct ceph_auth_client*) ;
 int FUNC_1 (struct ceph_auth_client*) ;

__attribute__((used)) static int FUNC_2(struct ceph_auth_client *VAR_1, int VAR_2)
{
 switch (VAR_2) {
 case 128:
  return FUNC_0(VAR_1);
 case 129:
  return FUNC_1(VAR_1);
 default:
  return -VAR_0;
 }
}
