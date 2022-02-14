
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_file_layout_legacy {int fl_pg_pool; int fl_object_size; int fl_stripe_count; int fl_stripe_unit; } ;
struct ceph_file_layout {scalar_t__ stripe_unit; scalar_t__ stripe_count; scalar_t__ object_size; int pool_id; } ;


 void* FUNC_0 (int ) ;

void FUNC_1(struct ceph_file_layout *VAR_0,
      struct ceph_file_layout_legacy *VAR_1)
{
 VAR_0->stripe_unit = FUNC_0(VAR_1->fl_stripe_unit);
 VAR_0->stripe_count = FUNC_0(VAR_1->fl_stripe_count);
 VAR_0->object_size = FUNC_0(VAR_1->fl_object_size);
 VAR_0->pool_id = FUNC_0(VAR_1->fl_pg_pool);
 if (VAR_0->pool_id == 0 && VAR_0->stripe_unit == 0 &&
     VAR_0->stripe_count == 0 && VAR_0->object_size == 0)
  VAR_0->pool_id = -1;
}
