
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {int size; int asize; scalar_t__* data; scalar_t__ unit; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct buf const*,int) ;

const char *
FUNC_2(const struct buf *VAR_1)
{
 FUNC_0(VAR_1 && VAR_1->unit);

 if (VAR_1->size < VAR_1->asize && VAR_1->data[VAR_1->size] == 0)
  return (char *)VAR_1->data;

 if (VAR_1->size + 1 <= VAR_1->asize || FUNC_1(VAR_1, VAR_1->size + 1) == VAR_0) {
  VAR_1->data[VAR_1->size] = 0;
  return (char *)VAR_1->data;
 }

 return ((void*)0);
}
