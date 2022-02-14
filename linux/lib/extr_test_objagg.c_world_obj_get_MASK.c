
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct world {int * key_refs; struct objagg_obj** objagg_objs; } ;
struct tokey {unsigned int id; } ;
struct objagg_obj {int dummy; } ;
struct objagg {int dummy; } ;


 int VAR_0 ;
 struct objagg_obj* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct objagg_obj*) ;
 size_t FUNC_2 (unsigned int) ;
 struct objagg_obj* FUNC_3 (struct objagg*,struct tokey*) ;
 int FUNC_4 (struct objagg*,struct objagg_obj*) ;
 int FUNC_5 (char*,unsigned int) ;

__attribute__((used)) static struct objagg_obj *FUNC_6(struct world *VAR_1,
     struct objagg *VAR_2,
     unsigned int VAR_3)
{
 struct objagg_obj *VAR_4;
 struct tokey VAR_5;
 int VAR_6;

 VAR_5.id = VAR_3;
 VAR_4 = FUNC_3(VAR_2, &VAR_5);
 if (FUNC_1(VAR_4)) {
  FUNC_5("Key %u: Failed to get object.\n", VAR_3);
  return VAR_4;
 }
 if (!VAR_1->key_refs[FUNC_2(VAR_3)]) {
  VAR_1->objagg_objs[FUNC_2(VAR_3)] = VAR_4;
 } else if (VAR_1->objagg_objs[FUNC_2(VAR_3)] != VAR_4) {
  FUNC_5("Key %u: God another object for the same key.\n",
         VAR_3);
  VAR_6 = -VAR_0;
  goto err_key_id_check;
 }
 VAR_1->key_refs[FUNC_2(VAR_3)]++;
 return VAR_4;

err_key_id_check:
 FUNC_4(VAR_2, VAR_4);
 return FUNC_0(VAR_6);
}
