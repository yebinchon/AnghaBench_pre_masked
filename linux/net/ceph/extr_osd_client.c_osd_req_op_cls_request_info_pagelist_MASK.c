
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_pagelist {int dummy; } ;
struct ceph_osd_request {int dummy; } ;
struct ceph_osd_data {int dummy; } ;


 int FUNC_0 (struct ceph_osd_data*,struct ceph_pagelist*) ;
 int VAR_0 ;
 struct ceph_osd_data* FUNC_1 (struct ceph_osd_request*,unsigned int,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(
   struct ceph_osd_request *VAR_2,
   unsigned int VAR_3, struct ceph_pagelist *VAR_4)
{
 struct ceph_osd_data *VAR_5;

 VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_0, VAR_1);
 FUNC_0(VAR_5, VAR_4);
}
