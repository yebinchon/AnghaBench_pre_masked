
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef scalar_t__ ULONG ;
typedef int IWbemServices ;
typedef scalar_t__ HRESULT ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ,int ,int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int,char*,scalar_t__) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 char const* VAR_5 ;

__attribute__((used)) static void FUNC_6( IWbemServices *VAR_6 )
{
    static const WCHAR VAR_7[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','W','i','n','3','2','_',
         'D','e','v','i','c','e','C','h','a','n','g','e','E','v','e','n','t',0};
    BSTR VAR_8 = FUNC_2( VAR_5 ), VAR_9 = FUNC_2( VAR_7 );
    ULONG VAR_10;
    HRESULT VAR_11;

    VAR_11 = FUNC_1( VAR_6, VAR_8, VAR_9, 0, ((void*)0), ((void*)0) );
    FUNC_5( VAR_11 == VAR_1, "got %08x\n", VAR_11 );

    VAR_10 = VAR_4;
    VAR_11 = FUNC_1( VAR_6, VAR_8, VAR_9, 0, ((void*)0), &VAR_3 );
    FUNC_5( VAR_11 == VAR_0 || FUNC_4(VAR_11 == VAR_2), "got %08x\n", VAR_11 );
    FUNC_5( VAR_4 > VAR_10 || FUNC_4(!VAR_4), "got %u refs\n", VAR_4 );

    VAR_11 = FUNC_0( VAR_6, &VAR_3 );
    FUNC_5( VAR_11 == VAR_0 || FUNC_4(VAR_11 == VAR_2), "got %08x\n", VAR_11 );

    FUNC_3( VAR_8 );
    FUNC_3( VAR_9 );
}
