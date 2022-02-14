
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crush_work {int * work; } ;
struct crush_map {int max_devices; int max_buckets; unsigned int choose_total_tries; int * choose_tries; struct crush_bucket** buckets; } ;
struct crush_choose_arg {int dummy; } ;
struct crush_bucket {int id; int size; int type; } ;
typedef int __u32 ;


 int FUNC_0 (struct crush_bucket const*,int ,int,int) ;
 int FUNC_1 (struct crush_bucket const*,int ,int,int,struct crush_choose_arg const*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct crush_map const*,int const*,int,int,int) ;

__attribute__((used)) static int FUNC_4(const struct crush_map *VAR_0,
          struct crush_work *VAR_1,
          const struct crush_bucket *VAR_2,
          const __u32 *VAR_3, int VAR_4,
          int VAR_5, int VAR_6, int VAR_7,
          int *VAR_8, int VAR_9,
          int VAR_10,
          unsigned int VAR_11,
          unsigned int VAR_12,
          unsigned int VAR_13,
          unsigned int VAR_14,
          int VAR_15,
          unsigned int VAR_16,
          unsigned int VAR_17,
          int *VAR_18,
          int VAR_19,
          const struct crush_choose_arg *VAR_20)
{
 int VAR_21;
 unsigned int VAR_22, VAR_23;
 int VAR_24, VAR_25, VAR_26;
 const struct crush_bucket *VAR_27 = VAR_2;
 int VAR_28;
 int VAR_29;
 int VAR_30 = 0;
 int VAR_31;
 int VAR_32, VAR_33;
 int VAR_34 = VAR_10;

 FUNC_2("CHOOSE%s bucket %d x %d outpos %d numrep %d tries %d recurse_tries %d local_retries %d local_fallback_retries %d parent_r %d stable %d\n",
  VAR_15 ? "_LEAF" : "",
  VAR_2->id, VAR_5, VAR_9, VAR_6,
  VAR_11, VAR_12, VAR_13, VAR_14,
  VAR_19, VAR_17);

 for (VAR_21 = VAR_17 ? 0 : VAR_9; VAR_21 < VAR_6 && VAR_34 > 0 ; VAR_21++) {

  VAR_22 = 0;
  VAR_26 = 0;
  do {
   VAR_24 = 0;
   VAR_27 = VAR_2;


   VAR_23 = 0;
   do {
    VAR_32 = 0;
    VAR_25 = 0;
    VAR_28 = VAR_21 + VAR_19;

    VAR_28 += VAR_22;


    if (VAR_27->size == 0) {
     VAR_33 = 1;
     goto reject;
    }
    if (VAR_14 > 0 &&
        VAR_23 >= (VAR_27->size>>1) &&
        VAR_23 > VAR_14)
     VAR_30 = FUNC_0(
      VAR_27, VAR_1->work[-1-VAR_27->id],
      VAR_5, VAR_28);
    else
     VAR_30 = FUNC_1(
      VAR_27, VAR_1->work[-1-VAR_27->id],
      VAR_5, VAR_28,
      (VAR_20 ?
       &VAR_20[-1-VAR_27->id] : ((void*)0)),
      VAR_9);
    if (VAR_30 >= VAR_0->max_devices) {
     FUNC_2("   bad item %d\n", VAR_30);
     VAR_26 = 1;
     break;
    }


    if (VAR_30 < 0)
     VAR_31 = VAR_0->buckets[-1-VAR_30]->type;
    else
     VAR_31 = 0;
    FUNC_2("  item %d type %d\n", VAR_30, VAR_31);


    if (VAR_31 != VAR_7) {
     if (VAR_30 >= 0 ||
         (-1-VAR_30) >= VAR_0->max_buckets) {
      FUNC_2("   bad item type %d\n", VAR_7);
      VAR_26 = 1;
      break;
     }
     VAR_27 = VAR_0->buckets[-1-VAR_30];
     VAR_25 = 1;
     continue;
    }


    for (VAR_29 = 0; VAR_29 < VAR_9; VAR_29++) {
     if (VAR_8[VAR_29] == VAR_30) {
      VAR_32 = 1;
      break;
     }
    }

    VAR_33 = 0;
    if (!VAR_32 && VAR_15) {
     if (VAR_30 < 0) {
      int VAR_35;
      if (VAR_16)
       VAR_35 = VAR_28 >> (VAR_16-1);
      else
       VAR_35 = 0;
      if (FUNC_4(
           VAR_0,
           VAR_1,
           VAR_0->buckets[-1-VAR_30],
           VAR_3, VAR_4,
           VAR_5, VAR_17 ? 1 : VAR_9+1, 0,
           VAR_18, VAR_9, VAR_34,
           VAR_12, 0,
           VAR_13,
           VAR_14,
           0,
           VAR_16,
           VAR_17,
           ((void*)0),
           VAR_35,
           VAR_20) <= VAR_9)

       VAR_33 = 1;
     } else {

      VAR_18[VAR_9] = VAR_30;
     }
    }

    if (!VAR_33 && !VAR_32) {

     if (VAR_31 == 0)
      VAR_33 = FUNC_3(VAR_0, VAR_3,
        VAR_4,
        VAR_30, VAR_5);
    }

reject:
    if (VAR_33 || VAR_32) {
     VAR_22++;
     VAR_23++;

     if (VAR_32 && VAR_23 <= VAR_13)

      VAR_25 = 1;
     else if (VAR_14 > 0 &&
       VAR_23 <= VAR_27->size + VAR_14)

      VAR_25 = 1;
     else if (VAR_22 < VAR_11)

      VAR_24 = 1;
     else

      VAR_26 = 1;
     FUNC_2("  reject %d  collide %d  "
      "ftotal %u  flocal %u\n",
      VAR_33, VAR_32, VAR_22,
      VAR_23);
    }
   } while (VAR_25);
  } while (VAR_24);

  if (VAR_26) {
   FUNC_2("skip rep\n");
   continue;
  }

  FUNC_2("CHOOSE got %d\n", VAR_30);
  VAR_8[VAR_9] = VAR_30;
  VAR_9++;
  VAR_34--;

  if (VAR_0->choose_tries && VAR_22 <= VAR_0->choose_total_tries)
   VAR_0->choose_tries[VAR_22]++;

 }

 FUNC_2("CHOOSE returns %d\n", VAR_9);
 return VAR_9;
}
