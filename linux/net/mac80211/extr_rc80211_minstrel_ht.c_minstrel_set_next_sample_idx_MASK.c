
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct minstrel_mcs_group_data {scalar_t__ index; size_t column; } ;
struct minstrel_ht_sta {size_t sample_group; int * supported; struct minstrel_mcs_group_data* groups; } ;


 size_t FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_1(struct minstrel_ht_sta *VAR_3)
{
 struct minstrel_mcs_group_data *VAR_4;

 for (;;) {
  VAR_3->sample_group++;
  VAR_3->sample_group %= FUNC_0(VAR_1);
  VAR_4 = &VAR_3->groups[VAR_3->sample_group];

  if (!VAR_3->supported[VAR_3->sample_group])
   continue;

  if (++VAR_4->index >= VAR_0) {
   VAR_4->index = 0;
   if (++VAR_4->column >= FUNC_0(VAR_2))
    VAR_4->column = 0;
  }
  break;
 }
}
