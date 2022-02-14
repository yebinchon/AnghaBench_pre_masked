
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_pagelist {int dummy; } ;
struct ceph_osd_data {struct ceph_pagelist* pagelist; int type; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct ceph_osd_data *VAR_1,
   struct ceph_pagelist *VAR_2)
{
 VAR_1->type = VAR_0;
 VAR_1->pagelist = VAR_2;
}
