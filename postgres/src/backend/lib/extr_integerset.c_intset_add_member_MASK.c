
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_4__ {scalar_t__ highest_value; scalar_t__ num_entries; scalar_t__ num_buffered_values; scalar_t__* buffered_values; scalar_t__ iter_active; } ;
typedef TYPE_1__ IntegerSet ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;

void
FUNC_3(IntegerSet *VAR_2, uint64 VAR_3)
{
 if (VAR_2->iter_active)
  FUNC_1(VAR_0, "cannot add new values to integer set while iteration is in progress");

 if (VAR_3 <= VAR_2->highest_value && VAR_2->num_entries > 0)
  FUNC_1(VAR_0, "cannot add value to integer set out of order");

 if (VAR_2->num_buffered_values >= VAR_1)
 {

  FUNC_2(VAR_2);
  FUNC_0(VAR_2->num_buffered_values < VAR_1);
 }


 VAR_2->buffered_values[VAR_2->num_buffered_values] = VAR_3;
 VAR_2->num_buffered_values++;
 VAR_2->num_entries++;
 VAR_2->highest_value = VAR_3;
}
