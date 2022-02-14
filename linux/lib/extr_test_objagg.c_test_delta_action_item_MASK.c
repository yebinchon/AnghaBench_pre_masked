
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct world {unsigned int delta_count; unsigned int root_count; } ;
struct objagg_obj {int dummy; } ;
struct objagg {int dummy; } ;
struct action_item {unsigned int key_id; int action; int expect_stats; } ;
typedef enum action { ____Placeholder_action } action ;




 int FUNC_0 (struct objagg_obj*) ;
 int FUNC_1 (struct objagg_obj*) ;
 int FUNC_2 (struct world*,struct action_item const*,unsigned int,unsigned int) ;
 int FUNC_3 (struct objagg*,int *,char const**) ;
 int FUNC_4 (char*,unsigned int,char const*) ;
 struct objagg_obj* FUNC_5 (struct world*,struct objagg*,unsigned int) ;
 int FUNC_6 (struct world*,struct objagg*,unsigned int) ;

__attribute__((used)) static int FUNC_7(struct world *VAR_0,
      struct objagg *VAR_1,
      const struct action_item *VAR_2,
      bool VAR_3)
{
 unsigned int VAR_4 = VAR_0->delta_count;
 unsigned int VAR_5 = VAR_0->root_count;
 unsigned int VAR_6 = VAR_2->key_id;
 enum action VAR_7 = VAR_2->action;
 struct objagg_obj *VAR_8;
 const char *VAR_9;
 int VAR_10;

 if (VAR_3)
  VAR_7 = VAR_7 == 129 ? 128 : 129;

 switch (VAR_7) {
 case 129:
  VAR_8 = FUNC_5(VAR_0, VAR_1, VAR_6);
  if (FUNC_0(VAR_8))
   return FUNC_1(VAR_8);
  break;
 case 128:
  FUNC_6(VAR_0, VAR_1, VAR_6);
  break;
 }

 if (VAR_3)
  return 0;
 VAR_10 = FUNC_2(VAR_0, VAR_2,
      VAR_4, VAR_5);
 if (VAR_10)
  goto errout;

 VAR_10 = FUNC_3(VAR_1, &VAR_2->expect_stats, &VAR_9);
 if (VAR_10) {
  FUNC_4("Key %u: Stats: %s\n", VAR_2->key_id, VAR_9);
  goto errout;
 }

 return 0;

errout:



 FUNC_7(VAR_0, VAR_1, VAR_2, 1);
 return VAR_10;
}
