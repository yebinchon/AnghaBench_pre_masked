
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef int UCHAR ;
typedef scalar_t__ PUCHAR ;
typedef char CHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (scalar_t__,int) ;

__attribute__((used)) static
ULONG
FUNC_4(PUCHAR VAR_4)
{
    CHAR VAR_5[4];
    ULONG VAR_6;
    ULONG VAR_7;
    UCHAR VAR_8;


    VAR_8 = FUNC_0(VAR_4 + 4);
    FUNC_3(VAR_4 + 4, (VAR_8 & ~0x02) | 0x01);
    FUNC_1(100000);







    VAR_7 = 200;
    while (FUNC_0(VAR_4 + 5) & 0x01)
    {
        if (--VAR_7 == 0)
            return VAR_2;
        FUNC_0(VAR_4);
    }





    FUNC_3(VAR_4 + 4, 0x0b);


    FUNC_1(10000);


    VAR_7 = 20;
    for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
    {
        while ((FUNC_0(VAR_4 + 5) & 1) == 0)
        {
            FUNC_1(100);
            --VAR_7;
            if (VAR_7 == 0)
                return VAR_2;
        }
        VAR_5[VAR_6] = FUNC_0(VAR_4);
    }

    FUNC_2("Mouse data: %x %x %x %x\n",
          VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3]);


    for (VAR_6 = 0; VAR_6 < 4; ++VAR_6)
    {
        if (VAR_5[VAR_6] == 'B')
        {



            return VAR_2;
        }
        else if (VAR_5[VAR_6] == 'M')
        {

            if (VAR_6 == 3)
            {

                return VAR_2;
            }

            switch (VAR_5[VAR_6 + 1])
            {
            case '3':
                FUNC_2("Microsoft Mouse with 3-buttons detected\n");
                return VAR_0;

            case 'Z':
                FUNC_2("Microsoft Wheel Mouse detected\n");
                return VAR_3;


            default:
                FUNC_2("Microsoft Mouse with 2-buttons detected\n");
                return VAR_1;
            }
        }
    }

    return VAR_2;
}
