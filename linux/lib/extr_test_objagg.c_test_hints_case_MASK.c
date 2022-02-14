
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct world {int dummy; } ;
struct objagg_obj {int dummy; } ;
typedef struct objagg_obj objagg_hints ;
typedef struct objagg_obj objagg ;
struct hints_case {int key_ids_count; int * key_ids; int expect_stats_hints; int expect_stats; } ;


 scalar_t__ FUNC_0 (struct objagg_obj*) ;
 int VAR_0 ;
 int FUNC_1 (struct objagg_obj*) ;
 int FUNC_2 (struct objagg_obj*,int *,char const**) ;
 int FUNC_3 (struct objagg_obj*,int *,char const**) ;
 int VAR_1 ;
 struct objagg_obj* FUNC_4 (int *,struct objagg_obj*,struct world*) ;
 int FUNC_5 (struct objagg_obj*) ;
 struct objagg_obj* FUNC_6 (struct objagg_obj*,int ) ;
 int FUNC_7 (struct objagg_obj*) ;
 int FUNC_8 (struct objagg_obj*) ;
 int FUNC_9 (struct objagg_obj*) ;
 int FUNC_10 (char*,char const*) ;
 struct objagg_obj* FUNC_11 (struct world*,struct objagg_obj*,int ) ;
 int FUNC_12 (struct world*,struct objagg_obj*,int ) ;

__attribute__((used)) static int FUNC_13(const struct hints_case *VAR_2)
{
 struct objagg_obj *VAR_3;
 struct objagg_hints *VAR_4;
 struct world VAR_5 = {};
 struct world VAR_6 = {};
 struct objagg *VAR_7;
 struct objagg *VAR_8;
 const char *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_8 = FUNC_4(&VAR_1, ((void*)0), &VAR_6);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 for (VAR_10 = 0; VAR_10 < VAR_2->key_ids_count; VAR_10++) {
  VAR_3 = FUNC_11(&VAR_6, VAR_8,
        VAR_2->key_ids[VAR_10]);
  if (FUNC_0(VAR_3)) {
   VAR_11 = FUNC_1(VAR_3);
   goto err_world_obj_get;
  }
 }

 FUNC_9(VAR_8);
 VAR_11 = FUNC_3(VAR_8, &VAR_2->expect_stats, &VAR_9);
 if (VAR_11) {
  FUNC_10("Stats: %s\n", VAR_9);
  goto err_check_expect_stats;
 }

 VAR_4 = FUNC_6(VAR_8, VAR_0);
 if (FUNC_0(VAR_4)) {
  VAR_11 = FUNC_1(VAR_4);
  goto err_hints_get;
 }

 FUNC_8(VAR_4);
 VAR_11 = FUNC_2(VAR_4, &VAR_2->expect_stats_hints,
           &VAR_9);
 if (VAR_11) {
  FUNC_10("Hints stats: %s\n", VAR_9);
  goto err_check_expect_hints_stats;
 }

 VAR_7 = FUNC_4(&VAR_1, VAR_4, &VAR_5);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 for (VAR_10 = 0; VAR_10 < VAR_2->key_ids_count; VAR_10++) {
  VAR_3 = FUNC_11(&VAR_5, VAR_7,
        VAR_2->key_ids[VAR_10]);
  if (FUNC_0(VAR_3)) {
   VAR_11 = FUNC_1(VAR_3);
   goto err_world2_obj_get;
  }
 }

 FUNC_9(VAR_7);
 VAR_11 = FUNC_3(VAR_7, &VAR_2->expect_stats_hints,
     &VAR_9);
 if (VAR_11) {
  FUNC_10("Stats2: %s\n", VAR_9);
  goto err_check_expect_stats2;
 }

 VAR_11 = 0;

err_check_expect_stats2:
err_world2_obj_get:
 for (VAR_10--; VAR_10 >= 0; VAR_10--)
  FUNC_12(&VAR_5, VAR_8, VAR_2->key_ids[VAR_10]);
 FUNC_7(VAR_4);
 FUNC_5(VAR_7);
 VAR_10 = VAR_2->key_ids_count;
err_check_expect_hints_stats:
err_hints_get:
err_check_expect_stats:
err_world_obj_get:
 for (VAR_10--; VAR_10 >= 0; VAR_10--)
  FUNC_12(&VAR_6, VAR_8, VAR_2->key_ids[VAR_10]);

 FUNC_5(VAR_8);
 return VAR_11;
}
