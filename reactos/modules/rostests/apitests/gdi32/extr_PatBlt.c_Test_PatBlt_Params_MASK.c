
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef scalar_t__ HDC ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int *,int *,int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (scalar_t__,int ,int ,int,int,int) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int) ;

void FUNC_9()
{
    BOOL VAR_4;
    ULONG VAR_5, VAR_6;
    HDC VAR_7;


    VAR_4 = FUNC_4(VAR_3, 0, 0, 1, 1, VAR_0 & 0x00FF0000);
    FUNC_8(VAR_4, 1);


    VAR_4 = FUNC_4(VAR_3, 0, 0, 1, 1, (VAR_0 & 0x00FF0000) | 0xab00cdef);
    FUNC_8(VAR_4, 1);


    FUNC_5(0);
    FUNC_8(FUNC_4(VAR_3, 0, 0, 1, 1, VAR_2) , 0);
    FUNC_7(0);


    for (VAR_5 = 0; VAR_5 < 256; VAR_5++)
    {
        VAR_6 = VAR_5 << 16;
        VAR_4 = FUNC_4(VAR_3, 0, 0, 1, 1, VAR_6);


        if ((VAR_5 == 0) || (VAR_5 == 5) || (VAR_5 == 10) || (VAR_5 == 15) || (VAR_5 == 80) ||
            (VAR_5 == 85) || (VAR_5 == 90) || (VAR_5 == 95) || (VAR_5 == 160) || (VAR_5 == 165) ||
            (VAR_5 == 170) || (VAR_5 == 175) || (VAR_5 == 240) || (VAR_5 == 245) ||
            (VAR_5 == 250) || (VAR_5 == 255))
        {
            FUNC_6(VAR_4 == 1, "index %ld failed, but should succeed\n", VAR_5);
        }
        else
        {
            FUNC_6(VAR_4 == 0, "index %ld succeeded, but should fail\n", VAR_5);
        }
    }


    VAR_4 = FUNC_4(VAR_3, 0, 0, 1, 1, FUNC_3(VAR_0, VAR_1));
    FUNC_8(VAR_4, 1);
    VAR_4 = FUNC_4(VAR_3, 0, 0, 1, 1, FUNC_3(VAR_0, VAR_2));
    FUNC_8(VAR_4, 1);
    VAR_4 = FUNC_4(VAR_3, 0, 0, 1, 1, FUNC_3(VAR_2, VAR_0));
    FUNC_8(VAR_4, 0);


    VAR_7 = FUNC_1("DISPLAY", ((void*)0), ((void*)0), ((void*)0));
    FUNC_6(VAR_7 != 0, "\n");
    FUNC_5(0);
    FUNC_8(FUNC_4(VAR_7, 0, 0, 1, 1, VAR_0), 1);
    FUNC_7(0);
    FUNC_2(VAR_7);


    VAR_7 = FUNC_0(((void*)0));
    FUNC_6(VAR_7 != 0, "\n");
    FUNC_8(FUNC_4(VAR_7, 0, 0, 1, 1, VAR_0), 1);
    FUNC_7(0);
    FUNC_2(VAR_7);



}
