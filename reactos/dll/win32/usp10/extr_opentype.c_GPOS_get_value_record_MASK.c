
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {void* YAdvDevice; void* XAdvDevice; void* YPlaDevice; void* XPlaDevice; void* YAdvance; void* XAdvance; void* YPlacement; void* XPlacement; } ;
typedef size_t INT ;
typedef TYPE_1__ GPOS_ValueRecord ;


 void* FUNC_0 (int const) ;

__attribute__((used)) static INT FUNC_1(WORD VAR_0, const WORD VAR_1[], GPOS_ValueRecord *VAR_2)
{
    INT VAR_3 = 0;
    if (VAR_0 & 0x0001) { if (VAR_1) VAR_2->XPlacement = FUNC_0(VAR_1[VAR_3]); VAR_3++; }
    if (VAR_0 & 0x0002) { if (VAR_1) VAR_2->YPlacement = FUNC_0(VAR_1[VAR_3]); VAR_3++; }
    if (VAR_0 & 0x0004) { if (VAR_1) VAR_2->XAdvance = FUNC_0(VAR_1[VAR_3]); VAR_3++; }
    if (VAR_0 & 0x0008) { if (VAR_1) VAR_2->YAdvance = FUNC_0(VAR_1[VAR_3]); VAR_3++; }
    if (VAR_0 & 0x0010) { if (VAR_1) VAR_2->XPlaDevice = FUNC_0(VAR_1[VAR_3]); VAR_3++; }
    if (VAR_0 & 0x0020) { if (VAR_1) VAR_2->YPlaDevice = FUNC_0(VAR_1[VAR_3]); VAR_3++; }
    if (VAR_0 & 0x0040) { if (VAR_1) VAR_2->XAdvDevice = FUNC_0(VAR_1[VAR_3]); VAR_3++; }
    if (VAR_0 & 0x0080) { if (VAR_1) VAR_2->YAdvDevice = FUNC_0(VAR_1[VAR_3]); VAR_3++; }
    return VAR_3;
}
