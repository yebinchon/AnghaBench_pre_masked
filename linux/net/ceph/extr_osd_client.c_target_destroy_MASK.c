
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osd_request_target {int target_oloc; int target_oid; int base_oloc; int base_oid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct ceph_osd_request_target *VAR_0)
{
 FUNC_0(&VAR_0->base_oid);
 FUNC_1(&VAR_0->base_oloc);
 FUNC_0(&VAR_0->target_oid);
 FUNC_1(&VAR_0->target_oloc);
}
