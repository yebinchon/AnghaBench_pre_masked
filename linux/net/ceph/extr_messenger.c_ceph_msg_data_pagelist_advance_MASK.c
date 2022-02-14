
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ceph_pagelist {scalar_t__ length; int head; } ;
struct ceph_msg_data_cursor {scalar_t__ offset; scalar_t__ resid; int last_piece; TYPE_1__* page; struct ceph_msg_data* data; } ;
struct ceph_msg_data {scalar_t__ type; struct ceph_pagelist* pagelist; } ;
struct TYPE_3__ {int lru; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int *,int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int VAR_3 ;

__attribute__((used)) static bool FUNC_3(struct ceph_msg_data_cursor *VAR_4,
      size_t VAR_5)
{
 struct ceph_msg_data *VAR_6 = VAR_4->data;
 struct ceph_pagelist *VAR_7;

 FUNC_0(VAR_6->type != VAR_0);

 VAR_7 = VAR_6->pagelist;
 FUNC_0(!VAR_7);

 FUNC_0(VAR_4->offset + VAR_4->resid != VAR_7->length);
 FUNC_0((VAR_4->offset & ~VAR_1) + VAR_5 > VAR_2);



 VAR_4->resid -= VAR_5;
 VAR_4->offset += VAR_5;

 if (!VAR_5 || VAR_4->offset & ~VAR_1)
  return 0;

 if (!VAR_4->resid)
  return 0;



 FUNC_0(FUNC_1(&VAR_4->page->lru, &VAR_7->head));
 VAR_4->page = FUNC_2(VAR_4->page, VAR_3);
 VAR_4->last_piece = VAR_4->resid <= VAR_2;

 return 1;
}
