
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ceph_osd_client {scalar_t__ epoch_barrier; int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct ceph_osd_client*,scalar_t__) ;

void FUNC_6(struct ceph_osd_client *VAR_0, u32 VAR_1)
{
 FUNC_0(&VAR_0->lock);
 if (FUNC_2(VAR_1 > VAR_0->epoch_barrier)) {
  FUNC_3(&VAR_0->lock);
  FUNC_1(&VAR_0->lock);
  FUNC_5(VAR_0, VAR_1);
  FUNC_4(&VAR_0->lock);
 } else {
  FUNC_3(&VAR_0->lock);
 }
}
