
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int *,int,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,char*,int,int *,int) ;
 int FUNC_2 (int ,int ,int *,int,char*,int,int *,int *) ;
 scalar_t__ FUNC_3 (int) ;
 int VAR_5 ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int) ;
 int * FUNC_6 (int ,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(void)
{
    WCHAR VAR_6, VAR_7;
    char VAR_8, VAR_9;
    int VAR_10, VAR_11;


    VAR_10 = FUNC_5(0x41);
    FUNC_4(VAR_10 == 0x61, "ret = %x\n", VAR_10);

    VAR_10 = FUNC_5(0xF4);
    FUNC_4(VAR_10 == 0xF4, "ret = %x\n", VAR_10);

    VAR_5 = 0xdeadbeef;
    VAR_10 = FUNC_5((char)0xF4);
    FUNC_4(VAR_10 == (char)0xF4, "ret = %x\n", VAR_10);
    FUNC_4(VAR_5 == 0xdeadbeef, "errno = %d\n", VAR_5);

    VAR_5 = 0xdeadbeef;
    VAR_10 = FUNC_5((char)0xD0);
    FUNC_4(VAR_10 == (char)0xD0, "ret = %x\n", VAR_10);
    FUNC_4(VAR_5 == 0xdeadbeef, "errno = %d\n", VAR_5);

    FUNC_6(VAR_3, "C");
    VAR_5 = 0xdeadbeef;
    VAR_10 = FUNC_5((char)0xF4);
    FUNC_4(VAR_10 == (char)0xF4, "ret = %x\n", VAR_10);
    FUNC_4(VAR_5 == 0xdeadbeef, "errno = %d\n", VAR_5);


    if(!FUNC_6(VAR_3, "us")) {
        FUNC_7("skipping tolower tests that depends on locale\n");
        return;
    }
    FUNC_6(VAR_3, "C");

    VAR_8 = 0xF4;
    VAR_5 = 0xdeadbeef;
    VAR_10 = FUNC_5(VAR_8);
    if(!FUNC_1(VAR_0, VAR_4, &VAR_8, 1, &VAR_6, 1) ||
            FUNC_0(VAR_0, VAR_2, &VAR_6, 1, &VAR_7, 1) != 1 ||
            (VAR_11 = FUNC_2(VAR_0, 0, &VAR_7, 1, &VAR_9, 1, ((void*)0), ((void*)0))) != 1)
        VAR_11 = 0;
    if(VAR_11)
        FUNC_4(VAR_10==(unsigned char)VAR_9 || FUNC_3(VAR_10==VAR_8) , "ret = %x\n", VAR_10);
    else
        FUNC_4(VAR_10 == VAR_8, "ret = %x\n", VAR_10);
    if(!VAR_11 || VAR_10==(unsigned char)VAR_9)
        FUNC_4(VAR_5 == VAR_1, "errno = %d\n", VAR_5);

    VAR_8 = 0xD0;
    VAR_5 = 0xdeadbeef;
    VAR_10 = FUNC_5(VAR_8);
    if(!FUNC_1(VAR_0, VAR_4, &VAR_8, 1, &VAR_6, 1) ||
            FUNC_0(VAR_0, VAR_2, &VAR_6, 1, &VAR_7, 1) != 1 ||
            (VAR_11 = FUNC_2(VAR_0, 0, &VAR_7, 1, &VAR_9, 1, ((void*)0), ((void*)0))) != 1)
        VAR_11 = 0;
    if(VAR_11)
        FUNC_4(VAR_10==(unsigned char)VAR_9 || FUNC_3(VAR_10==VAR_8) , "ret = %x\n", VAR_10);
    else
        FUNC_4(VAR_10 == VAR_8, "ret = %x\n", VAR_10);
    if(!VAR_11 || VAR_10==(unsigned char)VAR_9)
        FUNC_4(VAR_5 == VAR_1, "errno = %d\n", VAR_5);

    VAR_10 = FUNC_5(0xD0);
    FUNC_4(VAR_10 == 0xD0, "ret = %x\n", VAR_10);

    FUNC_4(FUNC_6(VAR_3, "us") != ((void*)0), "setlocale failed\n");

    VAR_10 = FUNC_5((char)0xD0);
    FUNC_4(VAR_10 == 0xF0, "ret = %x\n", VAR_10);

    VAR_10 = FUNC_5(0xD0);
    FUNC_4(VAR_10 == 0xF0, "ret = %x\n", VAR_10);

    FUNC_6(VAR_3, "C");
}
