
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* VAR_6 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,int ,int ) ;
 int FUNC_9 () ;

int FUNC_10(uint8_t VAR_7, uint8_t VAR_8)
{

    uint8_t VAR_9 = 128;
    uint8_t VAR_10 = 0;
    uint8_t VAR_11 = 0;
    for (VAR_11 = 0; VAR_11 < 5; VAR_11++) VAR_6[VAR_11] = 0;



    FUNC_8(VAR_7, VAR_4, VAR_5);
    FUNC_1(VAR_7);

    FUNC_4(VAR_7);

    for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) FUNC_7(1000);

    FUNC_5();

    FUNC_3(VAR_7);
    FUNC_7(40);

    FUNC_0(VAR_7);


    uint16_t VAR_12 = VAR_2;
    while (FUNC_2(VAR_7) == VAR_3 )
    {
        FUNC_7(1);
        if (--VAR_12 == 0) return VAR_0;
    }

    uint16_t VAR_13 = VAR_2;
    while (FUNC_2(VAR_7) != VAR_3 )
    {
        FUNC_7(1);
        if (--VAR_13 == 0) return VAR_0;
    }


    for (VAR_11 = 40; VAR_11 != 0; VAR_11--)
    {
        VAR_12 = VAR_2;
        while (FUNC_2(VAR_7) == VAR_3 )
        {
            FUNC_7(1);
            if (--VAR_12 == 0) return VAR_0;
        }

        uint32_t VAR_14 = FUNC_9();

        VAR_13 = VAR_2;
        while (FUNC_2(VAR_7) != VAR_3 )
        {
            FUNC_7(1);
            if (--VAR_13 == 0) return VAR_0;
        }

        if ((FUNC_9() - VAR_14) > 40)
        {
            VAR_6[VAR_10] |= VAR_9;
        }
        VAR_9 >>= 1;
        if (VAR_9 == 0)
        {
            VAR_9 = 128;
            VAR_10++;
        }
    }

    FUNC_6();

    FUNC_1(VAR_7);

    FUNC_3(VAR_7);

    return VAR_1;
}
