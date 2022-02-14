
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xa_state {unsigned int xa_offset; struct xa_node* xa_node; scalar_t__ xa_index; int xa; } ;
struct xa_node {unsigned int shift; } ;


 struct xa_node* VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,struct xa_node*,unsigned int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct xa_state*) ;

void FUNC_3(struct xa_state *VAR_2)
{
 struct xa_node *VAR_3 = VAR_2->xa_node;

 if (FUNC_2(VAR_2))
  return;

 if (VAR_3) {
  unsigned int VAR_4 = VAR_2->xa_offset;
  while (++VAR_4 < VAR_1) {
   if (!FUNC_1(FUNC_0(VAR_2->xa, VAR_3, VAR_4)))
    break;
  }
  VAR_2->xa_index += (VAR_4 - VAR_2->xa_offset) << VAR_3->shift;
 } else {
  VAR_2->xa_index++;
 }
 VAR_2->xa_node = VAR_0;
}
