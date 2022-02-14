
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_auth_none_info {int starting; } ;
struct ceph_auth_client {int * ops; struct ceph_auth_none_info* private; int protocol; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,struct ceph_auth_client*) ;
 struct ceph_auth_none_info* FUNC_1 (int,int ) ;

int FUNC_2(struct ceph_auth_client *VAR_4)
{
 struct ceph_auth_none_info *VAR_5;

 FUNC_0("ceph_auth_none_init %p\n", VAR_4);
 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_2);
 if (!VAR_5)
  return -VAR_1;

 VAR_5->starting = 1;

 VAR_4->protocol = VAR_0;
 VAR_4->private = VAR_5;
 VAR_4->ops = &VAR_3;
 return 0;
}
