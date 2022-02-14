
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int arg; int function; } ;
typedef int RelcacheCallbackFunction ;
typedef int Datum ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ,char*) ;
 size_t VAR_2 ;
 TYPE_1__* VAR_3 ;

void
FUNC_1(RelcacheCallbackFunction VAR_4,
         Datum VAR_5)
{
 if (VAR_2 >= VAR_1)
  FUNC_0(VAR_0, "out of relcache_callback_list slots");

 VAR_3[VAR_2].function = VAR_4;
 VAR_3[VAR_2].arg = VAR_5;

 ++VAR_2;
}
