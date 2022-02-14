
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {scalar_t__ proplist; } ;
typedef char WCHAR ;
typedef scalar_t__ UINT ;
typedef int * BSTR ;


 int * FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (struct view const*) ;
 int * FUNC_4 (struct view const*,scalar_t__,char const*) ;
 int * FUNC_5 (struct view const*) ;
 int FUNC_6 (int *,char const*,int *,int *,int *) ;
 scalar_t__ FUNC_7 (char const*) ;

__attribute__((used)) static BSTR FUNC_8( const struct view *VAR_0, UINT VAR_1, const WCHAR *VAR_2 )
{
    static const WCHAR VAR_3[] = {'\\','\\','%','s','\\','%','s',':','%','s',0};
    BSTR VAR_4, VAR_5 = ((void*)0), VAR_6 = ((void*)0), VAR_7 = ((void*)0);
    UINT VAR_8;

    if (VAR_0->proplist) return ((void*)0);

    if (!(VAR_4 = FUNC_5( VAR_0 ))) return ((void*)0);
    if (!(VAR_5 = FUNC_3( VAR_0 ))) goto done;
    if (!(VAR_6 = FUNC_4( VAR_0, VAR_1, VAR_2 ))) goto done;

    VAR_8 = FUNC_7( VAR_3 ) + FUNC_2( VAR_4 ) + FUNC_2( VAR_5 ) + FUNC_2( VAR_6 );
    if (!(VAR_7 = FUNC_0( ((void*)0), VAR_8 ))) goto done;
    FUNC_6( VAR_7, VAR_3, VAR_4, VAR_5, VAR_6 );

done:
    FUNC_1( VAR_4 );
    FUNC_1( VAR_5 );
    FUNC_1( VAR_6 );
    return VAR_7;
}
