
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_3__ {int* DeltaValue; int StartSize; int DeltaFormat; int EndSize; } ;
typedef TYPE_1__ OT_DeviceTable ;
typedef int INT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static INT FUNC_3(const OT_DeviceTable *VAR_0, WORD VAR_1)
{
    static const WORD VAR_2[3] = {3,0xf,0xff};
    if (VAR_0 && VAR_1 >= FUNC_0(VAR_0->StartSize) && VAR_1 <= FUNC_0(VAR_0->EndSize))
    {
        WORD VAR_3 = FUNC_0(VAR_0->DeltaFormat);
        int VAR_4 = VAR_1 - FUNC_0(VAR_0->StartSize);
        int VAR_5;

        FUNC_1("device table, format %#x, index %i\n", VAR_3, VAR_4);

        if (VAR_3 < 1 || VAR_3 > 3)
        {
            FUNC_2("invalid delta format %#x\n", VAR_3);
            return 0;
        }

        VAR_4 = VAR_4 << VAR_3;
        VAR_5 = (VAR_0->DeltaValue[VAR_4/sizeof(WORD)] << (VAR_4%sizeof(WORD)))&VAR_2[VAR_3-1];
        FUNC_1("offset %i, value %i\n",VAR_4, VAR_5);
        if (VAR_5 > VAR_2[VAR_3-1]/2)
            VAR_5 = -1 * ((VAR_2[VAR_3-1]+1) - VAR_5);
        return VAR_5;
    }
    return 0;
}
