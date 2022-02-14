
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_options {struct ceph_options* mon_addr; struct ceph_options* key; struct ceph_options* name; } ;


 int FUNC_0 (struct ceph_options*) ;
 int FUNC_1 (char*,struct ceph_options*) ;
 int FUNC_2 (struct ceph_options*) ;

void FUNC_3(struct ceph_options *VAR_0)
{
 FUNC_1("destroy_options %p\n", VAR_0);
 FUNC_2(VAR_0->name);
 if (VAR_0->key) {
  FUNC_0(VAR_0->key);
  FUNC_2(VAR_0->key);
 }
 FUNC_2(VAR_0->mon_addr);
 FUNC_2(VAR_0);
}
