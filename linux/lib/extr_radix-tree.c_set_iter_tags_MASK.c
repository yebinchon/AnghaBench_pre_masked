
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radix_tree_node {unsigned int** tags; } ;
struct radix_tree_iter {int tags; int next_index; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct radix_tree_iter*,unsigned int) ;

__attribute__((used)) static void FUNC_1(struct radix_tree_iter *VAR_2,
    struct radix_tree_node *VAR_3, unsigned VAR_4,
    unsigned VAR_5)
{
 unsigned VAR_6 = VAR_4 / VAR_0;
 unsigned VAR_7 = VAR_4 % VAR_0;

 if (!VAR_3) {
  VAR_2->tags = 1;
  return;
 }

 VAR_2->tags = VAR_3->tags[VAR_5][VAR_6] >> VAR_7;


 if (VAR_6 < VAR_1 - 1) {

  if (VAR_7)
   VAR_2->tags |= VAR_3->tags[VAR_5][VAR_6 + 1] <<
      (VAR_0 - VAR_7);

  VAR_2->next_index = FUNC_0(VAR_2, VAR_0);
 }
}
