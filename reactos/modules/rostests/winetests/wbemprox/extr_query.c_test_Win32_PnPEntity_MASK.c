
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int VARIANT ;
typedef int ULONG ;
typedef int IWbemServices ;
typedef int IWbemClassObject ;
typedef int IEnumWbemClassObject ;
typedef scalar_t__ HRESULT ;
typedef scalar_t__ CIMTYPE ;
typedef int BSTR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int,int,int **,int*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int ,int ,int *,scalar_t__*,int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int *,int **) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_9 (int,char*,scalar_t__,...) ;

__attribute__((used)) static void FUNC_10( IWbemServices *VAR_6 )
{
    HRESULT VAR_7;
    IEnumWbemClassObject *VAR_8;
    IWbemClassObject *VAR_9;
    VARIANT VAR_10;
    CIMTYPE VAR_11;
    ULONG VAR_12, VAR_13;
    BSTR VAR_14;

    static WCHAR VAR_15[] = {'W','i','n','3','2','_','P','n','P','E','n','t','i','t','y',0};
    static const WCHAR VAR_16[] = {'D','e','v','i','c','e','I','d',0};

    VAR_14 = FUNC_5( VAR_15 );

    VAR_7 = FUNC_3( VAR_6, VAR_14, 0, ((void*)0), &VAR_8 );
    FUNC_9( VAR_7 == VAR_1, "got %08x\n", VAR_7 );

    FUNC_6( VAR_14 );
    VAR_14 = FUNC_5( VAR_16 );

    while (1)
    {
        VAR_7 = FUNC_0( VAR_8, 1000, 1, &VAR_9, &VAR_12 );
        FUNC_9( (VAR_12 == 1 && (VAR_7 == VAR_3 || VAR_7 == VAR_4)) ||
                (VAR_12 == 0 && (VAR_7 == VAR_3 || VAR_7 == VAR_5)),
                "got %08x with %u objects returned\n", VAR_7, VAR_12 );

        if (VAR_12 == 0)
            break;

        for (VAR_13 = 0; VAR_13 < VAR_12; ++VAR_13)
        {
            VAR_7 = FUNC_2( VAR_9, VAR_14, 0, &VAR_10, &VAR_11, ((void*)0) );
            FUNC_9( VAR_7 == VAR_1, "got %08x\n", VAR_7 );

            if (FUNC_4( VAR_7 ))
            {
                FUNC_9( FUNC_7( &VAR_10 ) == VAR_2, "unexpected variant type 0x%x\n", FUNC_7( &VAR_10 ) );
                FUNC_9( VAR_11 == VAR_0, "unexpected type 0x%x\n", VAR_11 );
                FUNC_8( &VAR_10 );
            }
        }
    }

    FUNC_6( VAR_14 );

    FUNC_1( VAR_8 );
}
