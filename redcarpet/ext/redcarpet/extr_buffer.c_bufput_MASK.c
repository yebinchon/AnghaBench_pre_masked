
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {scalar_t__ size; scalar_t__ asize; scalar_t__ data; scalar_t__ unit; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct buf*,scalar_t__) ;
 int FUNC_2 (scalar_t__,void const*,size_t) ;

void
FUNC_3(struct buf *VAR_1, const void *VAR_2, size_t VAR_3)
{
 FUNC_0(VAR_1 && VAR_1->unit);

 if (VAR_1->size + VAR_3 > VAR_1->asize && FUNC_1(VAR_1, VAR_1->size + VAR_3) < VAR_0)
  return;

 FUNC_2(VAR_1->data + VAR_1->size, VAR_2, VAR_3);
 VAR_1->size += VAR_3;
}
