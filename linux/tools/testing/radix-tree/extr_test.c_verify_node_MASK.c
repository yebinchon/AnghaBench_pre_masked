
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_node {int** tags; int shift; struct radix_tree_node** slots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct radix_tree_node* FUNC_1 (struct radix_tree_node*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int,int*) ;

__attribute__((used)) static int FUNC_4(struct radix_tree_node *VAR_3, unsigned int VAR_4,
   int VAR_5)
{
 int VAR_6 = 0;
 int VAR_7;
 int VAR_8;

 VAR_3 = FUNC_1(VAR_3);


 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  if (VAR_3->tags[VAR_4][VAR_7]) {
   VAR_6 = 1;
   break;
  }
 }
 if (VAR_5 != VAR_6) {
  FUNC_2("tag: %u, shift %u, tagged: %d, anyset: %d\n",
   VAR_4, VAR_3->shift, VAR_5, VAR_6);
  for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
   FUNC_2("tag %d: ", VAR_8);
   for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
    FUNC_2("%016lx ", VAR_3->tags[VAR_8][VAR_7]);
   FUNC_2("\n");
  }
  return 1;
 }
 FUNC_0(VAR_5 == VAR_6);


 if (VAR_3->shift > 0) {
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   if (VAR_3->slots[VAR_7])
    if (FUNC_4(VAR_3->slots[VAR_7], VAR_4,
         !!FUNC_3(VAR_7, VAR_3->tags[VAR_4]))) {
     FUNC_2("Failure at off %d\n", VAR_7);
     for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
      FUNC_2("tag %d: ", VAR_8);
      for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++)
       FUNC_2("%016lx ", VAR_3->tags[VAR_8][VAR_7]);
      FUNC_2("\n");
     }
     return 1;
    }
 }
 return 0;
}
