
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int numtriggers; TYPE_2__* triggers; } ;
typedef TYPE_1__ TriggerDesc ;
struct TYPE_5__ {char const* tgname; int * tgnewtable; int * tgoldtable; } ;
typedef TYPE_2__ Trigger ;



const char *
FUNC_0(TriggerDesc *VAR_0)
{
 if (VAR_0 != ((void*)0))
 {
  int VAR_1;

  for (VAR_1 = 0; VAR_1 < VAR_0->numtriggers; ++VAR_1)
  {
   Trigger *VAR_2 = &VAR_0->triggers[VAR_1];

   if (VAR_2->tgoldtable != ((void*)0) || VAR_2->tgnewtable != ((void*)0))
    return VAR_2->tgname;
  }
 }

 return ((void*)0);
}
