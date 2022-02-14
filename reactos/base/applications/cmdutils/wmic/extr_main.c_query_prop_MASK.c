
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int VARIANT ;
typedef int ULONG ;
typedef int LONG ;
typedef int IWbemServices ;
typedef int IWbemLocator ;
typedef int IWbemClassObject ;
typedef int IEnumWbemClassObject ;
typedef scalar_t__ HRESULT ;
typedef int * BSTR ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int *,int ,int *,void**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int,int *,int *,int ,int ,int *,int ,int *) ;
 int FUNC_4 () ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (int *,int ,int,int **,int*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;
 scalar_t__ FUNC_10 (int *,char*,int ,int *,int *,int *) ;
 int FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *,int *,int *,int *,int *,int ,int *,int *,int **) ;
 int FUNC_13 (int *) ;
 scalar_t__ FUNC_14 (int *,int *,int *,int,int *,int **) ;
 int FUNC_15 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int * FUNC_16 (char const*) ;
 int * FUNC_17 (int *,int) ;
 int FUNC_18 (int *) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 char const* FUNC_19 (int *) ;
 int FUNC_20 (int *,int *,int ,int ) ;
 int FUNC_21 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_22 (char*,int ,int ) ;
 int FUNC_23 (char const*) ;
 char* FUNC_24 (int *,char const*) ;
 int FUNC_25 (int ,int) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (char*,int) ;
 int FUNC_28 (char const*,int) ;
 int FUNC_29 (int *,char const*) ;
 int FUNC_30 (int *,char const*) ;
 int FUNC_31 (char const*) ;

__attribute__((used)) static int FUNC_32( const WCHAR *VAR_15, const WCHAR *VAR_16 )
{
    static const WCHAR VAR_17[] = {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ',0};
    static const WCHAR VAR_18[] = {'R','O','O','T','\\','C','I','M','V','2',0};
    static const WCHAR VAR_19[] = {'W','Q','L',0};
    HRESULT VAR_20;
    IWbemLocator *VAR_21 = ((void*)0);
    IWbemServices *VAR_22 = ((void*)0);
    IEnumWbemClassObject *VAR_23 = ((void*)0);
    LONG VAR_24 = VAR_12 | VAR_11;
    BSTR VAR_25 = ((void*)0), VAR_26 = ((void*)0), VAR_27 = ((void*)0);
    WCHAR *VAR_28 = ((void*)0);
    BOOL VAR_29 = VAR_9;
    int VAR_30, VAR_31 = -1;
    IWbemClassObject *VAR_32;
    ULONG VAR_33, VAR_34 = 0;
    VARIANT VAR_35;

    FUNC_22("%s, %s\n", FUNC_23(VAR_15), FUNC_23(VAR_16));

    FUNC_2( ((void*)0) );
    FUNC_3( ((void*)0), -1, ((void*)0), ((void*)0), VAR_5,
                          VAR_6, ((void*)0), VAR_2, ((void*)0) );

    VAR_20 = FUNC_1( &VAR_1, ((void*)0), VAR_0, &VAR_4,
                           (void **)&VAR_21 );
    if (VAR_20 != VAR_8) goto done;

    if (!(VAR_25 = FUNC_16( VAR_18 ))) goto done;
    VAR_20 = FUNC_12( VAR_21, VAR_25, ((void*)0), ((void*)0), ((void*)0), 0, ((void*)0), ((void*)0), &VAR_22 );
    if (VAR_20 != VAR_8) goto done;

    VAR_30 = FUNC_31( VAR_15 ) + FUNC_0(VAR_17);
    if (!(VAR_27 = FUNC_17( ((void*)0), VAR_30 ))) goto done;
    FUNC_30( VAR_27, VAR_17 );
    FUNC_29( VAR_27, VAR_15 );

    if (!(VAR_26 = FUNC_16( VAR_19 ))) goto done;
    VAR_20 = FUNC_14( VAR_22, VAR_26, VAR_27, VAR_24, ((void*)0), &VAR_23 );
    if (VAR_20 != VAR_8) goto done;

    for (;;)
    {
        FUNC_7( VAR_23, VAR_13, 1, &VAR_32, &VAR_33 );
        if (!VAR_33) break;

        if (!VAR_28 && !(VAR_28 = FUNC_24( VAR_32, VAR_16 )))
        {
            FUNC_26( VAR_7 );
            goto done;
        }
        if (FUNC_10( VAR_32, VAR_28, 0, &VAR_35, ((void*)0), ((void*)0) ) == VAR_14)
        {
            FUNC_20( &VAR_35, &VAR_35, 0, VAR_10 );
            VAR_34 = FUNC_25( FUNC_31( FUNC_19( &VAR_35 ) ), VAR_34 );
            FUNC_21( &VAR_35 );
        }
        FUNC_11( VAR_32 );
    }
    VAR_34 += 2;

    FUNC_9( VAR_23 );
    for (;;)
    {
        FUNC_7( VAR_23, VAR_13, 1, &VAR_32, &VAR_33 );
        if (!VAR_33) break;

        if (VAR_29)
        {
            FUNC_27( VAR_28, VAR_34 );
            VAR_29 = VAR_3;
        }
        if (FUNC_10( VAR_32, VAR_28, 0, &VAR_35, ((void*)0), ((void*)0) ) == VAR_14)
        {
            FUNC_20( &VAR_35, &VAR_35, 0, VAR_10 );
            FUNC_28( FUNC_19( &VAR_35 ), VAR_34 );
            FUNC_21( &VAR_35 );
        }
        FUNC_11( VAR_32 );
    }
    VAR_31 = 0;

done:
    if (VAR_23) FUNC_8( VAR_23 );
    if (VAR_22) FUNC_15( VAR_22 );
    if (VAR_21) FUNC_13( VAR_21 );
    FUNC_18( VAR_25 );
    FUNC_18( VAR_27 );
    FUNC_18( VAR_26 );
    FUNC_6( FUNC_5(), 0, VAR_28 );
    FUNC_4();
    return VAR_31;
}
