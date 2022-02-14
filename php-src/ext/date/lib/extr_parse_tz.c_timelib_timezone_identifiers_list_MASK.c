
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int timelib_tzdb_index_entry ;
struct TYPE_3__ {int index_size; int const* index; } ;
typedef TYPE_1__ timelib_tzdb ;



const timelib_tzdb_index_entry *FUNC_0(const timelib_tzdb *VAR_0, int *VAR_1)
{
 *VAR_1 = VAR_0->index_size;
 return VAR_0->index;
}
