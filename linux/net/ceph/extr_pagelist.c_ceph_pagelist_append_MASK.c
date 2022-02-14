
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ceph_pagelist {size_t room; int length; scalar_t__ mapped_tail; } ;


 int VAR_0 ;
 int FUNC_0 (struct ceph_pagelist*) ;
 int FUNC_1 (scalar_t__,void const*,size_t) ;

int FUNC_2(struct ceph_pagelist *VAR_1, const void *VAR_2, size_t VAR_3)
{
 while (VAR_1->room < VAR_3) {
  size_t VAR_4 = VAR_1->room;
  int VAR_5;

  FUNC_1(VAR_1->mapped_tail + (VAR_1->length & ~VAR_0),
         VAR_2, VAR_4);
  VAR_1->length += VAR_4;
  VAR_1->room -= VAR_4;
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
  VAR_5 = FUNC_0(VAR_1);
  if (VAR_5)
   return VAR_5;
 }

 FUNC_1(VAR_1->mapped_tail + (VAR_1->length & ~VAR_0), VAR_2, VAR_3);
 VAR_1->length += VAR_3;
 VAR_1->room -= VAR_3;
 return 0;
}
