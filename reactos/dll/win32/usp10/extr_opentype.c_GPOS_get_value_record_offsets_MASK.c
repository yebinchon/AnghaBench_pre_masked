
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_7__ {int XPlaDevice; int YPlaDevice; int XAdvDevice; int YAdvDevice; scalar_t__ YAdvance; scalar_t__ XAdvance; scalar_t__ YPlacement; scalar_t__ XPlacement; } ;
struct TYPE_6__ {short x; short y; } ;
typedef TYPE_1__ POINT ;
typedef int OT_DeviceTable ;
typedef TYPE_2__ GPOS_ValueRecord ;
typedef int BYTE ;


 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int const*,unsigned int) ;

__attribute__((used)) static void FUNC_2(const BYTE *VAR_0, GPOS_ValueRecord *VAR_1,
        WORD VAR_2, unsigned int VAR_3, POINT *VAR_4, POINT *VAR_5)
{
    if (VAR_2 & 0x0001) VAR_4->x += (short)VAR_1->XPlacement;
    if (VAR_2 & 0x0002) VAR_4->y += (short)VAR_1->YPlacement;
    if (VAR_2 & 0x0004) VAR_5->x += (short)VAR_1->XAdvance;
    if (VAR_2 & 0x0008) VAR_5->y += (short)VAR_1->YAdvance;
    if (VAR_2 & 0x0010) VAR_4->x += FUNC_1((const OT_DeviceTable*)(VAR_0 + VAR_1->XPlaDevice), VAR_3);
    if (VAR_2 & 0x0020) VAR_4->y += FUNC_1((const OT_DeviceTable*)(VAR_0 + VAR_1->YPlaDevice), VAR_3);
    if (VAR_2 & 0x0040) VAR_5->x += FUNC_1((const OT_DeviceTable*)(VAR_0 + VAR_1->XAdvDevice), VAR_3);
    if (VAR_2 & 0x0080) VAR_5->y += FUNC_1((const OT_DeviceTable*)(VAR_0 + VAR_1->YAdvDevice), VAR_3);
    if (VAR_2 & 0xFF00) FUNC_0("Unhandled Value Format %x\n",VAR_2&0xFF00);
}
