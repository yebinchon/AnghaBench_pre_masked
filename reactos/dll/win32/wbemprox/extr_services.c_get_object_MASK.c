
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int class; } ;
typedef int WCHAR ;
typedef int IWbemClassObject ;
typedef int IEnumWbemClassObject ;
typedef scalar_t__ HRESULT ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int ,int *,int ,int *,int **) ;
 scalar_t__ FUNC_2 (struct path*,int **) ;
 int FUNC_3 (struct path*) ;
 scalar_t__ FUNC_4 (int const*,struct path**) ;

HRESULT FUNC_5( const WCHAR *VAR_1, IWbemClassObject **VAR_2 )
{
    IEnumWbemClassObject *VAR_3;
    struct path *VAR_4;
    HRESULT VAR_5;

    VAR_5 = FUNC_4( VAR_1, &VAR_4 );
    if (VAR_5 != VAR_0) return VAR_5;

    VAR_5 = FUNC_2( VAR_4, &VAR_3 );
    if (VAR_5 != VAR_0)
    {
        FUNC_3( VAR_4 );
        return VAR_5;
    }
    VAR_5 = FUNC_1( VAR_4->class, VAR_3, 0, ((void*)0), VAR_2 );
    FUNC_0( VAR_3 );
    FUNC_3( VAR_4 );
    return VAR_5;
}
