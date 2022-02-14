
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct ceph_mon_generic_request {int dummy; } ;
struct ceph_mon_client {int dummy; } ;
typedef int ceph_monc_callback_t ;


 scalar_t__ FUNC_0 (struct ceph_mon_generic_request*) ;
 int FUNC_1 (struct ceph_mon_generic_request*) ;
 struct ceph_mon_generic_request* FUNC_2 (struct ceph_mon_client*,char const*,int ,int ) ;
 int FUNC_3 (struct ceph_mon_generic_request*) ;

int FUNC_4(struct ceph_mon_client *VAR_0, const char *VAR_1,
    ceph_monc_callback_t VAR_2, u64 VAR_3)
{
 struct ceph_mon_generic_request *VAR_4;

 VAR_4 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_3(VAR_4);
 return 0;
}
