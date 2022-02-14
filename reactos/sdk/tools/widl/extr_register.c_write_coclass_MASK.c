
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int attrs; } ;
typedef TYPE_1__ typelib_t ;
struct TYPE_7__ {char* name; int attrs; } ;
typedef TYPE_2__ type_t ;
typedef int UUID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int const*) ;
 void* FUNC_3 (int ,int ) ;
 unsigned int FUNC_4 (int ,int ) ;
 char* FUNC_5 (TYPE_2__ const*) ;
 int VAR_5 ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static int FUNC_7( const type_t *VAR_6, const typelib_t *VAR_7 )
{
    const UUID *VAR_8 = FUNC_3( VAR_6->attrs, VAR_2 );
    const char *VAR_9 = FUNC_3( VAR_6->attrs, VAR_0 );
    const char *VAR_10 = FUNC_3( VAR_6->attrs, VAR_1 );
    const char *VAR_11 = FUNC_3( VAR_6->attrs, VAR_4 );
    const char *VAR_12 = FUNC_5( VAR_6 );
    unsigned int VAR_13 = FUNC_4( VAR_6->attrs, VAR_3 );

    if (!VAR_8) return 0;
    if (VAR_7 && !VAR_12 && !VAR_10) return 0;
    if (!VAR_9) VAR_9 = VAR_6->name;

    FUNC_6( VAR_5, "'%s' = s '%s'\n", FUNC_2( VAR_8 ), VAR_9 );
    FUNC_6( VAR_5++, "{\n" );
    if (VAR_12) FUNC_6( VAR_5, "InprocServer32 = s '%%MODULE%%' { val ThreadingModel = s '%s' }\n",
                            VAR_12 );
    if (VAR_10) FUNC_6( VAR_5, "ProgId = s '%s'\n", VAR_10 );
    if (VAR_7)
    {
        const UUID *VAR_14 = FUNC_3( VAR_7->attrs, VAR_2 );
        FUNC_6( VAR_5, "TypeLib = s '%s'\n", FUNC_2( VAR_14 ));
        if (!VAR_13) VAR_13 = FUNC_4( VAR_7->attrs, VAR_3 );
    }
    if (VAR_13) FUNC_6( VAR_5, "Version = s '%u.%u'\n", FUNC_0(VAR_13), FUNC_1(VAR_13) );
    if (VAR_11) FUNC_6( VAR_5, "VersionIndependentProgId = s '%s'\n", VAR_11 );
    FUNC_6( --VAR_5, "}\n" );
    return 1;
}
