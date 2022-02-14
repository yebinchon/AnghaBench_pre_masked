
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_9__ {scalar_t__ size; int name; scalar_t__ BaseAddress; struct TYPE_9__* next; } ;
struct TYPE_8__ {int name; } ;
typedef TYPE_1__ PICE_SYMBOLFILE_HEADER ;
typedef TYPE_2__* PDEBUG_MODULE ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 TYPE_1__** VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;

PICE_SYMBOLFILE_HEADER* FUNC_4(ULONG VAR_4)
{
    ULONG VAR_5,VAR_6,VAR_7;
 PDEBUG_MODULE VAR_8 = VAR_1;

    FUNC_1((0,"FindModuleSymbols(%x)\n",VAR_4));
    if(FUNC_0())
    {
        VAR_7=0;
        VAR_8 = VAR_1;
        do
        {
   FUNC_1((0,"pd: %x\n", VAR_8));
            if(VAR_8->size)
   {
                VAR_5 = (ULONG)VAR_8->BaseAddress;
                VAR_6 = VAR_5 + VAR_8->size;
                FUNC_1((0,"FindModuleSymbols(): %S %x-%x\n",VAR_8->name,VAR_5,VAR_6));
                if(VAR_4>=VAR_5 && VAR_4<VAR_6)
                {
                    FUNC_1((0,"FindModuleSymbols(): address matches %S %x-%x\n",VAR_8->name,VAR_5,VAR_6));
                    for(VAR_7=0;VAR_7<VAR_3;VAR_7++)
                    {
      FUNC_1((0,"%S -", VAR_0[VAR_7]->name ));
                        if(FUNC_2(VAR_8->name,VAR_0[VAR_7]->name) == 0)
      {
       if(FUNC_3(VAR_0[VAR_7]))
                             return VAR_0[VAR_7];
       else
        return ((void*)0);
      }
                    }
                }
            }
        }while((VAR_8 = VAR_8->next) != VAR_2);
    }

    return ((void*)0);
}
