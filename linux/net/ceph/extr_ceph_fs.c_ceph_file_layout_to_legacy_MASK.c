
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_file_layout_legacy {void* fl_pg_pool; void* fl_object_size; void* fl_stripe_count; void* fl_stripe_unit; } ;
struct ceph_file_layout {scalar_t__ stripe_unit; scalar_t__ stripe_count; scalar_t__ object_size; scalar_t__ pool_id; } ;


 void* FUNC_0 (scalar_t__) ;

void FUNC_1(struct ceph_file_layout *VAR_0,
    struct ceph_file_layout_legacy *VAR_1)
{
 VAR_1->fl_stripe_unit = FUNC_0(VAR_0->stripe_unit);
 VAR_1->fl_stripe_count = FUNC_0(VAR_0->stripe_count);
 VAR_1->fl_object_size = FUNC_0(VAR_0->object_size);
 if (VAR_0->pool_id >= 0)
  VAR_1->fl_pg_pool = FUNC_0(VAR_0->pool_id);
 else
  VAR_1->fl_pg_pool = 0;
}
