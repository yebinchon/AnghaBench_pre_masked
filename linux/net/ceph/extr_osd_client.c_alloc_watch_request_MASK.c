
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ceph_osd_request {int dummy; } ;
struct ceph_osd_linger_request {int dummy; } ;


 int VAR_0 ;
 struct ceph_osd_request* FUNC_0 (struct ceph_osd_linger_request*) ;
 scalar_t__ FUNC_1 (struct ceph_osd_request*,int ) ;
 int FUNC_2 (struct ceph_osd_request*) ;
 int FUNC_3 (struct ceph_osd_request*,int ,int ,int ) ;

__attribute__((used)) static struct ceph_osd_request *
FUNC_4(struct ceph_osd_linger_request *VAR_1, u8 VAR_2)
{
 struct ceph_osd_request *VAR_3;

 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_3)
  return ((void*)0);





 FUNC_3(VAR_3, 0, 0, VAR_2);

 if (FUNC_1(VAR_3, VAR_0)) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
