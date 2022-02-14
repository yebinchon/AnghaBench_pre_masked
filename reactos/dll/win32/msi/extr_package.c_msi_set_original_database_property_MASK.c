
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
typedef int UINT ;
struct TYPE_4__ {char* path; } ;
typedef TYPE_1__ MSIDATABASE ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (char const*,int,char*,int *) ;
 int FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 char* FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,int ,char const*,int) ;
 int VAR_2 ;

UINT FUNC_6( MSIDATABASE *VAR_3, const WCHAR *VAR_4 )
{
    UINT VAR_5;

    if (FUNC_2( VAR_4, VAR_1 ))
        VAR_5 = FUNC_5( VAR_3, VAR_2, VAR_4, -1 );
    else if (VAR_4[0] == '#')
        VAR_5 = FUNC_5( VAR_3, VAR_2, VAR_3->path, -1 );
    else
    {
        DWORD VAR_6;
        WCHAR *VAR_7;

        if (!(VAR_6 = FUNC_0( VAR_4, 0, ((void*)0), ((void*)0) ))) return FUNC_1();
        if (!(VAR_7 = FUNC_3( VAR_6 * sizeof(WCHAR) ))) return VAR_0;
        VAR_6 = FUNC_0( VAR_4, VAR_6, VAR_7, ((void*)0) );
        VAR_5 = FUNC_5( VAR_3, VAR_2, VAR_7, VAR_6 );
        FUNC_4( VAR_7 );
    }
    return VAR_5;
}
