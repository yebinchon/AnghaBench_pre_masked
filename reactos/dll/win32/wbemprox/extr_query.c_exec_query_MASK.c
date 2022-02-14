
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct query {int view; int mem; } ;
typedef int WCHAR ;
typedef int IEnumWbemClassObject ;
typedef scalar_t__ HRESULT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct query*,void**) ;
 scalar_t__ VAR_1 ;
 struct query* FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int const*,int *,int *) ;
 int FUNC_4 (struct query*) ;

HRESULT FUNC_5( const WCHAR *VAR_2, IEnumWbemClassObject **VAR_3 )
{
    HRESULT VAR_4;
    struct query *VAR_5;

    *VAR_3 = ((void*)0);
    if (!(VAR_5 = FUNC_1())) return VAR_0;
    VAR_4 = FUNC_3( VAR_2, &VAR_5->view, &VAR_5->mem );
    if (VAR_4 != VAR_1) goto done;
    VAR_4 = FUNC_2( VAR_5->view );
    if (VAR_4 != VAR_1) goto done;
    VAR_4 = FUNC_0( VAR_5, (void **)VAR_3 );

done:
    FUNC_4( VAR_5 );
    return VAR_4;
}
