
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct RtfData {int dummy; } ;
typedef int ULONG ;
typedef int HLPFILE ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int const*,int) ;
 unsigned int FUNC_1 (int const*,int) ;
 int FUNC_2 (struct RtfData*,int *,int const*,int,int) ;
 int FUNC_3 (struct RtfData*,int *,int const*,int) ;
 int VAR_1 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*,unsigned int,int) ;

__attribute__((used)) static BOOL FUNC_6(struct RtfData* VAR_2, HLPFILE *VAR_3,
                                        const BYTE* VAR_4, ULONG VAR_5)
{
    unsigned VAR_6, VAR_7;

    VAR_7 = FUNC_1(VAR_4, 2);
    FUNC_5("Got picture magic=%04x #=%d\n", FUNC_1(VAR_4, 0), VAR_7);

    for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++)
    {
        const BYTE* VAR_8;
        const BYTE* VAR_9;
        BYTE VAR_10, VAR_11;

        FUNC_5("Offset[%d] = %x\n", VAR_6, FUNC_0(VAR_4, (1 + VAR_6) * 4));
        VAR_8 = VAR_9 = VAR_4 + FUNC_0(VAR_4, (1 + VAR_6) * 4);

        VAR_10 = *VAR_9++;
        VAR_11 = *VAR_9++;

        switch (VAR_10)
        {
        case 5:
        case 6:
            FUNC_2(VAR_2, VAR_3, VAR_8, VAR_10, VAR_11);
            break;
        case 8:
            FUNC_3(VAR_2, VAR_3, VAR_8, VAR_11);
            break;
        default: FUNC_4("Unknown type %u\n", VAR_10); return VAR_0;
        }




        if (VAR_7 != 1) FUNC_4("Supporting only one bitmap format per logical bitmap (for now). Using first format\n");
        break;
    }
    return VAR_1;
}
