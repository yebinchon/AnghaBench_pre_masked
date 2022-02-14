
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int osd; } ;
struct ceph_osd_linger_request {struct ceph_osd* osd; TYPE_1__ t; struct ceph_osd_client* osdc; } ;
struct ceph_osd_client {int dummy; } ;
struct ceph_osd {int dummy; } ;
typedef enum calc_target_result { ____Placeholder_calc_target_result } calc_target_result ;


 int VAR_0 ;
 int FUNC_0 (struct ceph_osd_client*,TYPE_1__*,int) ;
 int FUNC_1 (struct ceph_osd*,struct ceph_osd_linger_request*) ;
 struct ceph_osd* FUNC_2 (struct ceph_osd_client*,int ,int) ;
 int FUNC_3 (struct ceph_osd*,struct ceph_osd_linger_request*) ;

__attribute__((used)) static enum calc_target_result
FUNC_4(struct ceph_osd_linger_request *VAR_1)
{
 struct ceph_osd_client *VAR_2 = VAR_1->osdc;
 enum calc_target_result VAR_3;

 VAR_3 = FUNC_0(VAR_2, &VAR_1->t, 1);
 if (VAR_3 == VAR_0) {
  struct ceph_osd *VAR_4;

  VAR_4 = FUNC_2(VAR_2, VAR_1->t.osd, 1);
  if (VAR_4 != VAR_1->osd) {
   FUNC_3(VAR_1->osd, VAR_1);
   FUNC_1(VAR_4, VAR_1);
  }
 }

 return VAR_3;
}
