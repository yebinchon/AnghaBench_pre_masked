
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_hobject_id {struct ceph_hobject_id* nspace; struct ceph_hobject_id* oid; struct ceph_hobject_id* key; } ;


 int FUNC_0 (struct ceph_hobject_id*) ;

__attribute__((used)) static void FUNC_1(struct ceph_hobject_id *VAR_0)
{
 if (VAR_0) {
  FUNC_0(VAR_0->key);
  FUNC_0(VAR_0->oid);
  FUNC_0(VAR_0->nspace);
  FUNC_0(VAR_0);
 }
}
