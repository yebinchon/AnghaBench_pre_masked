
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dsn ;
typedef int desc ;
typedef int SQLUSMALLINT ;
typedef scalar_t__ SQLSMALLINT ;
typedef scalar_t__ SQLRETURN ;
typedef int SQLHENV ;
typedef int SQLCHAR ;
typedef int LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef char const CHAR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int,scalar_t__*,int *,int,scalar_t__*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,char const*,int ,int *,int ,int ,int *,int *,int *) ;
 scalar_t__ FUNC_3 (int ,char const*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_4 (int ,char const*,int ,int ,int ,scalar_t__) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (char*,scalar_t__,char const*,...) ;
 scalar_t__ VAR_15 ;
 int FUNC_6 (char*,char const*,...) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static void FUNC_8 (BOOL VAR_16, SQLHENV VAR_17)
{
    HKEY VAR_18;
    LONG VAR_19;
    SQLRETURN VAR_20;
    SQLUSMALLINT VAR_21;
    CHAR VAR_22 [VAR_11 + 1];
    SQLSMALLINT VAR_23;
    CHAR VAR_24 [256];
    SQLSMALLINT VAR_25;
    BOOL VAR_26;
    const char *VAR_27 = VAR_16 ? "user" : "system";

    VAR_26 = VAR_2;
    if ((VAR_19 = FUNC_2 (
            VAR_16 ? VAR_3 : VAR_4,
            "Software\\ODBC\\ODBC.INI", 0, ((void*)0), VAR_6,
            VAR_5 , ((void*)0), &VAR_18,
            ((void*)0))) == VAR_1)
    {
        VAR_26 = VAR_15;
        VAR_21 = VAR_16 ? VAR_9 : VAR_8;
        while ((VAR_20 = FUNC_0 (VAR_17, VAR_21,
                (SQLCHAR*)VAR_22, sizeof(VAR_22), &VAR_23,
                (SQLCHAR*)VAR_24, sizeof(VAR_24), &VAR_25)) == VAR_13
                || VAR_20 == VAR_14)
        {

            VAR_21 = VAR_10;
            if (VAR_23 == FUNC_7(VAR_22) && VAR_25 == FUNC_7(VAR_24))
            {
                HKEY VAR_28;
                if ((VAR_19 = FUNC_2 (VAR_18, VAR_22, 0,
                        ((void*)0), VAR_6,
                        VAR_5, ((void*)0), &VAR_28, ((void*)0)))
                        == VAR_1)
                {
                    static const char VAR_29[] = "Driver";
                    if ((VAR_19 = FUNC_3 (VAR_28, VAR_29,
                            ((void*)0), ((void*)0), ((void*)0), ((void*)0)))
                            == VAR_0)
                    {
                        if ((VAR_19 = FUNC_4 (VAR_28, VAR_29, 0,
                                VAR_7, (LPBYTE)VAR_24, VAR_25)) != VAR_1)
                        {
                            FUNC_5 ("Error %d replicating description of "
                                    "%s(%s)\n", VAR_19, VAR_22, VAR_24);
                            VAR_26 = VAR_2;
                        }
                    }
                    else if (VAR_19 != VAR_1)
                    {
                        FUNC_5 ("Error %d checking for description of %s\n",
                                VAR_19, VAR_22);
                        VAR_26 = VAR_2;
                    }
                    if ((VAR_19 = FUNC_1 (VAR_28)) != VAR_1)
                    {
                        FUNC_5 ("Error %d closing %s DSN key %s\n",
                                VAR_19, VAR_27, VAR_22);
                    }
                }
                else
                {
                    FUNC_5 ("Error %d opening %s DSN key %s\n",
                            VAR_19, VAR_27, VAR_22);
                    VAR_26 = VAR_2;
                }
            }
            else
            {
                FUNC_6 ("Unusually long %s data source name %s (%s) not "
                        "replicated\n", VAR_27, VAR_22, VAR_24);
                VAR_26 = VAR_2;
            }
        }
        if (VAR_20 != VAR_12)
        {
            FUNC_5 ("Error %d enumerating %s datasources\n",
                    (int)VAR_20, VAR_27);
            VAR_26 = VAR_2;
        }
        if ((VAR_19 = FUNC_1 (VAR_18)) != VAR_1)
        {
            FUNC_5 ("Error %d closing %s ODBC.INI registry key\n", VAR_19,
                    VAR_27);
        }
    }
    else
    {
        FUNC_5 ("Error %d creating/opening %s ODBC.INI registry key\n",
                VAR_19, VAR_27);
    }
    if (!VAR_26)
    {
        FUNC_6 ("May not have replicated all %s ODBC DSNs to the registry\n",
                VAR_27);
    }
}
