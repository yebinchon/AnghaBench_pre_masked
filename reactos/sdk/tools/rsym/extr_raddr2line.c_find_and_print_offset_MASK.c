
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t Address; size_t FileOffset; size_t FunctionOffset; scalar_t__ SourceLine; } ;
struct TYPE_3__ {int SymbolsOffset; int StringsOffset; int SymbolsLength; } ;
typedef int ROSSYM_ENTRY ;
typedef TYPE_1__* PSYMBOLFILE_HEADER ;
typedef TYPE_2__* PROSSYM_ENTRY ;


 int FUNC_0 (char*,char*,unsigned int,char*) ;

int
FUNC_1 (
 void* VAR_0,
 size_t VAR_1 )
{
 PSYMBOLFILE_HEADER VAR_2 = (PSYMBOLFILE_HEADER)VAR_0;
 PROSSYM_ENTRY VAR_3 = (PROSSYM_ENTRY)((char*)VAR_0 + VAR_2->SymbolsOffset);
 char* VAR_4 = (char*)VAR_0 + VAR_2->StringsOffset;
 size_t VAR_5 = VAR_2->SymbolsLength / sizeof(ROSSYM_ENTRY);
 size_t VAR_6;



 for ( VAR_6 = 0; VAR_6 < VAR_5; VAR_6++ )
 {
  if ( VAR_3[VAR_6].Address > VAR_1 )
  {
   if ( !VAR_6-- )
    return 1;
   else
   {
    PROSSYM_ENTRY VAR_7 = &VAR_3[VAR_6];
    FUNC_0 ( "%s:%u (%s)\n",
     &VAR_4[VAR_7->FileOffset],
     (unsigned int)VAR_7->SourceLine,
     &VAR_4[VAR_7->FunctionOffset] );
    return 0;
   }
  }
 }
 return 1;
}
