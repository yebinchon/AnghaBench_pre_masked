
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int Context; int ProductCode; } ;
typedef TYPE_1__ MSIPACKAGE ;
typedef int HKEY ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static WCHAR *FUNC_4( MSIPACKAGE *VAR_2 )
{
    HKEY VAR_3;
    WCHAR *VAR_4;

    if (!VAR_2->ProductCode) return ((void*)0);
    if (FUNC_0( VAR_2->ProductCode, VAR_2->Context, ((void*)0), &VAR_3, VAR_0 )) return ((void*)0);
    if ((VAR_4 = FUNC_3( VAR_3, VAR_1 )) && !VAR_4[0])
    {
        FUNC_2( VAR_4 );
        VAR_4 = ((void*)0);
    }
    FUNC_1( VAR_3 );
    return VAR_4;
}
