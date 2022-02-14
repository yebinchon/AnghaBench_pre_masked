
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int PFREELDR_MEMORY_DESCRIPTOR ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__*,scalar_t__*) ;
 int FUNC_3 (scalar_t__*,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 () ;
 int VAR_6 ;
 int FUNC_8 (int ,int,int,int ) ;
 int FUNC_9 (char*) ;

PFREELDR_MEMORY_DESCRIPTOR
FUNC_10(ULONG *VAR_7)
{
    ULONG VAR_8;
    ULONG VAR_9;
    ULONG VAR_10;
    ULONG VAR_11, VAR_12;

    FUNC_9("PcMemGetMemoryMap()\n");

    FUNC_4();

    VAR_8 = FUNC_6(VAR_6, VAR_3);


    if (VAR_8 == 0)
    {
        FUNC_3(&VAR_9,
                                       &VAR_10);


        FUNC_1(VAR_6,
                            VAR_3,
                            0,
                            FUNC_7() * 1024 / VAR_4,
                            VAR_1);


        VAR_5 = FUNC_1(VAR_6,
                                         VAR_3,
                                         1024 * 1024 / VAR_4,
                                         VAR_9 * 1024 / VAR_4,
                                         VAR_1);

        if (VAR_10 != 0)
        {

            VAR_5 = FUNC_1(VAR_6,
                                             VAR_3,
                                             0x1000000 / VAR_4,
                                             VAR_10 * 64 * 1024 / VAR_4,
                                             VAR_1);
        }


        if (FUNC_2(&VAR_11, &VAR_12))
        {

            VAR_5 = FUNC_1(VAR_6,
                                             VAR_3,
                                             (VAR_11 / VAR_4),
                                             FUNC_0(VAR_11, VAR_12),
                                             VAR_0);
        }
    }


    FUNC_8(VAR_6, 0x000000, 0x01000, VAR_0);
    FUNC_8(VAR_6, 0x0A0000, 0x50000, VAR_0);
    FUNC_8(VAR_6, 0x0F0000, 0x10000, VAR_2);
    FUNC_8(VAR_6, 0xFFF000, 0x01000, VAR_2);

    *VAR_7 = FUNC_5(VAR_6);
    return VAR_6;
}
