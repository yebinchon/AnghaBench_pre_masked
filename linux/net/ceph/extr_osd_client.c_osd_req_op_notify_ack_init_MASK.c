
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct ceph_pagelist {int length; } ;
struct ceph_osd_request {int dummy; } ;
struct TYPE_2__ {int request_data; } ;
struct ceph_osd_req_op {int indata_len; TYPE_1__ notify_ack; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ceph_osd_req_op* FUNC_0 (struct ceph_osd_request*,int,int ,int ) ;
 int FUNC_1 (int *,struct ceph_pagelist*) ;
 struct ceph_pagelist* FUNC_2 (int ) ;
 int FUNC_3 (struct ceph_pagelist*,void*,int ) ;
 int FUNC_4 (struct ceph_pagelist*,int ) ;
 int FUNC_5 (struct ceph_pagelist*,int ) ;
 int FUNC_6 (struct ceph_pagelist*) ;

__attribute__((used)) static int FUNC_7(struct ceph_osd_request *VAR_3, int VAR_4,
          u64 VAR_5, u64 VAR_6, void *VAR_7,
          u32 VAR_8)
{
 struct ceph_osd_req_op *VAR_9;
 struct ceph_pagelist *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_0(VAR_3, VAR_4, VAR_0, 0);

 VAR_10 = FUNC_2(VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_5(VAR_10, VAR_5);
 VAR_11 |= FUNC_5(VAR_10, VAR_6);
 if (VAR_7) {
  VAR_11 |= FUNC_4(VAR_10, VAR_8);
  VAR_11 |= FUNC_3(VAR_10, VAR_7, VAR_8);
 } else {
  VAR_11 |= FUNC_4(VAR_10, 0);
 }
 if (VAR_11) {
  FUNC_6(VAR_10);
  return -VAR_1;
 }

 FUNC_1(&VAR_9->notify_ack.request_data, VAR_10);
 VAR_9->indata_len = VAR_10->length;
 return 0;
}
