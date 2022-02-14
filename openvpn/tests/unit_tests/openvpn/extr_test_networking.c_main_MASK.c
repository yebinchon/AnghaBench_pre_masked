
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* VAR_0 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,int ) ;
 int FUNC_6 (char*,int,char*,int ) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (char*,int,char*,int) ;
 int FUNC_9 (char*,int) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;

int
FUNC_12(int VAR_1, char *VAR_2[])
{
    int VAR_3;

    if (VAR_1 < 2)
    {
        FUNC_11(VAR_2[0]);
        return -1;
    }


    if (FUNC_10(VAR_2[1], "test") == 0)
    {
        return 0;
    }

    if (VAR_1 > 3)
    {
        VAR_0 = VAR_2[2];
    }

    VAR_3 = FUNC_0(VAR_2[1]);
    switch (VAR_3)
    {
        case 0:
            return FUNC_4(1);
        case 1:
            return FUNC_3(1281);
        case 2:
            return FUNC_1("10.255.255.1", 24);
        case 3:
            return FUNC_2("2001::1", 64);
        case 4:
            return FUNC_5("11.11.11.0", 24, 0);
        case 5:
            return FUNC_6("11.11.12.0", 24, "10.255.255.2", 0);
        case 6:
            return FUNC_7("2001:babe:cafe:babe::", 64, 600);
        case 7:
            return FUNC_8("2001:cafe:babe::", 48, "2001::2", 600);
        default:
            FUNC_9("invalid test: %d\n", VAR_3);
            break;
    }

    FUNC_11(VAR_2[0]);
    return -1;
}
