
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int dummy; } ;
struct item {unsigned long index; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct radix_tree_root*,void**,unsigned long,int) ;

void FUNC_2(struct radix_tree_root *VAR_0,
   unsigned long VAR_1, unsigned long VAR_2,
   int VAR_3, int VAR_4)
{
 struct item *VAR_5[VAR_3];
 unsigned long VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2; ) {
  int VAR_7;
  int VAR_8 = VAR_3;
  int VAR_9;

  if (VAR_8 > (VAR_2 - VAR_6))
   VAR_8 = VAR_2 - VAR_6;

  VAR_7 = FUNC_1(VAR_0, (void **)VAR_5,
      VAR_1 + VAR_6, VAR_8);
  FUNC_0(VAR_7 == VAR_8);
  for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++)
   FUNC_0(VAR_5[VAR_9]->index == VAR_1 + VAR_6 + VAR_9);
  VAR_6 += VAR_4;
 }
}
