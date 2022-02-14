
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
typedef int profile_times_table_entry ;
struct TYPE_6__ {size_t size; size_t occupied; size_t old_occupied; int * old_entries; int * entries; } ;
typedef TYPE_1__ profile_times_table ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(profile_times_table *VAR_0, uint64_t VAR_1,
    uint64_t VAR_2)
{
 FUNC_2(VAR_0, 0);

 size_t VAR_3 = VAR_0->size;
 size_t VAR_4 = VAR_0->occupied;
 profile_times_table_entry *VAR_5 = VAR_0->entries;

 FUNC_1(VAR_0, (VAR_3 * 2 < 16) ? 16 : (VAR_3 * 2));

 VAR_0->old_occupied = VAR_4;
 VAR_0->old_entries = VAR_5;

 FUNC_0(VAR_0, VAR_1, VAR_2);
}
