
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int link; int id; int arg; int function; } ;
typedef int SyscacheCallbackFunction ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int VAR_3 ;
 int* VAR_4 ;
 TYPE_1__* VAR_5 ;

void
FUNC_1(int VAR_6,
         SyscacheCallbackFunction VAR_7,
         Datum VAR_8)
{
 if (VAR_6 < 0 || VAR_6 >= VAR_2)
  FUNC_0(VAR_0, "invalid cache ID: %d", VAR_6);
 if (VAR_3 >= VAR_1)
  FUNC_0(VAR_0, "out of syscache_callback_list slots");

 if (VAR_4[VAR_6] == 0)
 {

  VAR_4[VAR_6] = VAR_3 + 1;
 }
 else
 {

  int VAR_9 = VAR_4[VAR_6] - 1;

  while (VAR_5[VAR_9].link > 0)
   VAR_9 = VAR_5[VAR_9].link - 1;
  VAR_5[VAR_9].link = VAR_3 + 1;
 }

 VAR_5[VAR_3].id = VAR_6;
 VAR_5[VAR_3].link = 0;
 VAR_5[VAR_3].function = VAR_7;
 VAR_5[VAR_3].arg = VAR_8;

 ++VAR_3;
}
