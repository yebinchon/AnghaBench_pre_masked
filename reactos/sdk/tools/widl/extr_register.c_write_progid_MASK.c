
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int attrs; } ;
typedef TYPE_1__ type_t ;
typedef int UUID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*) ;
 void* FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

__attribute__((used)) static int FUNC_4( const type_t *VAR_5 )
{
    const UUID *VAR_6 = FUNC_1( VAR_5->attrs, VAR_2 );
    const char *VAR_7 = FUNC_1( VAR_5->attrs, VAR_0 );
    const char *VAR_8 = FUNC_1( VAR_5->attrs, VAR_1 );
    const char *VAR_9 = FUNC_1( VAR_5->attrs, VAR_3 );

    if (!VAR_6) return 0;
    if (!VAR_7) VAR_7 = VAR_5->name;

    if (VAR_8)
    {
        FUNC_2( VAR_4, "'%s' = s '%s'\n", VAR_8, VAR_7 );
        FUNC_2( VAR_4++, "{\n" );
        FUNC_2( VAR_4, "CLSID = s '%s'\n", FUNC_0( VAR_6 ) );
        FUNC_2( --VAR_4, "}\n" );
    }
    if (VAR_9)
    {
        FUNC_2( VAR_4, "'%s' = s '%s'\n", VAR_9, VAR_7 );
        FUNC_2( VAR_4++, "{\n" );
        FUNC_2( VAR_4, "CLSID = s '%s'\n", FUNC_0( VAR_6 ) );
        if (VAR_8 && FUNC_3( VAR_8, VAR_9 )) FUNC_2( VAR_4, "CurVer = s '%s'\n", VAR_8 );
        FUNC_2( --VAR_4, "}\n" );
    }
    return 1;
}
