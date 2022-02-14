
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_3__ {int ulSizeOfStabsStrings; scalar_t__ ulOffsetToStabsStrings; int ulSizeOfStabs; scalar_t__ ulOffsetToStabs; int ulSizeOfGlobalsStrings; scalar_t__ ulOffsetToGlobalsStrings; int ulSizeOfGlobals; scalar_t__ ulOffsetToGlobals; int ulSizeOfHeader; scalar_t__ ulOffsetToHeaders; } ;
typedef TYPE_1__ PICE_SYMBOLFILE_HEADER ;
typedef int BOOLEAN ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

BOOLEAN FUNC_2(PICE_SYMBOLFILE_HEADER* VAR_0)
{
 BOOLEAN VAR_1;

    FUNC_0((0,"ValidityCheckSymbols()\n"));

 VAR_1 = (FUNC_1((ULONG)VAR_0 + VAR_0->ulOffsetToHeaders,VAR_0->ulSizeOfHeader) &&
      FUNC_1((ULONG)VAR_0 + VAR_0->ulOffsetToGlobals,VAR_0->ulSizeOfGlobals) &&
      FUNC_1((ULONG)VAR_0 + VAR_0->ulOffsetToGlobalsStrings,VAR_0->ulSizeOfGlobalsStrings) &&
      FUNC_1((ULONG)VAR_0 + VAR_0->ulOffsetToStabs,VAR_0->ulSizeOfStabs) &&
      FUNC_1((ULONG)VAR_0 + VAR_0->ulOffsetToStabsStrings,VAR_0->ulSizeOfStabsStrings));

    FUNC_0((0,"ValidityCheckSymbols(): symbols are %s\n",VAR_1?"VALID":"NOT VALID"));

 return VAR_1;
}
