
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct assoc_array_shortcut {int parent_slot; int back_pointer; int next_node; } ;
struct assoc_array_ptr {int dummy; } ;
struct assoc_array_node {int parent_slot; int back_pointer; int * slots; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 struct assoc_array_ptr* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct assoc_array_ptr const*) ;
 scalar_t__ FUNC_2 (struct assoc_array_ptr const*) ;
 scalar_t__ FUNC_3 (struct assoc_array_ptr const*) ;
 void const* FUNC_4 (struct assoc_array_ptr const*) ;
 struct assoc_array_node* FUNC_5 (struct assoc_array_ptr const*) ;
 struct assoc_array_shortcut* FUNC_6 (struct assoc_array_ptr const*) ;

__attribute__((used)) static int FUNC_7(const struct assoc_array_ptr *VAR_2,
           const struct assoc_array_ptr *VAR_3,
           int (*VAR_4)(const void *VAR_5,
             void *VAR_6),
           void *VAR_7)
{
 const struct assoc_array_shortcut *VAR_8;
 const struct assoc_array_node *VAR_9;
 const struct assoc_array_ptr *VAR_10, *VAR_11, *VAR_12;
 unsigned long VAR_13;
 int VAR_14, VAR_15;

 VAR_10 = VAR_2;

begin_node:
 if (FUNC_3(VAR_10)) {

  VAR_8 = FUNC_6(VAR_10);
  VAR_10 = FUNC_0(VAR_8->next_node);
 }

 VAR_9 = FUNC_5(VAR_10);
 VAR_14 = 0;
 VAR_13 = 0;
 for (; VAR_14 < VAR_0; VAR_14++) {
  VAR_11 = FUNC_0(VAR_9->slots[VAR_14]);
  VAR_13 |= (unsigned long)VAR_11;
  if (VAR_11 && FUNC_1(VAR_11)) {




   VAR_15 = VAR_4(FUNC_4(VAR_11),
           VAR_7);
   if (VAR_15)
    return VAR_15;
  }
 }
 if (!(VAR_13 & VAR_1))
  goto finished_node;
 VAR_14 = 0;

continue_node:
 VAR_9 = FUNC_5(VAR_10);
 for (; VAR_14 < VAR_0; VAR_14++) {
  VAR_11 = FUNC_0(VAR_9->slots[VAR_14]);
  if (FUNC_2(VAR_11)) {
   VAR_10 = VAR_11;
   goto begin_node;
  }
 }

finished_node:

 VAR_12 = FUNC_0(VAR_9->back_pointer);
 VAR_14 = VAR_9->parent_slot;
 if (VAR_12 == VAR_3)
  return 0;

 if (FUNC_3(VAR_12)) {
  VAR_8 = FUNC_6(VAR_12);
  VAR_10 = VAR_12;
  VAR_12 = FUNC_0(VAR_8->back_pointer);
  VAR_14 = VAR_8->parent_slot;
  if (VAR_12 == VAR_3)
   return 0;
 }


 VAR_10 = VAR_12;
 VAR_14++;
 goto continue_node;
}
