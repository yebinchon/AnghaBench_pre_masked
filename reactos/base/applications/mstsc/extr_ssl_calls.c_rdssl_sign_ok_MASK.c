
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,int,int) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,char*) ;
 void* FUNC_5 () ;
 int FUNC_6 (void*) ;
 int FUNC_7 (void*,char*,int) ;
 int FUNC_8 (char*,int,char*,int,char*,int,char*,int) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (int) ;

int
FUNC_11(char* VAR_2, int VAR_3, char* VAR_4, int VAR_5,
    char* VAR_6, int VAR_7, char* VAR_8, int VAR_9, char* VAR_10)
{
    char* VAR_11;
    char* VAR_12;
    void* VAR_13;

    if ((VAR_3 != 4) || (VAR_5 != 64) || (VAR_7 != 64) || (VAR_9 != 64))
    {
        return 1;
    }
    VAR_13 = FUNC_5();
    if (!VAR_13)
    {
        return 1;
    }
    VAR_11 = (char*)FUNC_10(176);
    VAR_12 = (char*)FUNC_10(64);

    FUNC_1(VAR_11, VAR_10, 176);

    FUNC_1(VAR_11 + 32, VAR_2, 4);
    FUNC_1(VAR_11 + 36, VAR_4, 64);
    FUNC_3(VAR_13);

    FUNC_7(VAR_13, VAR_11, 108);

    FUNC_2(VAR_12, 0xff, 64);

    FUNC_4(VAR_13, VAR_12);

    VAR_12[16] = 0;
    VAR_12[62] = 1;
    VAR_12[63] = 0;

    FUNC_8(VAR_6, 64, VAR_12, 64, (char*)VAR_1, 64,
        (char*)VAR_0, 64);

    FUNC_6(VAR_13);
    FUNC_9(VAR_11);
    FUNC_9(VAR_12);
    return FUNC_0(VAR_6, VAR_8, VAR_9);
}
