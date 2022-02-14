
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG_PTR ;
typedef int ULONG ;
typedef int UCHAR ;
typedef int* PVOID ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int,int*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int,int ) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (int) ;
 int FUNC_11 (char*,...) ;
 scalar_t__ VAR_11 ;
 int FUNC_12 (char*) ;

__attribute__((used)) static BOOLEAN
FUNC_13(ULONG VAR_12,
                   ULONG VAR_13,
                   UCHAR VAR_14,
                   UCHAR VAR_15,
                   UCHAR VAR_16,
                   UCHAR VAR_17,
                   UCHAR VAR_18,
                   UCHAR VAR_19,
                   UCHAR VAR_20,
                   PVOID VAR_21)
{
    ULONG VAR_22 = 0;
    ULONG VAR_23;
    BOOLEAN VAR_24 = VAR_0;
    UCHAR VAR_25;


    for (VAR_23 = 0; VAR_23 < VAR_5; VAR_23++)
    {
        VAR_25 = FUNC_1(VAR_12);
        if (!(VAR_25 & VAR_8))
            break;

        FUNC_10(10);
    }
    FUNC_11("status=0x%x\n", VAR_25);
    FUNC_11("waited %d usecs for busy to clear\n", VAR_23 * 10);
    if (VAR_23 >= VAR_5)
    {
        FUNC_12("Drive is BUSY for too long\n");
        return VAR_0;
    }


    FUNC_6(VAR_12, VAR_3 | VAR_19);
    FUNC_10(500);


    FUNC_5(VAR_13, VAR_1);
    FUNC_10(500);


    if (VAR_19 & VAR_4)
    {
        FUNC_11("READ:DRV=%d:LBA=1:BLK=%d:SC=0x%x:CM=0x%x\n",
              VAR_19 & VAR_2 ? 1 : 0,
              ((VAR_19 & 0x0f) << 24) + (VAR_18 << 16) + (VAR_17 << 8) + VAR_16,
              VAR_15,
              VAR_20);
    }
    else
    {
        FUNC_11("READ:DRV=%d:LBA=0:CH=0x%x:CL=0x%x:HD=0x%x:SN=0x%x:SC=0x%x:CM=0x%x\n",
              VAR_19 & VAR_2 ? 1 : 0,
              VAR_18,
              VAR_17,
              VAR_19 & 0x0f,
              VAR_16,
              VAR_15,
              VAR_20);
    }


    FUNC_7(VAR_12, VAR_14);
    FUNC_8(VAR_12, VAR_15);
    FUNC_9(VAR_12, VAR_16);
    FUNC_3(VAR_12, VAR_18);
    FUNC_4(VAR_12, VAR_17);
    FUNC_6(VAR_12, VAR_3 | VAR_19);


    FUNC_2(VAR_12, VAR_20);
    FUNC_10(50);


    for (VAR_23 = 0; VAR_23 < VAR_6; VAR_23++)
    {
        VAR_25 = FUNC_1(VAR_12);
        if (!(VAR_25 & VAR_8))
        {
            if (VAR_25 & VAR_10)
            {
                FUNC_5(VAR_13, 0);
                FUNC_10(50);
                FUNC_1(VAR_12);
                return VAR_0;
            }

            if (VAR_25 & VAR_9)
            {
                break;
            }
            else
            {
                FUNC_5(VAR_13, 0);
                FUNC_10(50);
                FUNC_1(VAR_12);
                return VAR_0;
            }
        }
        FUNC_10(10);
    }


    if (VAR_23 >= VAR_6)
    {
        FUNC_5(VAR_13, 0);
        FUNC_10(50);
        FUNC_1(VAR_12);
        return VAR_0;
    }

    while (1)
    {

        if (VAR_24 == VAR_0)
        {
            FUNC_0(VAR_12, VAR_21, VAR_7);
            VAR_21 = (PVOID)((ULONG_PTR)VAR_21 + VAR_7);
        }
        else
        {
            UCHAR VAR_26[VAR_7];
            FUNC_0(VAR_12, VAR_26, VAR_7);
        }
        VAR_22++;


        for (VAR_23 = 0; VAR_23 < VAR_5; VAR_23++)
        {
            VAR_25 = FUNC_1(VAR_12);
            if (!(VAR_25 & VAR_8))
            {
                if (VAR_25 & VAR_10)
                {
                    FUNC_5(VAR_13, 0);
                    FUNC_10(50);
                    FUNC_1(VAR_12);
                    return VAR_0;
                }
                if (VAR_25 & VAR_9)
                {
                    if (VAR_22 >= VAR_15)
                    {
                        FUNC_11("Buffer size exceeded!\n");
                        VAR_24 = VAR_11;
                    }
                    break;
                }
                else
                {
                    if (VAR_22 > VAR_15)
                    {
                        FUNC_11("Read %lu sectors of junk!\n",
                              VAR_22 - VAR_15);
                    }

                    FUNC_5(VAR_13, 0);
                    FUNC_10(50);
                    FUNC_1(VAR_12);
                    return VAR_11;
                }
            }
        }
    }
}
