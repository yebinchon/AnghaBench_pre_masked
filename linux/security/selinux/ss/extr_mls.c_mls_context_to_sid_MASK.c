
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sidtab {int dummy; } ;
struct TYPE_8__ {int table; } ;
struct TYPE_6__ {int table; } ;
struct policydb {TYPE_3__ p_cats; TYPE_1__ p_levels; int mls_enabled; } ;
struct level_datum {TYPE_2__* level; } ;
struct TYPE_10__ {TYPE_4__* level; } ;
struct context {TYPE_5__ range; } ;
struct cat_datum {int value; } ;
struct TYPE_9__ {int cat; int sens; } ;
struct TYPE_7__ {int sens; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int,int) ;
 void* FUNC_2 (int ,char*) ;
 int FUNC_3 (struct context*,struct context*) ;
 struct context* FUNC_4 (struct sidtab*,scalar_t__) ;
 char* FUNC_5 (char*,char) ;

int FUNC_6(struct policydb *VAR_2,
         char VAR_3,
         char *VAR_4,
         struct context *VAR_5,
         struct sidtab *VAR_6,
         u32 VAR_7)
{
 char *VAR_8, *VAR_9, *VAR_10, *VAR_11;
 struct level_datum *VAR_12;
 struct cat_datum *VAR_13, *VAR_14;
 int VAR_15, VAR_16, VAR_17;
 char *VAR_18[2];

 if (!VAR_2->mls_enabled) {




  if (VAR_3 && VAR_7 == VAR_1)
   return -VAR_0;
  return 0;
 }





 if (!VAR_3) {
  struct context *VAR_19;

  if (VAR_7 == VAR_1)
   return -VAR_0;

  VAR_19 = FUNC_4(VAR_6, VAR_7);
  if (!VAR_19)
   return -VAR_0;

  return FUNC_3(VAR_5, VAR_19);
 }





 VAR_18[0] = VAR_4;
 VAR_18[1] = FUNC_5(VAR_4, '-');
 if (VAR_18[1]) {
  VAR_18[1][0] = '\0';
  VAR_18[1]++;
 }


 for (VAR_15 = 0; VAR_15 < 2; VAR_15++) {

  VAR_8 = VAR_18[VAR_15];
  if (VAR_8 == ((void*)0))
   break;
  VAR_10 = FUNC_5(VAR_8, ':');
  if (VAR_10)
   *(VAR_10++) = '\0';


  VAR_12 = FUNC_2(VAR_2->p_levels.table, VAR_8);
  if (!VAR_12)
   return -VAR_0;
  VAR_5->range.level[VAR_15].sens = VAR_12->level->sens;


  while (VAR_10 != ((void*)0)) {
   VAR_9 = VAR_10;
   VAR_10 = FUNC_5(VAR_10, ',');
   if (VAR_10 != ((void*)0))
    *(VAR_10++) = '\0';


   VAR_11 = FUNC_5(VAR_9, '.');
   if (VAR_11 != ((void*)0)) {

    *VAR_11++ = '\0';
   }

   VAR_13 = FUNC_2(VAR_2->p_cats.table, VAR_9);
   if (!VAR_13)
    return -VAR_0;

   VAR_16 = FUNC_1(&VAR_5->range.level[VAR_15].cat,
          VAR_13->value - 1, 1);
   if (VAR_16)
    return VAR_16;


   if (VAR_11 == ((void*)0))
    continue;

   VAR_14 = FUNC_2(VAR_2->p_cats.table, VAR_11);
   if (!VAR_14)
    return -VAR_0;

   if (VAR_13->value >= VAR_14->value)
    return -VAR_0;

   for (VAR_17 = VAR_13->value; VAR_17 < VAR_14->value; VAR_17++) {
    VAR_16 = FUNC_1(&VAR_5->range.level[VAR_15].cat, VAR_17, 1);
    if (VAR_16)
     return VAR_16;
   }
  }
 }


 if (VAR_18[1] == ((void*)0)) {
  VAR_5->range.level[1].sens = VAR_5->range.level[0].sens;
  VAR_16 = FUNC_0(&VAR_5->range.level[1].cat,
     &VAR_5->range.level[0].cat);
  if (VAR_16)
   return VAR_16;
 }

 return 0;
}
