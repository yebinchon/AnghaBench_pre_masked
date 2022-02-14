
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int SAFEARRAY ;
typedef scalar_t__ LONG ;
typedef int IWbemClassObject ;
typedef int BSTR ;


 scalar_t__ FUNC_0 (int *,int *,int ,int *,int **) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__*,int *) ;
 int FUNC_3 (int *,int,scalar_t__*) ;
 int VAR_1 ;
 int FUNC_4 (int ,int const*) ;
 int * FUNC_5 (int ) ;

__attribute__((used)) static WCHAR *FUNC_6( IWbemClassObject *VAR_2, const WCHAR *VAR_3 )
{
    SAFEARRAY *VAR_4;
    WCHAR *VAR_5 = ((void*)0);
    LONG VAR_6, VAR_7 = 0;
    BSTR VAR_8;

    if (FUNC_0( VAR_2, ((void*)0), VAR_1, ((void*)0), &VAR_4 ) != VAR_0) return ((void*)0);

    FUNC_3( VAR_4, 1, &VAR_7 );
    for (VAR_6 = 0; VAR_6 <= VAR_7; VAR_6++)
    {
        FUNC_2( VAR_4, &VAR_6, &VAR_8 );
        if (!FUNC_4( VAR_8, VAR_3 ))
        {
            VAR_5 = FUNC_5( VAR_8 );
            break;
        }
    }
    FUNC_1( VAR_4 );
    return VAR_5;
}
