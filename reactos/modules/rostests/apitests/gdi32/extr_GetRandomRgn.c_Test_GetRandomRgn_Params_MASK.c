
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int INT ;
typedef int * HRGN ;
typedef int * HDC ;


 int VAR_0 ;
 int * FUNC_0 (int ) ;
 int * FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,char*,int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (char*) ;

void FUNC_11()
{
    HDC VAR_2;
    HRGN VAR_3;
    INT VAR_4;

    VAR_2 = FUNC_0(0);
    if (!VAR_2)
    {
        FUNC_10("Coun't create a dc\n");
        return;
    }

    VAR_3 = FUNC_1(11, 17, 23, 42);
    if (!VAR_3)
    {
        FUNC_10("Coun't create a region\n");
        return;
    }

    FUNC_6(0xbadbad00);
    VAR_4 = FUNC_5(((void*)0), ((void*)0), 0);
    FUNC_9(VAR_4, -1);
    FUNC_7((FUNC_4() == 0xbadbad00) || (FUNC_4() == VAR_1), "wrong error: %ld\n", FUNC_4());

    FUNC_6(0xbadbad00);
    VAR_4 = FUNC_5(((void*)0), ((void*)0), VAR_0);
    FUNC_9(VAR_4, -1);
    FUNC_7((FUNC_4() == 0xbadbad00) || (FUNC_4() == VAR_1), "wrong error: %ld\n", FUNC_4());

    FUNC_6(0xbadbad00);
    VAR_4 = FUNC_5(((void*)0), VAR_3, 0);
    FUNC_9(VAR_4, -1);
    FUNC_7((FUNC_4() == 0xbadbad00) || (FUNC_4() == VAR_1), "wrong error: %ld\n", FUNC_4());

    FUNC_6(0xbadbad00);
    VAR_4 = FUNC_5(((void*)0), VAR_3, VAR_0);
    FUNC_9(VAR_4, -1);
    FUNC_7((FUNC_4() == 0xbadbad00) || (FUNC_4() == VAR_1), "wrong error: %ld\n", FUNC_4());

    FUNC_6(0xbadbad00);
    VAR_4 = FUNC_5(VAR_2, ((void*)0), 0);
    FUNC_9(VAR_4, 0);
    FUNC_8(0xbadbad00);

    FUNC_6(0xbadbad00);
    VAR_4 = FUNC_5(VAR_2, ((void*)0), VAR_0);
    FUNC_9(VAR_4, 0);
    FUNC_8(0xbadbad00);

    FUNC_6(0xbadbad00);
    VAR_4 = FUNC_5(VAR_2, VAR_3, 0);
    FUNC_9(VAR_4, 0);
    FUNC_8(0xbadbad00);






    FUNC_6(0xbadbad00);
    VAR_4 = FUNC_5(VAR_2, VAR_3, 6);
    FUNC_9(VAR_4, 0);
    FUNC_8(0xbadbad00);

    FUNC_6(0xbadbad00);
    VAR_4 = FUNC_5(VAR_2, VAR_3, 27);
    FUNC_9(VAR_4, 0);
    FUNC_8(0xbadbad00);

    FUNC_6(0xbadbad00);
    VAR_4 = FUNC_5(VAR_2, VAR_3, -1);
    FUNC_9(VAR_4, 0);
    FUNC_8(0xbadbad00);

    FUNC_6(0xbadbad00);
    VAR_4 = FUNC_5(VAR_2, VAR_3, VAR_0);
    FUNC_9(VAR_4, 0);
    FUNC_8(0xbadbad00);

    FUNC_6(0xbadbad00);
    VAR_4 = FUNC_5((HDC)0x123, VAR_3, VAR_0);
    FUNC_9(VAR_4, -1);
    FUNC_7((FUNC_4() == 0xbadbad00) || (FUNC_4() == VAR_1), "wrong error: %ld\n", FUNC_4());

    FUNC_3(VAR_3);
    FUNC_2(VAR_2);
}
