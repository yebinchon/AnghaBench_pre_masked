
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ceph_pagelist {scalar_t__ length; } ;
struct ceph_osd_request {TYPE_2__* r_ops; } ;
struct ceph_osd_data {int dummy; } ;
struct TYPE_3__ {int indata_len; } ;
struct TYPE_4__ {int indata_len; TYPE_1__ cls; } ;


 int FUNC_0 (struct ceph_osd_data*,struct ceph_pagelist*) ;
 int VAR_0 ;
 struct ceph_osd_data* FUNC_1 (struct ceph_osd_request*,unsigned int,int ,int ) ;
 int VAR_1 ;

void FUNC_2(
   struct ceph_osd_request *VAR_2,
   unsigned int VAR_3, struct ceph_pagelist *VAR_4)
{
 struct ceph_osd_data *VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_0, VAR_1);
 FUNC_0(VAR_5, VAR_4);
 VAR_2->r_ops[VAR_3].cls.indata_len += VAR_4->length;
 VAR_2->r_ops[VAR_3].indata_len += VAR_4->length;
}
