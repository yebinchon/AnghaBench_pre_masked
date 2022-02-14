
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_5__ {int name; scalar_t__ size; struct TYPE_5__* next; } ;
typedef TYPE_1__* PDEBUG_MODULE ;
typedef int LPSTR ;


 scalar_t__ FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,int ,int,int *,int) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;

PDEBUG_MODULE FUNC_4(LPSTR VAR_4)
{
    PDEBUG_MODULE VAR_5;
 WCHAR VAR_6[VAR_1];

    FUNC_1((0,"FindModuleFromAddress()\n"));
 if( !FUNC_2(VAR_0, ((void*)0), VAR_4, -1, VAR_6, VAR_1 ) )
 {
  FUNC_1((0,"Can't convert module name.\n"));
  return ((void*)0);
 }

    if(FUNC_0())
    {
        VAR_5 = VAR_2;
        do
        {
   if(VAR_5->size)
   {
    if(FUNC_3(VAR_6,VAR_5->name) == 0)
                {
                    FUNC_1((0,"FindModuleByName(): found %S\n",VAR_5->name));
                    return VAR_5;
                }
            }
        }while((VAR_5 = VAR_5->next) != VAR_3);
    }

    return ((void*)0);
}
