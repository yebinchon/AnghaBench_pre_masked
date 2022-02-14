
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crush_work {int * work; } ;
struct crush_map {int max_devices; int max_buckets; unsigned int choose_total_tries; int * choose_tries; struct crush_bucket** buckets; } ;
struct crush_choose_arg {int dummy; } ;
struct crush_bucket {int id; scalar_t__ alg; int size; int type; } ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct crush_bucket const*,int ,int,int,struct crush_choose_arg const*,int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (struct crush_map const*,int const*,int,int,int) ;

__attribute__((used)) static void FUNC_3(const struct crush_map *VAR_3,
          struct crush_work *VAR_4,
          const struct crush_bucket *VAR_5,
          const __u32 *VAR_6, int VAR_7,
          int VAR_8, int VAR_9, int VAR_10, int VAR_11,
          int *VAR_12, int VAR_13,
          unsigned int VAR_14,
          unsigned int VAR_15,
          int VAR_16,
          int *VAR_17,
          int VAR_18,
          const struct crush_choose_arg *VAR_19)
{
 const struct crush_bucket *VAR_20 = VAR_5;
 int VAR_21 = VAR_13 + VAR_9;
 int VAR_22;
 unsigned int VAR_23;
 int VAR_24;
 int VAR_25;
 int VAR_26 = 0;
 int VAR_27;
 int VAR_28;

 FUNC_1("CHOOSE%s INDEP bucket %d x %d outpos %d numrep %d\n", VAR_16 ? "_LEAF" : "",
  VAR_5->id, VAR_8, VAR_13, VAR_10);


 for (VAR_22 = VAR_13; VAR_22 < VAR_21; VAR_22++) {
  VAR_12[VAR_22] = VAR_2;
  if (VAR_17)
   VAR_17[VAR_22] = VAR_2;
 }

 for (VAR_23 = 0; VAR_9 > 0 && VAR_23 < VAR_14; VAR_23++) {
  for (VAR_22 = VAR_13; VAR_22 < VAR_21; VAR_22++) {
   if (VAR_12[VAR_22] != VAR_2)
    continue;

   VAR_20 = VAR_5;


   for (;;) {
    VAR_24 = VAR_22 + VAR_18;


    if (VAR_20->alg == VAR_0 &&
        VAR_20->size % VAR_10 == 0)

     VAR_24 += (VAR_10+1) * VAR_23;
    else

     VAR_24 += VAR_10 * VAR_23;


    if (VAR_20->size == 0) {
     FUNC_1("   empty bucket\n");
     break;
    }

    VAR_26 = FUNC_0(
     VAR_20, VAR_4->work[-1-VAR_20->id],
     VAR_8, VAR_24,
     (VAR_19 ?
      &VAR_19[-1-VAR_20->id] : ((void*)0)),
     VAR_13);
    if (VAR_26 >= VAR_3->max_devices) {
     FUNC_1("   bad item %d\n", VAR_26);
     VAR_12[VAR_22] = VAR_1;
     if (VAR_17)
      VAR_17[VAR_22] = VAR_1;
     VAR_9--;
     break;
    }


    if (VAR_26 < 0)
     VAR_27 = VAR_3->buckets[-1-VAR_26]->type;
    else
     VAR_27 = 0;
    FUNC_1("  item %d type %d\n", VAR_26, VAR_27);


    if (VAR_27 != VAR_11) {
     if (VAR_26 >= 0 ||
         (-1-VAR_26) >= VAR_3->max_buckets) {
      FUNC_1("   bad item type %d\n", VAR_11);
      VAR_12[VAR_22] = VAR_1;
      if (VAR_17)
       VAR_17[VAR_22] =
        VAR_1;
      VAR_9--;
      break;
     }
     VAR_20 = VAR_3->buckets[-1-VAR_26];
     continue;
    }


    VAR_28 = 0;
    for (VAR_25 = VAR_13; VAR_25 < VAR_21; VAR_25++) {
     if (VAR_12[VAR_25] == VAR_26) {
      VAR_28 = 1;
      break;
     }
    }
    if (VAR_28)
     break;

    if (VAR_16) {
     if (VAR_26 < 0) {
      FUNC_3(
       VAR_3,
       VAR_4,
       VAR_3->buckets[-1-VAR_26],
       VAR_6, VAR_7,
       VAR_8, 1, VAR_10, 0,
       VAR_17, VAR_22,
       VAR_15, 0,
       0, ((void*)0), VAR_24,
       VAR_19);
      if (VAR_17[VAR_22] == VAR_1) {

       break;
      }
     } else {

      VAR_17[VAR_22] = VAR_26;
     }
    }


    if (VAR_27 == 0 &&
        FUNC_2(VAR_3, VAR_6, VAR_7, VAR_26, VAR_8))
     break;


    VAR_12[VAR_22] = VAR_26;
    VAR_9--;
    break;
   }
  }
 }
 for (VAR_22 = VAR_13; VAR_22 < VAR_21; VAR_22++) {
  if (VAR_12[VAR_22] == VAR_2) {
   VAR_12[VAR_22] = VAR_1;
  }
  if (VAR_17 && VAR_17[VAR_22] == VAR_2) {
   VAR_17[VAR_22] = VAR_1;
  }
 }

 if (VAR_3->choose_tries && VAR_23 <= VAR_3->choose_total_tries)
  VAR_3->choose_tries[VAR_23]++;
}
