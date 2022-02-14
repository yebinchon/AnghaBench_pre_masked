
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {size_t size; char const* data; scalar_t__ unit; } ;


 int FUNC_0 (int) ;

int
FUNC_1(const struct buf *VAR_0, const char *VAR_1)
{
 size_t VAR_2;
 FUNC_0(VAR_0 && VAR_0->unit);

 for (VAR_2 = 0; VAR_2 < VAR_0->size; ++VAR_2) {
  if (VAR_1[VAR_2] == 0)
   return 0;

  if (VAR_0->data[VAR_2] != VAR_1[VAR_2])
   return VAR_0->data[VAR_2] - VAR_1[VAR_2];
 }

 return 0;
}
