
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct test_obj_val {int id; } ;
struct TYPE_2__ {int id; } ;
struct test_obj_rhl {TYPE_1__ value; } ;
struct rhashtable_compare_arg {struct test_obj_val* key; } ;



__attribute__((used)) static int FUNC_0(struct rhashtable_compare_arg *VAR_0, const void *VAR_1)
{
 const struct test_obj_rhl *VAR_2 = VAR_1;
 const struct test_obj_val *VAR_3 = VAR_0->key;

 return VAR_2->value.id - VAR_3->id;
}
