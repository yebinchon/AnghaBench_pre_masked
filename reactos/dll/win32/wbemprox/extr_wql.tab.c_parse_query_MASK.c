
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct view {int dummy; } ;
struct parser {int error; struct view** view; struct list* mem; scalar_t__ len; scalar_t__ idx; int const* cmd; } ;
struct list {int dummy; } ;
typedef int WCHAR ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct view*) ;
 int FUNC_2 (struct parser*) ;

HRESULT FUNC_3( const WCHAR *VAR_2, struct view **VAR_3, struct list *VAR_4 )
{
    struct parser VAR_5;
    int VAR_6;

    *VAR_3 = ((void*)0);

    VAR_5.cmd = VAR_2;
    VAR_5.idx = 0;
    VAR_5.len = 0;
    VAR_5.error = VAR_1;
    VAR_5.view = VAR_3;
    VAR_5.mem = VAR_4;

    VAR_6 = FUNC_2( &VAR_5 );
    FUNC_0("wql_parse returned %d\n", VAR_6);
    if (VAR_6)
    {
        if (*VAR_5.view)
        {
            FUNC_1( *VAR_5.view );
            *VAR_5.view = ((void*)0);
        }
        return VAR_5.error;
    }
    return VAR_0;
}
