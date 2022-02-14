
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mon_generic_request {int completion; int (* complete_cb ) (struct ceph_mon_generic_request*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ceph_mon_generic_request*) ;
 int FUNC_2 (struct ceph_mon_generic_request*) ;

__attribute__((used)) static void FUNC_3(struct ceph_mon_generic_request *VAR_0)
{
 if (VAR_0->complete_cb)
  VAR_0->complete_cb(VAR_0);
 else
  FUNC_0(&VAR_0->completion);
 FUNC_1(VAR_0);
}
