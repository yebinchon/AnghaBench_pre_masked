
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u16 ;
struct ceph_pagelist {int dummy; } ;
struct ceph_osd_request {int dummy; } ;
struct TYPE_2__ {size_t name_len; size_t value_len; int osd_data; void* cmp_mode; void* cmp_op; } ;
struct ceph_osd_req_op {size_t indata_len; TYPE_1__ xattr; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ceph_osd_req_op* FUNC_1 (struct ceph_osd_request*,unsigned int,scalar_t__,int ) ;
 int FUNC_2 (int *,struct ceph_pagelist*) ;
 struct ceph_pagelist* FUNC_3 (int ) ;
 int FUNC_4 (struct ceph_pagelist*,void const*,size_t) ;
 int FUNC_5 (struct ceph_pagelist*) ;
 size_t FUNC_6 (char const*) ;

int FUNC_7(struct ceph_osd_request *VAR_4, unsigned int VAR_5,
     u16 VAR_6, const char *VAR_7, const void *VAR_8,
     size_t VAR_9, u8 VAR_10, u8 VAR_11)
{
 struct ceph_osd_req_op *VAR_12 = FUNC_1(VAR_4, VAR_5,
            VAR_6, 0);
 struct ceph_pagelist *VAR_13;
 size_t VAR_14;
 int VAR_15;

 FUNC_0(VAR_6 != VAR_1 && VAR_6 != VAR_0);

 VAR_13 = FUNC_3(VAR_3);
 if (!VAR_13)
  return -VAR_2;

 VAR_14 = FUNC_6(VAR_7);
 VAR_12->xattr.name_len = VAR_14;
 VAR_15 = FUNC_4(VAR_13, VAR_7, VAR_14);
 if (VAR_15)
  goto err_pagelist_free;

 VAR_12->xattr.value_len = VAR_9;
 VAR_15 = FUNC_4(VAR_13, VAR_8, VAR_9);
 if (VAR_15)
  goto err_pagelist_free;
 VAR_14 += VAR_9;

 VAR_12->xattr.cmp_op = VAR_10;
 VAR_12->xattr.cmp_mode = VAR_11;

 FUNC_2(&VAR_12->xattr.osd_data, VAR_13);
 VAR_12->indata_len = VAR_14;
 return 0;

err_pagelist_free:
 FUNC_5(VAR_13);
 return VAR_15;
}
