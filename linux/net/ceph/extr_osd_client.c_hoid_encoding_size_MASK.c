
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_hobject_id {int key_len; int oid_len; int nspace_len; } ;



__attribute__((used)) static int FUNC_0(const struct ceph_hobject_id *VAR_0)
{
 return 8 + 4 + 1 + 8 +
        4 + VAR_0->key_len + 4 + VAR_0->oid_len + 4 + VAR_0->nspace_len;
}
