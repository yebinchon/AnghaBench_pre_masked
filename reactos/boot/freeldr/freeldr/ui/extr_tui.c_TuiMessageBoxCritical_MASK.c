
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef char* PCSTR ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_8 ;
 int FUNC_4 (int,int,int,int,int ,int ,int ,int ,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int,int,char*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 () ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 (char*) ;

VOID FUNC_11(PCSTR VAR_13)
{
    int VAR_14 = 8;
    unsigned int VAR_15 = 1;
    int VAR_16 = 0;
    int VAR_17;
    size_t VAR_18 , VAR_19;
    int VAR_20, VAR_21, VAR_22, VAR_23;
    char VAR_24[260];
    char VAR_25;


    for (VAR_18=0; VAR_18<FUNC_10(VAR_13); VAR_18++)
    {
        if (VAR_13[VAR_18] == '\n')
            VAR_15++;
    }


    for (VAR_18=0,VAR_19=0,VAR_17=0; VAR_18<VAR_15; VAR_18++)
    {
        while ((VAR_13[VAR_19] != '\n') && (VAR_13[VAR_19] != 0))
        {
            VAR_19++;
            VAR_17++;
        }

        if (VAR_17 > VAR_14)
            VAR_14 = VAR_17;

        VAR_17 = 0;
        VAR_19++;
    }


    VAR_20 = (VAR_12 - (VAR_14+2))/2;
    VAR_21 = VAR_20 + VAR_14 + 3;
    VAR_22 = ((VAR_11 - VAR_15 - 2)/2) + 1;
    VAR_23 = VAR_22 + VAR_15 + 4;


    FUNC_4(VAR_20, VAR_22, VAR_21, VAR_23, VAR_3, VAR_2, VAR_8, VAR_8, FUNC_0(VAR_10, VAR_9));


    for (VAR_18=0,VAR_19=0; VAR_18<FUNC_10(VAR_13)+1; VAR_18++)
    {
        if ((VAR_13[VAR_18] == '\n') || (VAR_13[VAR_18] == 0))
        {
            VAR_24[VAR_19] = 0;
            VAR_19 = 0;
            FUNC_7(VAR_20+2, VAR_22+1+VAR_16, VAR_24, FUNC_0(VAR_10, VAR_9));
            VAR_16++;
        }
        else
            VAR_24[VAR_19++] = VAR_13[VAR_18];
    }


    FUNC_9(VAR_24, "   OK   ");
    FUNC_7(VAR_20+((VAR_21-VAR_20)/2)-3, VAR_23-2, VAR_24, FUNC_0(VAR_0, VAR_1));


    FUNC_6("Press ENTER to continue");

    FUNC_8();

    for (;;)
    {
        if (FUNC_2())
        {
            VAR_25 = FUNC_1();
            if (VAR_25 == VAR_6)
                VAR_25 = FUNC_1();

            if ((VAR_25 == VAR_4) || (VAR_25 == VAR_7) || (VAR_25 == VAR_5))
                break;
        }

        FUNC_5();

        FUNC_8();

        FUNC_3();
    }
}
