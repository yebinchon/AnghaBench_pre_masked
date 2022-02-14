
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_snap_context {int nref; } ;


 int FUNC_0 (struct ceph_snap_context*) ;
 scalar_t__ FUNC_1 (int *) ;

void FUNC_2(struct ceph_snap_context *VAR_0)
{
 if (!VAR_0)
  return;
 if (FUNC_1(&VAR_0->nref)) {

  FUNC_0(VAR_0);
 }
}
