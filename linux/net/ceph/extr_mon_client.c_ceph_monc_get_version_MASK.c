
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int newest; } ;
struct ceph_mon_generic_request {TYPE_1__ u; } ;
struct ceph_mon_client {int dummy; } ;


 scalar_t__ FUNC_0 (struct ceph_mon_generic_request*) ;
 int FUNC_1 (struct ceph_mon_generic_request*) ;
 struct ceph_mon_generic_request* FUNC_2 (struct ceph_mon_client*,char const*,int *,int ) ;
 int FUNC_3 (struct ceph_mon_generic_request*) ;
 int FUNC_4 (struct ceph_mon_generic_request*) ;

int FUNC_5(struct ceph_mon_client *VAR_0, const char *VAR_1,
     u64 *VAR_2)
{
 struct ceph_mon_generic_request *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_2(VAR_0, VAR_1, ((void*)0), 0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 VAR_4 = FUNC_4(VAR_3);
 if (!VAR_4)
  *VAR_2 = VAR_3->u.newest;

 FUNC_3(VAR_3);
 return VAR_4;
}
