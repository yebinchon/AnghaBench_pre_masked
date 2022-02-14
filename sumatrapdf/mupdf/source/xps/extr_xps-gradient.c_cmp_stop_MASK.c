
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stop {float offset; int index; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct stop *VAR_2 = VAR_0;
 const struct stop *VAR_3 = VAR_1;
 float VAR_4 = VAR_2->offset - VAR_3->offset;
 if (VAR_4 < 0)
  return -1;
 if (VAR_4 > 0)
  return 1;
 return VAR_2->index - VAR_3->index;
}
