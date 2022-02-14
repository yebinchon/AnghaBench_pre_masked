
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int attrs; } ;
typedef TYPE_1__ typelib_t ;
struct TYPE_7__ {int name; int attrs; } ;
typedef TYPE_2__ type_t ;
typedef int UUID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int const*) ;
 int * FUNC_3 (int ,int ) ;
 unsigned int FUNC_4 (int ,int ) ;
 int VAR_4 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__ const*) ;
 int FUNC_7 (int ,char*,...) ;

__attribute__((used)) static void FUNC_8( const type_t *VAR_5, const typelib_t *VAR_6 )
{
    const UUID *VAR_7 = FUNC_3( VAR_6->attrs, VAR_2 );
    const UUID *VAR_8 = FUNC_3( VAR_5->attrs, VAR_2 );
    unsigned int VAR_9 = FUNC_4( VAR_6->attrs, VAR_3 );

    if (!VAR_8) return;
    if (!FUNC_6( VAR_5 )) return;
    if (!FUNC_5( VAR_5->attrs, VAR_1 ) && !FUNC_5( VAR_5->attrs, VAR_0 ))
        return;
    FUNC_7( VAR_4, "'%s' = s '%s'\n", FUNC_2( VAR_8 ), VAR_5->name );
    FUNC_7( VAR_4, "{\n" );
    VAR_4++;
    FUNC_7( VAR_4, "ProxyStubClsid = s '{00020424-0000-0000-C000-000000000046}'\n" );
    FUNC_7( VAR_4, "ProxyStubClsid32 = s '{00020424-0000-0000-C000-000000000046}'\n" );
    if (VAR_9)
        FUNC_7( VAR_4, "TypeLib = s '%s' { val Version = s '%u.%u' }\n",
                 FUNC_2( VAR_7 ), FUNC_0(VAR_9), FUNC_1(VAR_9) );
    else
        FUNC_7( VAR_4, "TypeLib = s '%s'", FUNC_2( VAR_7 ));
    VAR_4--;
    FUNC_7( VAR_4, "}\n" );
}
