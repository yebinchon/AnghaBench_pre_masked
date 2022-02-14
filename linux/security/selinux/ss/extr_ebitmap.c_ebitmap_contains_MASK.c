
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ebitmap_node {scalar_t__ startbit; int* maps; struct ebitmap_node* next; } ;
struct ebitmap {scalar_t__ highbit; struct ebitmap_node* node; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

int FUNC_1(struct ebitmap *VAR_2, struct ebitmap *VAR_3, u32 VAR_4)
{
 struct ebitmap_node *VAR_5, *VAR_6;
 int VAR_7;

 if (VAR_2->highbit < VAR_3->highbit)
  return 0;

 VAR_5 = VAR_2->node;
 VAR_6 = VAR_3->node;

 while (VAR_5 && VAR_6 && (VAR_5->startbit <= VAR_6->startbit)) {
  if (VAR_5->startbit < VAR_6->startbit) {
   VAR_5 = VAR_5->next;
   continue;
  }
  for (VAR_7 = VAR_0 - 1; (VAR_7 >= 0) && !VAR_6->maps[VAR_7]; )
   VAR_7--;
  if (VAR_4 && (VAR_7 >= 0)) {
   u32 VAR_8 = VAR_6->startbit + VAR_7 * VAR_1 +
      FUNC_0(VAR_6->maps[VAR_7]);
   if (VAR_8 > VAR_4)
    return 0;
  }

  while (VAR_7 >= 0) {
   if ((VAR_5->maps[VAR_7] & VAR_6->maps[VAR_7]) != VAR_6->maps[VAR_7])
    return 0;
   VAR_7--;
  }

  VAR_5 = VAR_5->next;
  VAR_6 = VAR_6->next;
 }

 if (VAR_6)
  return 0;

 return 1;
}
