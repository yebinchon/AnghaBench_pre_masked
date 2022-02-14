
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct minstrel_ht_sta {TYPE_1__* groups; int * supported; } ;
struct TYPE_4__ {scalar_t__ streams; } ;
struct TYPE_3__ {int* max_group_tp_rate; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;

__attribute__((used)) static void
FUNC_0(struct minstrel_ht_sta *VAR_2, u16 *VAR_3, bool VAR_4)
{
 int VAR_5, VAR_6;

 VAR_6 = VAR_5 = *VAR_3 / VAR_0;
 while (VAR_5 > 0) {
  VAR_5--;

  if (!VAR_2->supported[VAR_5])
   continue;

  if (VAR_1[VAR_5].streams >
      VAR_1[VAR_6].streams)
   continue;

  if (VAR_4)
   *VAR_3 = VAR_2->groups[VAR_5].max_group_tp_rate[0];
  else
   *VAR_3 = VAR_2->groups[VAR_5].max_group_tp_rate[1];
  break;
 }
}
