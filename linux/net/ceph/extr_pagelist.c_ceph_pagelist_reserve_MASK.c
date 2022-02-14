
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int lru; } ;
struct ceph_pagelist {size_t room; size_t num_pages_free; int free_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 struct page* FUNC_0 (int ) ;
 int FUNC_1 (int *,int *) ;

int FUNC_2(struct ceph_pagelist *VAR_4, size_t VAR_5)
{
 if (VAR_5 <= VAR_4->room)
  return 0;
 VAR_5 -= VAR_4->room;
 VAR_5 = (VAR_5 + VAR_3 - 1) >> VAR_2;

 while (VAR_5 > VAR_4->num_pages_free) {
  struct page *VAR_6 = FUNC_0(VAR_1);
  if (!VAR_6)
   return -VAR_0;
  FUNC_1(&VAR_6->lru, &VAR_4->free_list);
  ++VAR_4->num_pages_free;
 }
 return 0;
}
