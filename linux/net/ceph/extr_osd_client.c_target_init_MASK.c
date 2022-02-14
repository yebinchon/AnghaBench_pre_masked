
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osd_request_target {int size; int min_size; int osd; int up; int acting; int target_oloc; int target_oid; int base_oloc; int base_oid; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ceph_osd_request_target *VAR_1)
{
 FUNC_0(&VAR_1->base_oid);
 FUNC_1(&VAR_1->base_oloc);
 FUNC_0(&VAR_1->target_oid);
 FUNC_1(&VAR_1->target_oloc);

 FUNC_2(&VAR_1->acting);
 FUNC_2(&VAR_1->up);
 VAR_1->size = -1;
 VAR_1->min_size = -1;

 VAR_1->osd = VAR_0;
}
