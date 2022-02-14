
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {int SymbolsOffset; int SymbolsLength; int StringsOffset; int StringsLength; } ;
struct TYPE_4__ {int SymbolsCount; int StringsLength; int Strings; int Symbols; } ;
typedef int ROSSYM_HEADER ;
typedef int ROSSYM_ENTRY ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__* PROSSYM_INFO ;
typedef TYPE_2__* PROSSYM_HEADER ;


 int FUNC_0 (char*,int ,int) ;

VOID
FUNC_1(PROSSYM_INFO VAR_0, PVOID VAR_1)
{
  PROSSYM_HEADER VAR_2;

  VAR_2 = (PROSSYM_HEADER) VAR_1;
  VAR_2->SymbolsOffset = sizeof(ROSSYM_HEADER);
  VAR_2->SymbolsLength = VAR_0->SymbolsCount * sizeof(ROSSYM_ENTRY);
  VAR_2->StringsOffset = VAR_2->SymbolsOffset + VAR_2->SymbolsLength;
  VAR_2->StringsLength = VAR_0->StringsLength;

  FUNC_0((char *) VAR_1 + VAR_2->SymbolsOffset, VAR_0->Symbols,
         VAR_2->SymbolsLength);
  FUNC_0((char *) VAR_1 + VAR_2->StringsOffset, VAR_0->Strings,
         VAR_2->StringsLength);
}
