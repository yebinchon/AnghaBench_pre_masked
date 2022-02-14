
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_mon_generic_request {scalar_t__ tid; struct ceph_mon_client* monc; } ;
struct ceph_mon_client {int generic_request_tree; scalar_t__ last_tid; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct ceph_mon_generic_request*) ;
 int FUNC_2 (int *,struct ceph_mon_generic_request*) ;

__attribute__((used)) static void FUNC_3(struct ceph_mon_generic_request *VAR_0)
{
 struct ceph_mon_client *VAR_1 = VAR_0->monc;

 FUNC_0(VAR_0->tid);

 FUNC_1(VAR_0);
 VAR_0->tid = ++VAR_1->last_tid;
 FUNC_2(&VAR_1->generic_request_tree, VAR_0);
}
