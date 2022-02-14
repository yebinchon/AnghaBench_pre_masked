
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int size; int asize; int* data; scalar_t__ unit; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct buf*,int) ;

void
FUNC_2(struct buf *VAR_1, int VAR_2)
{
 FUNC_0(VAR_1 && VAR_1->unit);

 if (VAR_1->size + 1 > VAR_1->asize && FUNC_1(VAR_1, VAR_1->size + 1) < VAR_0)
  return;

 VAR_1->data[VAR_1->size] = VAR_2;
 VAR_1->size += 1;
}
