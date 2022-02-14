
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct match_workbuf {unsigned int pos; unsigned int* history; unsigned int len; unsigned int size; } ;



__attribute__((used)) static bool FUNC_0(struct match_workbuf *VAR_0, unsigned int VAR_1,
      unsigned int *VAR_2)
{
 unsigned int VAR_3 = VAR_0->pos;
 unsigned int VAR_4;

 if (VAR_0->history[VAR_3] < VAR_1)
  return 0;

 for (VAR_4 = 0; VAR_4 <= VAR_0->len; VAR_4++) {
  if (VAR_0->history[VAR_3] == VAR_1) {
   *VAR_2 = VAR_4;
   return 1;
  }
  if (VAR_3 == 0)
   VAR_3 = VAR_0->size;
  VAR_3--;
 }

 *VAR_2 = VAR_4;
 return 1;
}
