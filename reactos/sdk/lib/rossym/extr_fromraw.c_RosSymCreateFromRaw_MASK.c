
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_6__ {int SymbolsOffset; scalar_t__ StringsOffset; scalar_t__ SymbolsLength; int StringsLength; } ;
struct TYPE_5__ {char* Symbols; int SymbolsCount; char* Strings; int StringsLength; } ;
typedef int ROSSYM_INFO ;
typedef int ROSSYM_HEADER ;
typedef int ROSSYM_ENTRY ;
typedef scalar_t__ PVOID ;
typedef TYPE_1__* PROSSYM_INFO ;
typedef TYPE_2__* PROSSYM_HEADER ;
typedef char* PROSSYM_ENTRY ;
typedef char* PCHAR ;
typedef int BOOLEAN ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (char*,char*,int) ;

BOOLEAN
FUNC_3(PVOID VAR_2, ULONG_PTR VAR_3, PROSSYM_INFO *VAR_4)
{
  PROSSYM_HEADER VAR_5;

  VAR_5 = (PROSSYM_HEADER) VAR_2;
  if (VAR_5->SymbolsOffset < sizeof(ROSSYM_HEADER)
      || VAR_5->StringsOffset < VAR_5->SymbolsOffset + VAR_5->SymbolsLength
      || VAR_3 < VAR_5->StringsOffset + VAR_5->StringsLength
      || 0 != (VAR_5->SymbolsLength % sizeof(ROSSYM_ENTRY)))
    {
      FUNC_0("Invalid ROSSYM_HEADER\n");
      return VAR_0;
    }


  *VAR_4 = FUNC_1(sizeof(ROSSYM_INFO) + VAR_5->SymbolsLength
                               + VAR_5->StringsLength + 1);
  if (((void*)0) == *VAR_4)
    {
      FUNC_0("Failed to allocate memory for rossym\n");
      return VAR_0;
    }
  (*VAR_4)->Symbols = (PROSSYM_ENTRY)((char *) *VAR_4 + sizeof(ROSSYM_INFO));
  (*VAR_4)->SymbolsCount = VAR_5->SymbolsLength / sizeof(ROSSYM_ENTRY);
  (*VAR_4)->Strings = (PCHAR) *VAR_4 + sizeof(ROSSYM_INFO) + VAR_5->SymbolsLength;
  (*VAR_4)->StringsLength = VAR_5->StringsLength;
  FUNC_2((*VAR_4)->Symbols, (char *) VAR_5 + VAR_5->SymbolsOffset,
         VAR_5->SymbolsLength);
  FUNC_2((*VAR_4)->Strings, (char *) VAR_5 + VAR_5->StringsOffset,
         VAR_5->StringsLength);

  (*VAR_4)->Strings[(*VAR_4)->StringsLength] = '\0';

  return VAR_1;
}
