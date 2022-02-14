
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ULONG_PTR ;
typedef int ULONG ;
struct TYPE_7__ {scalar_t__ FileOffset; scalar_t__ FunctionOffset; int SourceLine; } ;
struct TYPE_6__ {scalar_t__ SymbolsCount; scalar_t__ StringsLength; int * Strings; int * Symbols; } ;
typedef TYPE_1__* PROSSYM_INFO ;
typedef TYPE_2__* PROSSYM_ENTRY ;
typedef char* PCSTR ;
typedef char* PCHAR ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_3 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_4 (char*,char*) ;

BOOLEAN
FUNC_5(PROSSYM_INFO VAR_2,
                            ULONG_PTR VAR_3,
                            ULONG *VAR_4,
                            char *VAR_5,
                            char *VAR_6)
{
  PROSSYM_ENTRY VAR_7;

  FUNC_1("RelativeAddress = 0x%08x\n", VAR_3);

  if (VAR_2->Symbols == ((void*)0) || VAR_2->SymbolsCount == 0 ||
      VAR_2->Strings == ((void*)0) || VAR_2->StringsLength == 0)
    {
      FUNC_2("Uninitialized RosSymInfo\n");
      return VAR_0;
    }

  FUNC_0(VAR_4 || VAR_5 || VAR_6);


  VAR_7 = FUNC_3(VAR_2, VAR_3);

  if (((void*)0) == VAR_7)
    {
      FUNC_1("None of the requested information was found!\n");
      return VAR_0;
    }

  if (VAR_4 != ((void*)0))
    {
      *VAR_4 = VAR_7->SourceLine;
    }
  if (VAR_5 != ((void*)0))
    {
      PCSTR VAR_8 = "";
      if (VAR_7->FileOffset != 0)
        {
          VAR_8 = (PCHAR) VAR_2->Strings + VAR_7->FileOffset;
        }
      FUNC_4(VAR_5, VAR_8);
    }
  if (VAR_6 != ((void*)0))
    {
      PCSTR VAR_9 = "";
      if (VAR_7->FunctionOffset != 0)
        {
          VAR_9 = (PCHAR) VAR_2->Strings + VAR_7->FunctionOffset;
        }
      FUNC_4(VAR_6, VAR_9);
    }

  return VAR_1;
}
