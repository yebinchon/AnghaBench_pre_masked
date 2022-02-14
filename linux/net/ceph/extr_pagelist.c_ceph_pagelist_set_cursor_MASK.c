
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ceph_pagelist_cursor {int room; int page_lru; struct ceph_pagelist* pl; } ;
struct TYPE_2__ {int prev; } ;
struct ceph_pagelist {int room; TYPE_1__ head; } ;



void FUNC_0(struct ceph_pagelist *VAR_0,
         struct ceph_pagelist_cursor *VAR_1)
{
 VAR_1->pl = VAR_0;
 VAR_1->page_lru = VAR_0->head.prev;
 VAR_1->room = VAR_0->room;
}
