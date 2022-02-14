
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct world {unsigned int delta_count; unsigned int root_count; } ;
struct action_item {unsigned int key_id; int expect_delta; int expect_root; int action; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 int FUNC_0 (int) ;
 int FUNC_1 (char*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct world *VAR_3,
   const struct action_item *VAR_4,
   unsigned int VAR_5,
   unsigned int VAR_6)
{
 unsigned int VAR_7 = VAR_4->key_id;

 switch (VAR_4->expect_delta) {
 case 131:
  if (VAR_5 != VAR_3->delta_count) {
   FUNC_1("Key %u: Delta count changed while expected to remain the same.\n",
          VAR_7);
   return -VAR_2;
  }
  break;
 case 132:
  if (FUNC_0(VAR_4->action == VAR_1))
   return -VAR_2;
  if (VAR_5 + 1 != VAR_3->delta_count) {
   FUNC_1("Key %u: Delta count was not incremented.\n",
          VAR_7);
   return -VAR_2;
  }
  break;
 case 133:
  if (FUNC_0(VAR_4->action == VAR_0))
   return -VAR_2;
  if (VAR_5 - 1 != VAR_3->delta_count) {
   FUNC_1("Key %u: Delta count was not decremented.\n",
          VAR_7);
   return -VAR_2;
  }
  break;
 }

 switch (VAR_4->expect_root) {
 case 128:
  if (VAR_6 != VAR_3->root_count) {
   FUNC_1("Key %u: Root count changed while expected to remain the same.\n",
          VAR_7);
   return -VAR_2;
  }
  break;
 case 129:
  if (FUNC_0(VAR_4->action == VAR_1))
   return -VAR_2;
  if (VAR_6 + 1 != VAR_3->root_count) {
   FUNC_1("Key %u: Root count was not incremented.\n",
          VAR_7);
   return -VAR_2;
  }
  break;
 case 130:
  if (FUNC_0(VAR_4->action == VAR_0))
   return -VAR_2;
  if (VAR_6 - 1 != VAR_3->root_count) {
   FUNC_1("Key %u: Root count was not decremented.\n",
          VAR_7);
   return -VAR_2;
  }
 }

 return 0;
}
