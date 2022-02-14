
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int count; int time_delta; } ;
struct TYPE_8__ {TYPE_1__ entry; int probes; } ;
typedef TYPE_2__ profile_times_table_entry ;
struct TYPE_9__ {size_t old_start_index; scalar_t__ old_occupied; TYPE_2__* old_entries; } ;
typedef TYPE_3__ profile_times_table ;


 int FUNC_0 (TYPE_3__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(profile_times_table *VAR_0, bool VAR_1)
{
 if (!VAR_0->old_entries)
  return;

 if (!VAR_0->old_occupied) {
  FUNC_1(VAR_0->old_entries);
  VAR_0->old_entries = ((void*)0);
  return;
 }

 for (size_t VAR_2 = 0; !VAR_1 || VAR_2 < 8; VAR_2++, VAR_0->old_start_index++) {
  if (!VAR_0->old_occupied)
   return;

  profile_times_table_entry *VAR_3 =
   &VAR_0->old_entries[VAR_0->old_start_index];
  if (!VAR_3->probes)
   continue;

  FUNC_0(VAR_0, VAR_3->entry.time_delta,
      VAR_3->entry.count);
  VAR_0->old_occupied -= 1;
 }
}
