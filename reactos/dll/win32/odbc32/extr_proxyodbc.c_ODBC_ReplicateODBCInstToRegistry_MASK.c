
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int desc ;
typedef int SQLUSMALLINT ;
typedef scalar_t__ SQLSMALLINT ;
typedef scalar_t__ SQLRETURN ;
typedef int SQLHENV ;
typedef int SQLCHAR ;
typedef int LONG ;
typedef int HKEY ;
typedef char CHAR ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int,scalar_t__*,int *,int ,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ,int *,int ,int ,int *,int *,int *) ;
 int FUNC_3 (int ,char*,int *,int *,int *,int *) ;
 int FUNC_4 (int ,char*,int ,int ,int const*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_5 (char*,...) ;
 int VAR_12 ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8 (SQLHENV VAR_13)
{
    HKEY VAR_14;
    LONG VAR_15;
    BOOL VAR_16;

    VAR_16 = VAR_2;
    FUNC_5 ("Driver settings are not currently replicated to the registry\n");
    if ((VAR_15 = FUNC_2 (VAR_3,
            "Software\\ODBC\\ODBCINST.INI", 0, ((void*)0),
            VAR_5,
            VAR_4 , ((void*)0),
            &VAR_14, ((void*)0))) == VAR_1)
    {
        HKEY VAR_17;
        if ((VAR_15 = FUNC_2 (VAR_14, "ODBC Drivers", 0,
                ((void*)0), VAR_5,
                VAR_4 , ((void*)0), &VAR_17, ((void*)0)))
                == VAR_1)
        {
            SQLRETURN VAR_18;
            SQLUSMALLINT VAR_19;
            CHAR VAR_20 [256];
            SQLSMALLINT VAR_21;

            VAR_16 = VAR_12;
            VAR_19 = VAR_7;
            while ((VAR_18 = FUNC_0 (VAR_13, VAR_19, (SQLCHAR*)VAR_20, sizeof(VAR_20),
                    &VAR_21, ((void*)0), 0, ((void*)0))) == VAR_10 ||
                    VAR_18 == VAR_11)
            {

                VAR_19 = VAR_8;
                if (VAR_21 == FUNC_7(VAR_20))
                {
                    HKEY VAR_22;
                    if ((VAR_15 = FUNC_3 (VAR_17, VAR_20, ((void*)0),
                            ((void*)0), ((void*)0), ((void*)0))) == VAR_0)
                    {
                        if ((VAR_15 = FUNC_4 (VAR_17, VAR_20, 0,
                                VAR_6, (const BYTE *)"Installed", 10)) != VAR_1)
                        {
                            FUNC_5 ("Error %d replicating driver %s\n",
                                    VAR_15, VAR_20);
                            VAR_16 = VAR_2;
                        }
                    }
                    else if (VAR_15 != VAR_1)
                    {
                        FUNC_5 ("Error %d checking for %s in drivers\n",
                                VAR_15, VAR_20);
                        VAR_16 = VAR_2;
                    }
                    if ((VAR_15 = FUNC_2 (VAR_14, VAR_20, 0,
                            ((void*)0), VAR_5,
                            VAR_4, ((void*)0), &VAR_22, ((void*)0)))
                            == VAR_1)
                    {






                        if ((VAR_15 = FUNC_1 (VAR_22)) !=
                                VAR_1)
                            FUNC_5 ("Error %d closing %s key\n", VAR_15,
                                    VAR_20);
                    }
                    else
                    {
                        FUNC_5 ("Error %d ensuring driver key %s\n",
                                VAR_15, VAR_20);
                        VAR_16 = VAR_2;
                    }
                }
                else
                {
                    FUNC_6 ("Unusually long driver name %s not replicated\n",
                            VAR_20);
                    VAR_16 = VAR_2;
                }
            }
            if (VAR_18 != VAR_9)
            {
                FUNC_5 ("Error %d enumerating drivers\n", (int)VAR_18);
                VAR_16 = VAR_2;
            }
            if ((VAR_15 = FUNC_1 (VAR_17)) != VAR_1)
            {
                FUNC_5 ("Error %d closing hDrivers\n", VAR_15);
            }
        }
        else
        {
            FUNC_5 ("Error %d opening HKLM\\S\\O\\OI\\Drivers\n", VAR_15);
        }
        if ((VAR_15 = FUNC_1 (VAR_14)) != VAR_1)
        {
            FUNC_5 ("Error %d closing HKLM\\S\\O\\ODBCINST.INI\n", VAR_15);
        }
    }
    else
    {
        FUNC_5 ("Error %d opening HKLM\\S\\O\\ODBCINST.INI\n", VAR_15);
    }
    if (!VAR_16)
    {
        FUNC_6 ("May not have replicated all ODBC drivers to the registry\n");
    }
}
