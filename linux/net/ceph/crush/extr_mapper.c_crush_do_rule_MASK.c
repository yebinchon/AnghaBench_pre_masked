
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crush_work {int dummy; } ;
struct crush_rule_step {int op; int arg1; int arg2; } ;
struct crush_rule {scalar_t__ len; struct crush_rule_step* steps; } ;
struct crush_map {int working_size; int choose_total_tries; int choose_local_tries; int choose_local_fallback_tries; int chooseleaf_vary_r; int chooseleaf_stable; scalar_t__ max_rules; int max_devices; int max_buckets; int * buckets; int chooseleaf_descend_once; struct crush_rule** rules; } ;
struct crush_choose_arg {int dummy; } ;
typedef scalar_t__ __u32 ;
 int FUNC_0 (struct crush_map const*,struct crush_work*,int ,scalar_t__ const*,int,int,int,int ,int*,int,int,int,int,int,int,int,int,int,int*,int ,struct crush_choose_arg const*) ;
 int FUNC_1 (struct crush_map const*,struct crush_work*,int ,scalar_t__ const*,int,int,int,int,int ,int*,int,int,int,int,int*,int ,struct crush_choose_arg const*) ;
 int FUNC_2 (char*,int const,...) ;
 int FUNC_3 (int*,int*,int) ;

int FUNC_4(const struct crush_map *VAR_0,
    int VAR_1, int VAR_2, int *VAR_3, int VAR_4,
    const __u32 *VAR_5, int VAR_6,
    void *VAR_7, const struct crush_choose_arg *VAR_8)
{
 int VAR_9;
 struct crush_work *VAR_10 = VAR_7;
 int *VAR_11 = VAR_7 + VAR_0->working_size;
 int *VAR_12 = VAR_11 + VAR_4;
 int *VAR_13 = VAR_12 + VAR_4;
 int *VAR_14 = VAR_11;
 int *VAR_15 = VAR_12;
 int VAR_16;
 int VAR_17 = 0;
 int VAR_18;
 int *VAR_19;
 const struct crush_rule *VAR_20;
 __u32 VAR_21;
 int VAR_22, VAR_23;
 int VAR_24;
 int VAR_25;




 int VAR_26 = VAR_0->choose_total_tries + 1;
 int VAR_27 = 0;




 int VAR_28 = VAR_0->choose_local_tries;
 int VAR_29 = VAR_0->choose_local_fallback_tries;

 int VAR_30 = VAR_0->chooseleaf_vary_r;
 int VAR_31 = VAR_0->chooseleaf_stable;

 if ((__u32)VAR_1 >= VAR_0->max_rules) {
  FUNC_2(" bad ruleno %d\n", VAR_1);
  return 0;
 }

 VAR_20 = VAR_0->rules[VAR_1];
 VAR_9 = 0;

 for (VAR_21 = 0; VAR_21 < VAR_20->len; VAR_21++) {
  int VAR_32 = 0;
  const struct crush_rule_step *VAR_33 = &VAR_20->steps[VAR_21];

  switch (VAR_33->op) {
  case 128:
   if ((VAR_33->arg1 >= 0 &&
        VAR_33->arg1 < VAR_0->max_devices) ||
       (-1-VAR_33->arg1 >= 0 &&
        -1-VAR_33->arg1 < VAR_0->max_buckets &&
        VAR_0->buckets[-1-VAR_33->arg1])) {
    VAR_14[0] = VAR_33->arg1;
    VAR_17 = 1;
   } else {
    FUNC_2(" bad take value %d\n", VAR_33->arg1);
   }
   break;

  case 129:
   if (VAR_33->arg1 > 0)
    VAR_26 = VAR_33->arg1;
   break;

  case 133:
   if (VAR_33->arg1 > 0)
    VAR_27 = VAR_33->arg1;
   break;

  case 130:
   if (VAR_33->arg1 >= 0)
    VAR_28 = VAR_33->arg1;
   break;

  case 131:
   if (VAR_33->arg1 >= 0)
    VAR_29 = VAR_33->arg1;
   break;

  case 132:
   if (VAR_33->arg1 >= 0)
    VAR_30 = VAR_33->arg1;
   break;

  case 134:
   if (VAR_33->arg1 >= 0)
    VAR_31 = VAR_33->arg1;
   break;

  case 139:
  case 137:
   VAR_32 = 1;

  case 138:
  case 136:
   if (VAR_17 == 0)
    break;

   VAR_16 =
    VAR_33->op ==
     139 ||
    VAR_33->op ==
    138;


   VAR_18 = 0;

   for (VAR_22 = 0; VAR_22 < VAR_17; VAR_22++) {
    int VAR_34;
    VAR_24 = VAR_33->arg1;
    if (VAR_24 <= 0) {
     VAR_24 += VAR_4;
     if (VAR_24 <= 0)
      continue;
    }
    VAR_23 = 0;

    VAR_34 = -1 - VAR_14[VAR_22];
    if (VAR_34 < 0 || VAR_34 >= VAR_0->max_buckets) {

     FUNC_2("  bad w[i] %d\n", VAR_14[VAR_22]);
     continue;
    }
    if (VAR_32) {
     int VAR_35;
     if (VAR_27)
      VAR_35 =
       VAR_27;
     else if (VAR_0->chooseleaf_descend_once)
      VAR_35 = 1;
     else
      VAR_35 = VAR_26;
     VAR_18 += FUNC_0(
      VAR_0,
      VAR_10,
      VAR_0->buckets[VAR_34],
      VAR_5, VAR_6,
      VAR_2, VAR_24,
      VAR_33->arg2,
      VAR_15+VAR_18, VAR_23,
      VAR_4-VAR_18,
      VAR_26,
      VAR_35,
      VAR_28,
      VAR_29,
      VAR_16,
      VAR_30,
      VAR_31,
      VAR_13+VAR_18,
      0,
      VAR_8);
    } else {
     VAR_25 = ((VAR_24 < (VAR_4-VAR_18)) ?
          VAR_24 : (VAR_4-VAR_18));
     FUNC_1(
      VAR_0,
      VAR_10,
      VAR_0->buckets[VAR_34],
      VAR_5, VAR_6,
      VAR_2, VAR_25, VAR_24,
      VAR_33->arg2,
      VAR_15+VAR_18, VAR_23,
      VAR_26,
      VAR_27 ?
         VAR_27 : 1,
      VAR_16,
      VAR_13+VAR_18,
      0,
      VAR_8);
     VAR_18 += VAR_25;
    }
   }

   if (VAR_16)

    FUNC_3(VAR_15, VAR_13, VAR_18*sizeof(*VAR_15));


   VAR_19 = VAR_15;
   VAR_15 = VAR_14;
   VAR_14 = VAR_19;
   VAR_17 = VAR_18;
   break;


  case 135:
   for (VAR_22 = 0; VAR_22 < VAR_17 && VAR_9 < VAR_4; VAR_22++) {
    VAR_3[VAR_9] = VAR_14[VAR_22];
    VAR_9++;
   }
   VAR_17 = 0;
   break;

  default:
   FUNC_2(" unknown op %d at step %d\n",
    VAR_33->op, VAR_21);
   break;
  }
 }

 return VAR_9;
}
