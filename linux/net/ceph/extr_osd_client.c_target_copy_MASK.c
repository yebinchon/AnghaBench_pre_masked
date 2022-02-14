
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osd_request_target {int osd; int last_force_resend; int epoch; int paused; int flags; int sort_bitwise; int min_size; int size; int up; int acting; int pg_num_mask; int pg_num; int spgid; int pgid; int target_oloc; int target_oid; int base_oloc; int base_oid; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct ceph_osd_request_target *VAR_0,
   const struct ceph_osd_request_target *VAR_1)
{
 FUNC_0(&VAR_0->base_oid, &VAR_1->base_oid);
 FUNC_1(&VAR_0->base_oloc, &VAR_1->base_oloc);
 FUNC_0(&VAR_0->target_oid, &VAR_1->target_oid);
 FUNC_1(&VAR_0->target_oloc, &VAR_1->target_oloc);

 VAR_0->pgid = VAR_1->pgid;
 VAR_0->spgid = VAR_1->spgid;
 VAR_0->pg_num = VAR_1->pg_num;
 VAR_0->pg_num_mask = VAR_1->pg_num_mask;
 FUNC_2(&VAR_0->acting, &VAR_1->acting);
 FUNC_2(&VAR_0->up, &VAR_1->up);
 VAR_0->size = VAR_1->size;
 VAR_0->min_size = VAR_1->min_size;
 VAR_0->sort_bitwise = VAR_1->sort_bitwise;

 VAR_0->flags = VAR_1->flags;
 VAR_0->paused = VAR_1->paused;

 VAR_0->epoch = VAR_1->epoch;
 VAR_0->last_force_resend = VAR_1->last_force_resend;

 VAR_0->osd = VAR_1->osd;
}
