
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_5__ {int Inf; } ;
typedef int INT ;
typedef TYPE_1__ INFCONTEXT ;
typedef unsigned int DWORD ;


 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (TYPE_1__*,int,int *) ;
 int FUNC_3 (TYPE_1__*,int,char*,unsigned int,unsigned int*) ;
 char* FUNC_4 (int ,int ,unsigned int*) ;
 int FUNC_5 (char*,char const*,unsigned int) ;

WCHAR *FUNC_6( INFCONTEXT *VAR_0 )
{
    const WCHAR *VAR_1;
    WCHAR *VAR_2, *VAR_3;
    INT VAR_4;
    unsigned int VAR_5;
    DWORD VAR_6;

    if (!FUNC_2( VAR_0, 1, &VAR_4 )) return ((void*)0);
    if (!(VAR_1 = FUNC_4( VAR_0->Inf, VAR_4, &VAR_5 ))) return ((void*)0);
    if (!FUNC_3( VAR_0, 2, ((void*)0), 0, &VAR_6 )) VAR_6 = 0;
    if (!(VAR_3 = FUNC_1( FUNC_0(), 0, (VAR_5+VAR_6+1) * sizeof(WCHAR) ))) return ((void*)0);
    FUNC_5( VAR_3, VAR_1, VAR_5 * sizeof(WCHAR) );
    VAR_2 = VAR_3 + VAR_5;
    if (VAR_6 && VAR_2 > VAR_3 && VAR_2[-1] != '\\') *VAR_2++ = '\\';
    if (!FUNC_3( VAR_0, 2, VAR_2, VAR_6, ((void*)0) )) *VAR_2 = 0;
    return VAR_3;
}
