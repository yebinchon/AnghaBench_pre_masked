
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int name; int attrs; } ;
typedef TYPE_1__ type_t ;
typedef int UUID ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (int const*) ;
 int * FUNC_2 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__ const*) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (TYPE_1__ const*) ;

__attribute__((used)) static void FUNC_7( const type_t *VAR_2, const type_t *VAR_3 )
{
    const UUID *VAR_4 = FUNC_2( VAR_2->attrs, VAR_0 );
    const UUID *VAR_5 = FUNC_2( VAR_3->attrs, VAR_0 );

    if (!VAR_4) return;
    if (!FUNC_4( VAR_2 )) return;
    if (!FUNC_6(VAR_2))
    {
        FUNC_5( VAR_1, "'%s' = s '%s'\n", FUNC_1( VAR_4 ), VAR_2->name );
        return;
    }
    if (FUNC_3( VAR_2->attrs )) return;
    FUNC_5( VAR_1, "'%s' = s '%s'\n", FUNC_1( VAR_4 ), VAR_2->name );
    FUNC_5( VAR_1, "{\n" );
    VAR_1++;
    FUNC_5( VAR_1, "NumMethods = s %u\n", FUNC_0( VAR_2 ));
    FUNC_5( VAR_1, "ProxyStubClsid32 = s '%s'\n", FUNC_1( VAR_5 ));
    VAR_1--;
    FUNC_5( VAR_1, "}\n" );
}
