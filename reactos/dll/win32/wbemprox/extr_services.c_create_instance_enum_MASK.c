
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct path {int dummy; } ;
typedef int WCHAR ;
typedef int IEnumWbemClassObject ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *,int **) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (struct path const*) ;

__attribute__((used)) static HRESULT FUNC_3( const struct path *VAR_1, IEnumWbemClassObject **VAR_2 )
{
    WCHAR *VAR_3;
    HRESULT VAR_4;

    if (!(VAR_3 = FUNC_2( VAR_1 ))) return VAR_0;
    VAR_4 = FUNC_0( VAR_3, VAR_2 );
    FUNC_1( VAR_3 );
    return VAR_4;
}
