
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_hobject_id {int pool; int nspace_len; int nspace; int is_max; int hash; int snapid; int oid_len; int oid; int key_len; int key; } ;


 int FUNC_0 (void**,int ) ;
 int FUNC_1 (void**,int ) ;
 int FUNC_2 (void**,int ) ;
 int FUNC_3 (void**,void*,int ,int ) ;
 int FUNC_4 (void**,int,int,int ) ;
 int FUNC_5 (struct ceph_hobject_id const*) ;

__attribute__((used)) static void FUNC_6(void **VAR_0, void *VAR_1, const struct ceph_hobject_id *VAR_2)
{
 FUNC_4(VAR_0, 4, 3, FUNC_5(VAR_2));
 FUNC_3(VAR_0, VAR_1, VAR_2->key, VAR_2->key_len);
 FUNC_3(VAR_0, VAR_1, VAR_2->oid, VAR_2->oid_len);
 FUNC_1(VAR_0, VAR_2->snapid);
 FUNC_0(VAR_0, VAR_2->hash);
 FUNC_2(VAR_0, VAR_2->is_max);
 FUNC_3(VAR_0, VAR_1, VAR_2->nspace, VAR_2->nspace_len);
 FUNC_1(VAR_0, VAR_2->pool);
}
