
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; scalar_t__ size; struct TYPE_5__* next; } ;
typedef TYPE_1__* PDEBUG_MODULE ;
typedef int LPSTR ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ,char*) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;

PDEBUG_MODULE FUNC_6(LPSTR VAR_3)
{
    PDEBUG_MODULE VAR_4;

 FUNC_3();
 FUNC_2((0,"IsModuleLoaded(%s)\n",VAR_3));

    if(FUNC_0())
    {
        VAR_4 = VAR_1;
        do
        {
   char VAR_5[VAR_0];
            FUNC_2((0,"module (%x) %S\n",VAR_4->size,VAR_4->name));
   FUNC_1(VAR_5,VAR_4->name);
            if(VAR_4->size && FUNC_5(VAR_3,VAR_5) == 0)
            {
                FUNC_2((0,"module %S is loaded!\n",VAR_4->name));
    FUNC_4();
    return VAR_4;
            }
        }while((VAR_4 = VAR_4->next)!=VAR_2);
    }
 FUNC_4();
    return ((void*)0);
}
