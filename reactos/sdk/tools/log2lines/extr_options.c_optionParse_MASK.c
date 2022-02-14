
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char** const,int ) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__* FUNC_2 (int ) ;
 scalar_t__* VAR_3 ;
 int VAR_4 ;
 scalar_t__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 scalar_t__* VAR_24 ;
 int VAR_25 ;
 int FUNC_3 (scalar_t__*,char*,scalar_t__*,...) ;
 int FUNC_4 (scalar_t__*,int ) ;
 int FUNC_5 (scalar_t__*,char*) ;
 int FUNC_6 (scalar_t__*,scalar_t__*) ;
 int FUNC_7 (int) ;

int FUNC_8(int VAR_26, const char **VAR_27)
{
    int VAR_28;
    int VAR_29 = 0;
    int VAR_30;

    while (-1 != (VAR_30 = FUNC_0(VAR_26, (char **const)VAR_27, VAR_25)))
    {
        switch (VAR_30)
        {
        case 'b':
            VAR_11++;
            break;
        case 'c':
            VAR_12++;
            break;
        case 'd':
            VAR_29++;

            break;
        case 'f':
            VAR_15++;
            break;
        case 'h':
            VAR_16++;
            FUNC_7(1);
            return -1;
            break;
        case 'F':
            VAR_14++;
            VAR_15++;
            break;
        case 'l':
            VAR_29++;

            break;
        case 'm':
            VAR_17++;
            break;
        case 'M':
            VAR_4++;
            break;
        case 'r':
            VAR_18++;
            break;
        case 'P':
            VAR_29++;

            break;
        case 'R':
            VAR_29++;
            if (!VAR_5)
                VAR_5 = FUNC_2(VAR_1);
            FUNC_3(VAR_24, "%s", VAR_5);
            if (FUNC_5(VAR_5, "check") == 0)
                VAR_6 ++;
            break;
        case 's':
            VAR_20++;
            break;
        case 'S':
            VAR_29++;
            VAR_28 = FUNC_3(VAR_24, "%d+%d,%s", &VAR_7, &VAR_9, VAR_8);
            if (VAR_28 == 1)
                FUNC_3(VAR_24, "%*d,%s", VAR_8);
            FUNC_1(3, "Sources option parse result: %d+%d,\"%s\"\n", VAR_7, VAR_9, VAR_8);
            if (VAR_7)
            {

                VAR_22++;
                VAR_19++;
                VAR_6 ++;
            }
            break;
        case 't':
            VAR_21++;
            break;
        case 'T':
            VAR_21++;
            VAR_10++;
            break;
        case 'u':
            VAR_22++;
            break;
        case 'U':
            VAR_22++;
            VAR_19++;
            break;
        case 'v':
            VAR_23++;
            break;
        case 'z':
            VAR_29++;
            FUNC_6(VAR_3, VAR_24);
            break;
        default:
            FUNC_7(0);
            return -2;
            break;
        }
        VAR_29++;
    }
    if(VAR_12)
    {
        FUNC_1(2, "Note: use 's' command in console mode. Statistics option disabled\n");
        VAR_20 = 0;
    }
    if (VAR_8[0])
    {
        FUNC_4(VAR_8, VAR_2);
    }
    if (!VAR_13[0])
    {
        FUNC_6(VAR_13, VAR_8);
        FUNC_4(VAR_13, VAR_0);
    }

    return VAR_29;
}
