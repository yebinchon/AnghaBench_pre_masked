
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_osd_request {int dummy; } ;
struct ceph_osd_client {int lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ceph_osd_request*,int) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct ceph_osd_client *VAR_0,
       struct ceph_osd_request *VAR_1,
       bool VAR_2)
{
 FUNC_0(&VAR_0->lock);
 FUNC_1(VAR_1, 0);
 FUNC_2(&VAR_0->lock);

 return 0;
}
