
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int VAR_1 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 () ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int ,int ) ;
 int FUNC_12 (int ) ;
 int VAR_3 ;

int FUNC_13(int VAR_4, char *VAR_5[])
{
    BOOL VAR_6=VAR_0;
    BOOL VAR_7=VAR_0;
    BOOL VAR_8=VAR_0;
    BOOL VAR_9=VAR_0;
    BOOL VAR_10=VAR_0;
    BOOL VAR_11=VAR_0;
    BOOL VAR_12=VAR_0;
    BOOL VAR_13=VAR_0;
    BOOL VAR_14=VAR_0;

    VAR_3 = FUNC_2(((void*)0));
    VAR_1 = FUNC_3();


    if ((VAR_4 > 1) && (VAR_5[1][0]=='/' || VAR_5[1][0]=='-'))
    {
        if (!FUNC_9(&VAR_5[1][1], FUNC_8("?")))
        {
            VAR_6 = VAR_2;
        }
        else if (!FUNC_11(&VAR_5[1][1], FUNC_8("ALL"), FUNC_10(&VAR_5[1][1])))
        {
           VAR_7 = VAR_2;
        }
        else if (!FUNC_11(&VAR_5[1][1], FUNC_8("RELEASE"), FUNC_10(&VAR_5[1][1])))
        {
            VAR_8 = VAR_2;
        }
        else if (!FUNC_11(&VAR_5[1][1], FUNC_8("RENEW"), FUNC_10(&VAR_5[1][1])))
        {
            VAR_9 = VAR_2;
        }
        else if (!FUNC_11(&VAR_5[1][1], FUNC_8("FLUSHDNS"), FUNC_10(&VAR_5[1][1])))
        {
            VAR_10 = VAR_2;
        }
        else if (!FUNC_11(&VAR_5[1][1], FUNC_8("FLUSHREGISTERDNS"), FUNC_10(&VAR_5[1][1])))
        {
            VAR_11 = VAR_2;
        }
        else if (!FUNC_11(&VAR_5[1][1], FUNC_8("DISPLAYDNS"), FUNC_10(&VAR_5[1][1])))
        {
            VAR_12 = VAR_2;
        }
        else if (!FUNC_11(&VAR_5[1][1], FUNC_8("SHOWCLASSID"), FUNC_10(&VAR_5[1][1])))
        {
            VAR_13 = VAR_2;
        }
        else if (!FUNC_11(&VAR_5[1][1], FUNC_8("SETCLASSID"), FUNC_10(&VAR_5[1][1])))
        {
            VAR_14 = VAR_2;
        }
    }

    switch (VAR_4)
    {
        case 1:
            FUNC_6(VAR_0);
            break;
        case 2:
            if (VAR_6)
                FUNC_7();
            else if (VAR_7)
                FUNC_6(VAR_2);
            else if (VAR_8)
                FUNC_4(((void*)0));
            else if (VAR_9)
                FUNC_5(((void*)0));
            else if (VAR_10)
                FUNC_1();
            else if (VAR_11)
                FUNC_12(FUNC_8("\nSorry /registerdns is not implemented yet\n"));
            else if (VAR_12)
                FUNC_0();
            else
                FUNC_7();
            break;
        case 3:
            if (VAR_8)
                FUNC_12(FUNC_8("\nSorry /release [adapter] is not implemented yet\n"));

            else if (VAR_9)
                FUNC_12(FUNC_8("\nSorry /renew [adapter] is not implemented yet\n"));
            else if (VAR_13)
                FUNC_12(FUNC_8("\nSorry /showclassid adapter is not implemented yet\n"));
            else if (VAR_14)
                FUNC_12(FUNC_8("\nSorry /setclassid adapter is not implemented yet\n"));
            else
                FUNC_7();
            break;
        case 4:
            if (VAR_14)
                FUNC_12(FUNC_8("\nSorry /setclassid adapter [classid]is not implemented yet\n"));
            else
                FUNC_7();
            break;
        default:
            FUNC_7();
    }

    return 0;
}
