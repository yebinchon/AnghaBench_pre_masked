
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* state; int def_border_radius; void* border_radius; int def_border; void* border; } ;
typedef TYPE_1__ widget ;


 scalar_t__ FUNC_0 (char const*,char const*) ;
 void* FUNC_1 (TYPE_1__*,char*,int ) ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3 ( widget *VAR_0, const char *VAR_1 )
{
    if ( FUNC_0 ( VAR_0->state, VAR_1 ) ) {
        VAR_0->state = VAR_1;

        VAR_0->border = FUNC_1 ( VAR_0, "border", VAR_0->def_border );
        VAR_0->border_radius = FUNC_1 ( VAR_0, "border-radius", VAR_0->def_border_radius );

        FUNC_2 ( VAR_0 );
    }
}
