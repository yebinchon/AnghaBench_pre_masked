
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int profile_times_table_entry ;
struct TYPE_3__ {size_t size; int * old_entries; scalar_t__ old_occupied; scalar_t__ old_start_index; int entries; scalar_t__ max_probe_count; scalar_t__ occupied; } ;
typedef TYPE_1__ profile_times_table ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(profile_times_table *VAR_0, size_t VAR_1)
{
 VAR_0->size = VAR_1;
 VAR_0->occupied = 0;
 VAR_0->max_probe_count = 0;
 VAR_0->entries = FUNC_0(sizeof(profile_times_table_entry) * VAR_1);
 VAR_0->old_start_index = 0;
 VAR_0->old_occupied = 0;
 VAR_0->old_entries = ((void*)0);
}
