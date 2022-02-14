
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osd_client {int lock; } ;
struct ceph_osd {int lock; struct ceph_osd_client* o_osdc; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct ceph_osd *VAR_0)
{
 struct ceph_osd_client *VAR_1 = VAR_0->o_osdc;

 FUNC_0(!(FUNC_1(&VAR_0->lock) &&
    FUNC_2(&VAR_1->lock)) &&
  !FUNC_3(&VAR_1->lock));
}
