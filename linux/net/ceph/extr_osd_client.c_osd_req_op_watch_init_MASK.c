
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct ceph_osd_request {int dummy; } ;
struct TYPE_2__ {scalar_t__ gen; int op; int cookie; } ;
struct ceph_osd_req_op {TYPE_1__ watch; } ;


 int VAR_0 ;
 struct ceph_osd_req_op* FUNC_0 (struct ceph_osd_request*,int,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ceph_osd_request *VAR_1, int VAR_2,
      u64 VAR_3, u8 VAR_4)
{
 struct ceph_osd_req_op *VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_0, 0);
 VAR_5->watch.cookie = VAR_3;
 VAR_5->watch.op = VAR_4;
 VAR_5->watch.gen = 0;
}
