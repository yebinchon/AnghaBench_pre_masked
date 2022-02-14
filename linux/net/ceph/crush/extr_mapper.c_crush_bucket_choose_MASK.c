
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crush_work_bucket {int dummy; } ;
struct crush_choose_arg {int dummy; } ;
struct crush_bucket_uniform {int dummy; } ;
struct crush_bucket_tree {int dummy; } ;
struct crush_bucket_straw2 {int dummy; } ;
struct crush_bucket_straw {int dummy; } ;
struct crush_bucket_list {int dummy; } ;
struct crush_bucket {scalar_t__ size; int alg; int* items; int id; } ;


 int FUNC_0 (int) ;





 int FUNC_1 (struct crush_bucket_list const*,int,int) ;
 int FUNC_2 (struct crush_bucket_straw2 const*,int,int,struct crush_choose_arg const*,int) ;
 int FUNC_3 (struct crush_bucket_straw const*,int,int) ;
 int FUNC_4 (struct crush_bucket_tree const*,int,int) ;
 int FUNC_5 (struct crush_bucket_uniform const*,struct crush_work_bucket*,int,int) ;
 int FUNC_6 (char*,int ,int,...) ;

__attribute__((used)) static int FUNC_7(const struct crush_bucket *VAR_0,
          struct crush_work_bucket *VAR_1,
          int VAR_2, int VAR_3,
          const struct crush_choose_arg *VAR_4,
          int VAR_5)
{
 FUNC_6(" crush_bucket_choose %d x=%d r=%d\n", VAR_0->id, VAR_2, VAR_3);
 FUNC_0(VAR_0->size == 0);
 switch (VAR_0->alg) {
 case 128:
  return FUNC_5(
   (const struct crush_bucket_uniform *)VAR_0,
   VAR_1, VAR_2, VAR_3);
 case 132:
  return FUNC_1((const struct crush_bucket_list *)VAR_0,
       VAR_2, VAR_3);
 case 129:
  return FUNC_4((const struct crush_bucket_tree *)VAR_0,
       VAR_2, VAR_3);
 case 131:
  return FUNC_3(
   (const struct crush_bucket_straw *)VAR_0,
   VAR_2, VAR_3);
 case 130:
  return FUNC_2(
   (const struct crush_bucket_straw2 *)VAR_0,
   VAR_2, VAR_3, VAR_4, VAR_5);
 default:
  FUNC_6("unknown bucket %d alg %d\n", VAR_0->id, VAR_0->alg);
  return VAR_0->items[0];
 }
}
