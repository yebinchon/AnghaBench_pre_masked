
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_snap_context {int nref; } ;


 int FUNC_0 (int *) ;

struct ceph_snap_context *FUNC_1(struct ceph_snap_context *VAR_0)
{
 if (VAR_0)
  FUNC_0(&VAR_0->nref);
 return VAR_0;
}
