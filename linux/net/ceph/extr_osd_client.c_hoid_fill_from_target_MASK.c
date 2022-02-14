
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int pool; TYPE_3__* pool_ns; } ;
struct TYPE_6__ {int seed; } ;
struct TYPE_5__ {int name_len; int name; } ;
struct ceph_osd_request_target {TYPE_4__ target_oloc; TYPE_2__ pgid; TYPE_1__ target_oid; } ;
struct ceph_hobject_id {int is_max; int pool; scalar_t__ nspace_len; int * nspace; int hash; int snapid; int oid_len; int oid; scalar_t__ key_len; int * key; } ;
struct TYPE_7__ {scalar_t__ len; int * str; } ;


 int VAR_0 ;
 int FUNC_0 (struct ceph_hobject_id*) ;

__attribute__((used)) static void FUNC_1(struct ceph_hobject_id *VAR_1,
      const struct ceph_osd_request_target *VAR_2)
{
 VAR_1->key = ((void*)0);
 VAR_1->key_len = 0;
 VAR_1->oid = VAR_2->target_oid.name;
 VAR_1->oid_len = VAR_2->target_oid.name_len;
 VAR_1->snapid = VAR_0;
 VAR_1->hash = VAR_2->pgid.seed;
 VAR_1->is_max = 0;
 if (VAR_2->target_oloc.pool_ns) {
  VAR_1->nspace = VAR_2->target_oloc.pool_ns->str;
  VAR_1->nspace_len = VAR_2->target_oloc.pool_ns->len;
 } else {
  VAR_1->nspace = ((void*)0);
  VAR_1->nspace_len = 0;
 }
 VAR_1->pool = VAR_2->target_oloc.pool;
 FUNC_0(VAR_1);
}
