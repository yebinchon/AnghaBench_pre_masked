
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
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
 char const* VAR_4 ;

__attribute__((used)) static void FUNC_6( IWbemServices *VAR_5 )
{
    static const WCHAR VAR_6[] =
        {'S','E','L','E','C','T',' ','*',' ','F','R','O','M',' ','W','i','n','3','2','_',
         'P','r','o','c','e','s','s',0};
    BSTR VAR_7 = FUNC_2( VAR_4 ), VAR_8 = FUNC_2( VAR_6 );
    HRESULT VAR_9;

    VAR_9 = FUNC_1( VAR_5, VAR_7, VAR_8, 0, ((void*)0), ((void*)0) );
    FUNC_5( VAR_9 == VAR_1, "got %08x\n", VAR_9 );

    VAR_9 = FUNC_1( VAR_5, VAR_7, VAR_8, 0, ((void*)0), &VAR_3 );
    FUNC_5( VAR_9 == VAR_0 || FUNC_4(VAR_9 == VAR_2), "got %08x\n", VAR_9 );

    VAR_9 = FUNC_0( VAR_5, ((void*)0) );
    FUNC_5( VAR_9 == VAR_1, "got %08x\n", VAR_9 );

    VAR_9 = FUNC_0( VAR_5, &VAR_3 );
    FUNC_5( VAR_9 == VAR_0, "got %08x\n", VAR_9 );

    FUNC_3( VAR_7 );
    FUNC_3( VAR_8 );
}
