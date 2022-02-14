
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int Count; int* Entries; } ;
typedef TYPE_1__ ColorPalette ;
typedef int BYTE ;
typedef int ARGB ;


 int FUNC_0 (int,char*,int,int,int,int) ;

__attribute__((used)) static void FUNC_1(ColorPalette *VAR_0)
{
    static const BYTE VAR_1[6]={0x00,0x33,0x66,0x99,0xcc,0xff};
    UINT VAR_2;

    for (VAR_2=0; VAR_2<VAR_0->Count; VAR_2++)
    {
        ARGB VAR_3=0xff000000;
        if (VAR_2<8)
        {
            if (VAR_2&1) VAR_3 |= 0x800000;
            if (VAR_2&2) VAR_3 |= 0x8000;
            if (VAR_2&4) VAR_3 |= 0x80;
        }
        else if (VAR_2 == 8)
        {
            VAR_3 = 0xffc0c0c0;
        }
        else if (VAR_2 < 16)
        {
            if (VAR_2&1) VAR_3 |= 0xff0000;
            if (VAR_2&2) VAR_3 |= 0xff00;
            if (VAR_2&4) VAR_3 |= 0xff;
        }
        else if (VAR_2 < 40)
        {
            VAR_3 = 0x00000000;
        }
        else
        {
            VAR_3 |= VAR_1[(VAR_2-40)%6];
            VAR_3 |= VAR_1[((VAR_2-40)/6)%6] << 8;
            VAR_3 |= VAR_1[((VAR_2-40)/36)%6] << 16;
        }
        FUNC_0(VAR_3 == VAR_0->Entries[VAR_2], "Expected %.8x, got %.8x, i=%u/%u\n",
            VAR_3, VAR_0->Entries[VAR_2], VAR_2, VAR_0->Count);
    }
}
