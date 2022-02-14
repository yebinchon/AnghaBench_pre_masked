
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {size_t unit; scalar_t__ asize; scalar_t__ size; scalar_t__ data; } ;


 struct buf* FUNC_0 (int) ;

struct buf *
FUNC_1(size_t VAR_0)
{
 struct buf *VAR_1;
 VAR_1 = FUNC_0(sizeof (struct buf));

 if (VAR_1) {
  VAR_1->data = 0;
  VAR_1->size = VAR_1->asize = 0;
  VAR_1->unit = VAR_0;
 }
 return VAR_1;
}
