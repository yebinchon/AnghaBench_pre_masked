
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
typedef int UINT ;
struct TYPE_3__ {scalar_t__ State; } ;
typedef int MSIPACKAGE ;
typedef TYPE_1__ MSIFOLDER ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int const*) ;
 TYPE_1__* FUNC_1 (int *,int const*) ;
 int * FUNC_2 (int *,int const*) ;

__attribute__((used)) static UINT FUNC_3( MSIPACKAGE *VAR_4, const WCHAR *VAR_5 )
{
    MSIFOLDER *VAR_6;
    const WCHAR *VAR_7;

    VAR_7 = FUNC_2( VAR_4, VAR_5 );
    if (!VAR_7) return VAR_0;

    VAR_6 = FUNC_1( VAR_4, VAR_5 );
    if (VAR_6->State == VAR_3)
    {
        FUNC_0( VAR_7 );
        VAR_6->State = VAR_2;
    }
    return VAR_1;
}
