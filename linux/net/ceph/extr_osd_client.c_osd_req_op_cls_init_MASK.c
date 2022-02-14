
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_pagelist {int dummy; } ;
struct ceph_osd_request {int dummy; } ;
struct TYPE_2__ {char const* class_name; size_t class_len; char const* method_name; size_t method_len; } ;
struct ceph_osd_req_op {size_t indata_len; TYPE_1__ cls; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct ceph_osd_req_op* FUNC_1 (struct ceph_osd_request*,unsigned int,int ,int ) ;
 struct ceph_pagelist* FUNC_2 (int ) ;
 int FUNC_3 (struct ceph_pagelist*,char const*,size_t) ;
 int FUNC_4 (struct ceph_pagelist*) ;
 int FUNC_5 (struct ceph_osd_request*,unsigned int,struct ceph_pagelist*) ;
 size_t FUNC_6 (char const*) ;

int FUNC_7(struct ceph_osd_request *VAR_4, unsigned int VAR_5,
   const char *VAR_6, const char *VAR_7)
{
 struct ceph_osd_req_op *VAR_8;
 struct ceph_pagelist *VAR_9;
 size_t VAR_10 = 0;
 size_t VAR_11;
 int VAR_12;

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_0, 0);

 VAR_9 = FUNC_2(VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_8->cls.class_name = VAR_6;
 VAR_11 = FUNC_6(VAR_6);
 FUNC_0(VAR_11 > (size_t) VAR_3);
 VAR_8->cls.class_len = VAR_11;
 VAR_12 = FUNC_3(VAR_9, VAR_6, VAR_11);
 if (VAR_12)
  goto err_pagelist_free;
 VAR_10 += VAR_11;

 VAR_8->cls.method_name = VAR_7;
 VAR_11 = FUNC_6(VAR_7);
 FUNC_0(VAR_11 > (size_t) VAR_3);
 VAR_8->cls.method_len = VAR_11;
 VAR_12 = FUNC_3(VAR_9, VAR_7, VAR_11);
 if (VAR_12)
  goto err_pagelist_free;
 VAR_10 += VAR_11;

 FUNC_5(VAR_4, VAR_5, VAR_9);
 VAR_8->indata_len = VAR_10;
 return 0;

err_pagelist_free:
 FUNC_4(VAR_9);
 return VAR_12;
}
