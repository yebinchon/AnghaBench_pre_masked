
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xt_table_info {unsigned int* hook_entry; unsigned int size; int number; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_6__ {TYPE_1__ user; } ;
struct TYPE_7__ {TYPE_2__ u; } ;
struct xt_standard_target {int verdict; TYPE_3__ target; } ;
struct TYPE_8__ {unsigned int pcnt; } ;
struct arpt_entry {int comefrom; unsigned int next_offset; TYPE_4__ counters; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct arpt_entry*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct arpt_entry*) ;
 int FUNC_3 (unsigned int*,int,int ) ;

__attribute__((used)) static int FUNC_4(const struct xt_table_info *VAR_2,
         unsigned int VAR_3, void *VAR_4,
         unsigned int *VAR_5)
{
 unsigned int VAR_6;




 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  unsigned int VAR_7 = VAR_2->hook_entry[VAR_6];
  struct arpt_entry *VAR_8 = VAR_4 + VAR_7;

  if (!(VAR_3 & (1 << VAR_6)))
   continue;


  VAR_8->counters.pcnt = VAR_7;

  for (;;) {
   const struct xt_standard_target *VAR_9
    = (void *)FUNC_0(VAR_8);
   int VAR_10 = VAR_8->comefrom & (1 << VAR_6);

   if (VAR_8->comefrom & (1 << VAR_0))
    return 0;

   VAR_8->comefrom
    |= ((1 << VAR_6) | (1 << VAR_0));


   if ((FUNC_2(VAR_8) &&
        (FUNC_1(VAR_9->target.u.user.name,
         VAR_1) == 0) &&
        VAR_9->verdict < 0) || VAR_10) {
    unsigned int VAR_11, VAR_12;




    do {
     VAR_8->comefrom ^= (1<<VAR_0);
     VAR_11 = VAR_7;
     VAR_7 = VAR_8->counters.pcnt;
     VAR_8->counters.pcnt = 0;


     if (VAR_7 == VAR_11)
      goto next;

     VAR_8 = VAR_4 + VAR_7;
    } while (VAR_11 == VAR_7 + VAR_8->next_offset);


    VAR_12 = VAR_8->next_offset;
    VAR_8 = VAR_4 + VAR_7 + VAR_12;
    if (VAR_7 + VAR_12 >= VAR_2->size)
     return 0;
    VAR_8->counters.pcnt = VAR_7;
    VAR_7 += VAR_12;
   } else {
    int VAR_13 = VAR_9->verdict;

    if (FUNC_1(VAR_9->target.u.user.name,
        VAR_1) == 0 &&
        VAR_13 >= 0) {

     if (!FUNC_3(VAR_5, VAR_13,
         VAR_2->number))
      return 0;
    } else {

     VAR_13 = VAR_7 + VAR_8->next_offset;
     if (VAR_13 >= VAR_2->size)
      return 0;
    }
    VAR_8 = VAR_4 + VAR_13;
    VAR_8->counters.pcnt = VAR_7;
    VAR_7 = VAR_13;
   }
  }
next: ;
 }
 return 1;
}
