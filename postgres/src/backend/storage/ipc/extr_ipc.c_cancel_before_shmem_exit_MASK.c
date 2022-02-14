
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ pg_on_exit_callback ;
struct TYPE_2__ {scalar_t__ function; scalar_t__ arg; } ;
typedef scalar_t__ Datum ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void
FUNC_0(pg_on_exit_callback VAR_2, Datum VAR_3)
{
 if (VAR_0 > 0 &&
  VAR_1[VAR_0 - 1].function
  == VAR_2 &&
  VAR_1[VAR_0 - 1].arg == VAR_3)
  --VAR_0;
}
