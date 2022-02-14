
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osd_client {int lock; scalar_t__ abort_err; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct ceph_osd_client *VAR_0)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->abort_err = 0;
 FUNC_1(&VAR_0->lock);
}
