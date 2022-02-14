
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPBYTE ;
typedef char* INT ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef char* BOOL ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,char*,char*,scalar_t__*,int *,scalar_t__*,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (char*,...) ;
 char* VAR_4 ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,int ,scalar_t__) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;

BOOL FUNC_8(char* VAR_5)
{
    INT VAR_6 = 0;
    INT VAR_7 = 0;
    HKEY VAR_8;

    DWORD VAR_9 = 256;
    char VAR_10[256];

    DWORD VAR_11 = 256;
    char VAR_12[256];

    char VAR_13[256] = { 0 };
    char VAR_14[256] = { 0 };

    DWORD VAR_15;

    if ( FUNC_2(VAR_2, VAR_5, &VAR_8) != VAR_0 )
    {
        FUNC_3("ERROR: Could not open: HKEY_LOCAL_MACHINE\\%s\n", VAR_5);
        return 0;
    }

    while ( FUNC_1(VAR_8,
                         VAR_7,
                         VAR_10,
                         &VAR_9,
                         ((void*)0),
                         &VAR_15,
                         (LPBYTE)VAR_12,
                         &VAR_11) == VAR_0 )
    {
        BOOL VAR_16 = VAR_1;
        BOOL VAR_17 = VAR_1;

        if ( VAR_15 == VAR_3 )
        {



            if ( ! FUNC_7("wavemapper", VAR_10) )
            {
                FUNC_3("Found a Wave-mapper: %s\n", VAR_12);

                FUNC_6(VAR_13, VAR_12);
                VAR_17 = VAR_4;
                VAR_6 ++;
            }
            else if ( ! FUNC_7("midimapper", VAR_10) )
            {
                FUNC_3("Found a MIDI-mapper: %s\n", VAR_12);

                FUNC_6(VAR_14, VAR_12);
                VAR_17 = VAR_4;
                VAR_6 ++;
            }
            else if ( ! FUNC_4("wave", VAR_10, 4) )
            {
                FUNC_3("Found a Wave driver: %s\n", VAR_12);
                VAR_16 = VAR_4;
                VAR_6 ++;
            }
            else if ( ! FUNC_4("midi", VAR_10, 4) )
            {
                FUNC_3("Found a MIDI driver: %s\n", VAR_12);
                VAR_16 = VAR_4;
                VAR_6 ++;
            }
            else if ( ! FUNC_4("mixer", VAR_10, 5) )
            {
                FUNC_3("Found a mixer driver: %s\n", VAR_12);
                VAR_16 = VAR_4;
                VAR_6 ++;
            }
            else if ( ! FUNC_4("aux", VAR_10, 4) )
            {
                FUNC_3("Found an aux driver: %s\n", VAR_12);
                VAR_16 = VAR_4;
                VAR_6 ++;
            }
            else
            {
                FUNC_3("Not supported: %s\n", VAR_12);
            }




            if ( VAR_16 )
            {
                if ( ! FUNC_0(VAR_10, VAR_12, VAR_17) )
                {
                    FUNC_3("FAILED when initializing %s\n", VAR_12);
                }
            }
        }
        else
        {
            FUNC_3("Invalid data format\n");
        }


        VAR_9 = 256;
        VAR_11 = 256;
        FUNC_5(VAR_10, 0, VAR_9);
        FUNC_5(VAR_12, 0, VAR_11);

        VAR_7 ++;
    }


    if (*VAR_13)
    {
        if (!FUNC_0("wavemapper", VAR_13, VAR_4))
        {
            FUNC_3("FAILED when initializing %s\n", VAR_13);
        }
    }

    if (*VAR_14)
    {
        if (!FUNC_0("midimapper", VAR_14, VAR_4))
        {
            FUNC_3("FAILED when initializing %s\n", VAR_14);
        }
    }

    FUNC_3("Found a total of %d drivers\n", VAR_6);

    return VAR_6;
}
