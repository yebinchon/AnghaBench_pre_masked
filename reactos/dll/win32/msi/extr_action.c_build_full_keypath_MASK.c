
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_6__ {TYPE_1__* assembly; } ;
struct TYPE_5__ {char const* display_name; } ;
typedef int MSIPACKAGE ;
typedef TYPE_2__ MSICOMPONENT ;
typedef int DWORD ;


 char* FUNC_0 (int) ;
 char* FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static WCHAR *FUNC_5( MSIPACKAGE *VAR_0, MSICOMPONENT *VAR_1 )
{
    if (VAR_1->assembly)
    {
        const WCHAR VAR_2[] = {'<','\\',0};
        DWORD VAR_3 = FUNC_4( VAR_2 ) + FUNC_4( VAR_1->assembly->display_name );
        WCHAR *VAR_4 = FUNC_0( (VAR_3 + 1) * sizeof(WCHAR) );

        if (VAR_4)
        {
            FUNC_3( VAR_4, VAR_2 );
            FUNC_2( VAR_4, VAR_1->assembly->display_name );
        }
        return VAR_4;
    }
    return FUNC_1( VAR_0, VAR_1 );
}
