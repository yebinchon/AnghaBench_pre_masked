
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ULONG ;
typedef int PVOID ;
typedef char* PCSTR ;
typedef char* PCHAR ;
typedef int INT ;
typedef scalar_t__ CHAR ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,int) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_9 (int,int,int,int,int ,int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int,int,scalar_t__*,int ) ;
 int FUNC_15 (size_t,int,size_t,char*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_16 (size_t,int,size_t,int,char,int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_17 () ;
 int FUNC_18 (char*,char*,size_t) ;
 size_t FUNC_19 (size_t,size_t) ;
 int FUNC_20 (char*) ;

BOOLEAN FUNC_21(PCSTR VAR_20, PCHAR VAR_21, ULONG VAR_22)
{
    INT VAR_23 = 8;
    ULONG VAR_24 = 1;
    INT VAR_25 = 0;
    INT VAR_26;
    size_t VAR_27 , VAR_28;
    INT VAR_29, VAR_30, VAR_31, VAR_32;
    CHAR VAR_33[260];
    CHAR VAR_34;
    BOOLEAN VAR_35;
    INT VAR_36;
    ULONG VAR_37, VAR_38;
    INT VAR_39;
    ULONG VAR_40, VAR_41;
    INT VAR_42;
    BOOLEAN VAR_43;
    PVOID VAR_44;


    VAR_44 = FUNC_1(VAR_19 * VAR_18 * 2,
                                  VAR_12);
    FUNC_11(VAR_44);


    for (VAR_27=0; VAR_27<FUNC_20(VAR_20); VAR_27++)
    {
        if (VAR_20[VAR_27] == '\n')
            VAR_24++;
    }


    for (VAR_27=0,VAR_28=0,VAR_26=0; VAR_27<VAR_24; VAR_27++)
    {
        while ((VAR_20[VAR_28] != '\n') && (VAR_20[VAR_28] != 0))
        {
            VAR_28++;
            VAR_26++;
        }

        if (VAR_26 > VAR_23)
            VAR_23 = VAR_26;

        VAR_26 = 0;
        VAR_28++;
    }


    VAR_29 = (VAR_19 - (VAR_23+2))/2;
    VAR_30 = VAR_29 + VAR_23 + 3;
    VAR_31 = ((VAR_18 - VAR_24 - 2)/2) + 1;
    VAR_32 = VAR_31 + VAR_24 + 4;


    FUNC_9(VAR_29, VAR_31, VAR_30, VAR_32, VAR_1, VAR_0, VAR_13, VAR_13, FUNC_0(VAR_17, VAR_16));


    for (VAR_27=0,VAR_28=0; VAR_27<FUNC_20(VAR_20)+1; VAR_27++)
    {
        if ((VAR_20[VAR_27] == '\n') || (VAR_20[VAR_27] == 0))
        {
            VAR_33[VAR_28] = 0;
            VAR_28 = 0;
            FUNC_14(VAR_29+2, VAR_31+1+VAR_25, VAR_33, FUNC_0(VAR_17, VAR_16));
            VAR_25++;
        }
        else
            VAR_33[VAR_28++] = VAR_20[VAR_27];
    }

    VAR_40 = (ULONG)FUNC_20(VAR_21);
    VAR_40 = FUNC_19(VAR_40, VAR_22 - 1);
    VAR_41 = 0;
    VAR_36 = VAR_32 - 2;
    VAR_37 = VAR_29 + 3;
    VAR_38 = VAR_30 - 3;


    FUNC_16(VAR_37, VAR_36, VAR_38, VAR_36, ' ', FUNC_0(VAR_15, VAR_14));
    FUNC_15(VAR_37, VAR_36, VAR_38 - VAR_37 + 1, VAR_21, FUNC_0(VAR_15, VAR_14));


    VAR_39 = VAR_37;
    FUNC_8(VAR_39, VAR_36);
    FUNC_7(VAR_13);


    FUNC_13("Press ENTER to continue, or ESC to cancel");

    FUNC_17();






    for (;;)
    {
        if (FUNC_5())
        {
            VAR_35 = VAR_2;
            VAR_34 = FUNC_4();
            if (VAR_34 == VAR_8)
            {
                VAR_35 = VAR_13;
                VAR_34 = FUNC_4();
            }

            if (VAR_34 == VAR_6)
            {
                VAR_43 = VAR_13;
                break;
            }
            else if (VAR_34 == VAR_7)
            {
                VAR_43 = VAR_2;
                break;
            }
            else if (VAR_34 == VAR_3)
            {
                if ( (VAR_40 > 0) && (VAR_41 > 0) &&
                     (VAR_41 <= VAR_40) )
                {
                    VAR_41--;
                    FUNC_18(VAR_21 + VAR_41,
                            VAR_21 + VAR_41 + 1,
                            VAR_40 - VAR_41);
                    VAR_40--;
                    VAR_21[VAR_40] = 0;
                }
                else
                {
                    FUNC_3();
                }
            }
            else if (VAR_35 && VAR_34 == VAR_4)
            {
                if ( (VAR_40 > 0) &&
                     (VAR_41 < VAR_40) )
                {
                    FUNC_18(VAR_21 + VAR_41,
                            VAR_21 + VAR_41 + 1,
                            VAR_40 - VAR_41);
                    VAR_40--;
                    VAR_21[VAR_40] = 0;
                }
                else
                {
                    FUNC_3();
                }
            }
            else if (VAR_35 && VAR_34 == VAR_9)
            {
                VAR_41 = 0;
            }
            else if (VAR_35 && VAR_34 == VAR_5)
            {
                VAR_41 = VAR_40;
            }
            else if (VAR_35 && VAR_34 == VAR_11)
            {
                if (VAR_41 < VAR_40)
                    VAR_41++;
                else
                    FUNC_3();
            }
            else if (VAR_35 && VAR_34 == VAR_10)
            {
                if (VAR_41 > 0)
                    VAR_41--;
                else
                    FUNC_3();
            }
            else if (!VAR_35)
            {
                if ( (VAR_40 < VAR_22 - 1) &&
                     (VAR_41 < VAR_22 - 1) )
                {
                    FUNC_18(VAR_21 + VAR_41 + 1,
                            VAR_21 + VAR_41,
                            VAR_40 - VAR_41);
                    VAR_21[VAR_41] = VAR_34;
                    VAR_41++;
                    VAR_40++;
                    VAR_21[VAR_40] = 0;
                }
                else
                {
                    FUNC_3();
                }
            }
            else
            {
                FUNC_3();
            }
        }


        FUNC_16(VAR_37, VAR_36, VAR_38, VAR_36, ' ', FUNC_0(VAR_15, VAR_14));


        if (VAR_41 > (VAR_38 - VAR_37))
        {
            VAR_42 = VAR_41 - (VAR_38 - VAR_37);
            VAR_39 = VAR_38;
        }
        else
        {
            VAR_42 = 0;
            VAR_39 = VAR_37 + VAR_41;
        }
        FUNC_15(VAR_37, VAR_36, VAR_38 - VAR_37 + 1, &VAR_21[VAR_42], FUNC_0(VAR_15, VAR_14));


        FUNC_8(VAR_39, VAR_36);

        FUNC_12();

        FUNC_17();

        FUNC_6();
    }


    FUNC_7(VAR_2);


    FUNC_10(VAR_44);
    FUNC_2(VAR_44, VAR_12);

    return VAR_43;
}
