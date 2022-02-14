
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_auth_none_info {int starting; } ;
struct ceph_auth_client {struct ceph_auth_none_info* private; } ;



__attribute__((used)) static int FUNC_0(struct ceph_auth_client *VAR_0, int VAR_1,
   void *VAR_2, void *VAR_3)
{
 struct ceph_auth_none_info *VAR_4 = VAR_0->private;

 VAR_4->starting = 0;
 return VAR_1;
}
