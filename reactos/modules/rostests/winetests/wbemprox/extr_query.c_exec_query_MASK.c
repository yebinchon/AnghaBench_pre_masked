
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int VARIANT ;
typedef int ULONG ;
typedef int LONG ;
typedef int IWbemServices ;
typedef int IWbemClassObject ;
typedef int IEnumWbemClassObject ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 int FUNC_0 (int *,int,int,int **,int *) ;
 scalar_t__ FUNC_1 (int *,char const*,int ,int *,int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int,int *,int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int ) ;
 char const* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (char*,int ) ;
 int FUNC_9 (char const*) ;
 char const* VAR_4 ;

__attribute__((used)) static HRESULT FUNC_10( IWbemServices *VAR_5, const WCHAR *VAR_6, IEnumWbemClassObject **VAR_7 )
{
    static const WCHAR VAR_8[] = {'C','a','p','t','i','o','n',0};
    static const WCHAR VAR_9[] = {'D','e','s','c','r','i','p','t','i','o','n',0};
    HRESULT VAR_10;
    IWbemClassObject *VAR_11;
    BSTR VAR_12 = FUNC_4( VAR_4 ), VAR_13 = FUNC_4( VAR_6 );
    LONG VAR_14 = VAR_2 | VAR_1;
    ULONG VAR_15;

    VAR_10 = FUNC_3( VAR_5, VAR_12, VAR_13, VAR_14, ((void*)0), VAR_7 );
    if (VAR_10 == VAR_0)
    {
        FUNC_8("%s\n", FUNC_9(VAR_6));
        for (;;)
        {
            VARIANT VAR_16;

            FUNC_0( *VAR_7, 10000, 1, &VAR_11, &VAR_15 );
            if (!VAR_15) break;

            if (FUNC_1( VAR_11, VAR_8, 0, &VAR_16, ((void*)0), ((void*)0) ) == VAR_3)
            {
                FUNC_8("caption: %s\n", FUNC_9(FUNC_6(&VAR_16)));
                FUNC_7( &VAR_16 );
            }
            if (FUNC_1( VAR_11, VAR_9, 0, &VAR_16, ((void*)0), ((void*)0) ) == VAR_3)
            {
                FUNC_8("description: %s\n", FUNC_9(FUNC_6(&VAR_16)));
                FUNC_7( &VAR_16 );
            }
            FUNC_2( VAR_11 );
        }
    }
    FUNC_5( VAR_12 );
    FUNC_5( VAR_13 );
    return VAR_10;
}
