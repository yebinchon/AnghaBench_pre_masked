
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct ceph_pagelist {scalar_t__ length; } ;
struct ceph_msg_data_cursor {scalar_t__ offset; scalar_t__ resid; struct page* page; scalar_t__ last_piece; struct ceph_msg_data* data; } ;
struct ceph_msg_data {scalar_t__ type; struct ceph_pagelist* pagelist; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static struct page *
FUNC_1(struct ceph_msg_data_cursor *VAR_3,
    size_t *VAR_4, size_t *VAR_5)
{
 struct ceph_msg_data *VAR_6 = VAR_3->data;
 struct ceph_pagelist *VAR_7;

 FUNC_0(VAR_6->type != VAR_0);

 VAR_7 = VAR_6->pagelist;
 FUNC_0(!VAR_7);

 FUNC_0(!VAR_3->page);
 FUNC_0(VAR_3->offset + VAR_3->resid != VAR_7->length);


 *VAR_4 = VAR_3->offset & ~VAR_1;
 if (VAR_3->last_piece)
  *VAR_5 = VAR_3->resid;
 else
  *VAR_5 = VAR_2 - *VAR_4;

 return VAR_3->page;
}
