
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_pagelist {int refcnt; scalar_t__ num_pages_free; int free_list; scalar_t__ room; scalar_t__ length; int * mapped_tail; int head; } ;
typedef int gfp_t ;


 int FUNC_0 (int *) ;
 struct ceph_pagelist* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int) ;

struct ceph_pagelist *FUNC_3(gfp_t VAR_0)
{
 struct ceph_pagelist *VAR_1;

 VAR_1 = FUNC_1(sizeof(*VAR_1), VAR_0);
 if (!VAR_1)
  return ((void*)0);

 FUNC_0(&VAR_1->head);
 VAR_1->mapped_tail = ((void*)0);
 VAR_1->length = 0;
 VAR_1->room = 0;
 FUNC_0(&VAR_1->free_list);
 VAR_1->num_pages_free = 0;
 FUNC_2(&VAR_1->refcnt, 1);

 return VAR_1;
}
