
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int VARIANT ;
typedef int ULONG ;
typedef int SAFEARRAY ;
typedef int IWbemServices ;
typedef int IWbemClassObject ;
typedef int IEnumWbemClassObject ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 int FUNC_0 (int *,int,int,int **,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int *,int **) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int ,int *,int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int VAR_1 ;
 int FUNC_9 (int,char*,scalar_t__) ;
 char const* VAR_2 ;

__attribute__((used)) static void FUNC_10( IWbemServices *VAR_3 )
{
    static const WCHAR VAR_4[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','W','i','n','3','2','_',
         'O','p','e','r','a','t','i','n','g','S','y','s','t','e','m',0};
    BSTR VAR_5 = FUNC_6( VAR_2 ), VAR_6 = FUNC_6( VAR_4 );
    IEnumWbemClassObject *VAR_7;
    HRESULT VAR_8;

    VAR_8 = FUNC_4( VAR_3, VAR_5, VAR_6, 0, ((void*)0), &VAR_7 );
    FUNC_9( VAR_8 == VAR_0, "got %08x\n", VAR_8 );

    for (;;)
    {
        IWbemClassObject *VAR_9;
        SAFEARRAY *VAR_10;
        ULONG VAR_11;
        VARIANT VAR_12;

        FUNC_0( VAR_7, 10000, 1, &VAR_9, &VAR_11 );
        if (!VAR_11) break;

        FUNC_8( &VAR_12 );
        VAR_8 = FUNC_2( VAR_9, ((void*)0), VAR_1, &VAR_12, &VAR_10 );
        FUNC_9( VAR_8 == VAR_0, "got %08x\n", VAR_8 );

        FUNC_5( VAR_10 );
        FUNC_3( VAR_9 );
    }
    FUNC_1( VAR_7 );
    FUNC_7( VAR_6 );
    FUNC_7( VAR_5 );
}
