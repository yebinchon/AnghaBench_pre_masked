
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_root {int dummy; } ;
struct item {unsigned long index; } ;


 int VAR_0 ;
 char VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct radix_tree_root*,void**,unsigned long,int,int) ;

__attribute__((used)) static void FUNC_2(struct radix_tree_root *VAR_2,
   char *VAR_3, int VAR_4)
{
 struct item *VAR_5[VAR_0];
 int VAR_6;
 unsigned long VAR_7 = 0;
 unsigned long VAR_8 = 0;

 while ((VAR_6 = FUNC_1(VAR_2, (void **)VAR_5,
     VAR_7, VAR_0, VAR_4))) {
  int VAR_9;

  for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++) {
   struct item *VAR_10 = VAR_5[VAR_9];

   while (VAR_8 < VAR_10->index) {
    FUNC_0(VAR_3[VAR_8] != VAR_1);
    VAR_8++;
   }
   FUNC_0(VAR_3[VAR_8] == VAR_1);
   VAR_8++;
  }
  VAR_7 = VAR_5[VAR_6 - 1]->index + 1;
 }
}
