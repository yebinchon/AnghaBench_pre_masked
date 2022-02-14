
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {scalar_t__ proplist; } ;
typedef scalar_t__ WCHAR ;
typedef int DWORD ;
typedef int * BSTR ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__*,int *) ;
 int VAR_0 ;
 int * FUNC_2 (scalar_t__*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static BSTR FUNC_4( const struct view *VAR_1 )
{
    WCHAR VAR_2[VAR_0 + 1], *VAR_3;
    DWORD VAR_4 = FUNC_0( VAR_2 );

    if (VAR_1->proplist) return ((void*)0);

    if (!(FUNC_1( VAR_2, &VAR_4 ))) return ((void*)0);
    for (VAR_3 = VAR_2; *VAR_3; VAR_3++) *VAR_3 = FUNC_3( *VAR_3 );
    return FUNC_2( VAR_2 );
}
