
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef size_t ULONG ;
struct TYPE_4__ {int name; } ;
typedef TYPE_1__ PICE_SYMBOLFILE_HEADER ;
typedef int LPSTR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int ,int,int *,int) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 TYPE_1__** VAR_2 ;
 size_t VAR_3 ;

PICE_SYMBOLFILE_HEADER* FUNC_3(LPSTR VAR_4)
{
    ULONG VAR_5;
 WCHAR VAR_6[VAR_1];

    FUNC_0((0,"FindModuleSymbols()\n"));
 if( !FUNC_1(VAR_0, ((void*)0), VAR_4, -1, VAR_6, VAR_1 ) )
 {
  FUNC_0((0,"Can't convert module name in FindModuleSymbols.\n"));
  return ((void*)0);
 }

    for(VAR_5=0;VAR_5<VAR_3;VAR_5++)
    {
        if(FUNC_2(VAR_6,VAR_2[VAR_5]->name) == 0)
            return VAR_2[VAR_5];
    }

    return ((void*)0);
}
