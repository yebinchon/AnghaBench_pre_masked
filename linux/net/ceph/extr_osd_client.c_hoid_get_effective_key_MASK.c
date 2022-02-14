
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_hobject_id {size_t key_len; size_t oid_len; void* oid; void* key; } ;



__attribute__((used)) static void FUNC_0(const struct ceph_hobject_id *VAR_0,
       void **VAR_1, size_t *VAR_2)
{
 if (VAR_0->key_len) {
  *VAR_1 = VAR_0->key;
  *VAR_2 = VAR_0->key_len;
 } else {
  *VAR_1 = VAR_0->oid;
  *VAR_2 = VAR_0->oid_len;
 }
}
