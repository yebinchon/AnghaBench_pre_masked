
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_5__ {scalar_t__ size; int name; scalar_t__ BaseAddress; struct TYPE_5__* next; } ;
typedef TYPE_1__* PDEBUG_MODULE ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;

PDEBUG_MODULE FUNC_2(ULONG VAR_2)
{
    PDEBUG_MODULE VAR_3;
    ULONG VAR_4,VAR_5;

    FUNC_1((0,"FindModuleFromAddress()\n"));
    if(FUNC_0())
    {
        VAR_3 = VAR_0;
        do
        {
   if(VAR_3->size)
   {
                VAR_4 = (ULONG)VAR_3->BaseAddress;
                VAR_5 = VAR_4 + VAR_3->size;
                FUNC_1((0,"FindModuleFromAddress(): %S %x-%x\n",VAR_3->name,VAR_4,VAR_5));
                if(VAR_2>=VAR_4 && VAR_2<VAR_5)
                {
                    FUNC_1((0,"FindModuleFromAddress(): found %S\n",VAR_3->name));
                    return VAR_3;
                }
            }
        }while((VAR_3 = VAR_3->next)!=VAR_1);
    }

    return ((void*)0);
}
