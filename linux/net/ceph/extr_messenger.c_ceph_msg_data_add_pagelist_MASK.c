
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_pagelist {scalar_t__ length; int refcnt; } ;
struct ceph_msg_data {struct ceph_pagelist* pagelist; int type; } ;
struct ceph_msg {int data_length; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct ceph_msg_data* FUNC_1 (struct ceph_msg*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct ceph_msg *VAR_1,
    struct ceph_pagelist *VAR_2)
{
 struct ceph_msg_data *VAR_3;

 FUNC_0(!VAR_2);
 FUNC_0(!VAR_2->length);

 VAR_3 = FUNC_1(VAR_1);
 VAR_3->type = VAR_0;
 FUNC_2(&VAR_2->refcnt);
 VAR_3->pagelist = VAR_2;

 VAR_1->data_length += VAR_2->length;
}
