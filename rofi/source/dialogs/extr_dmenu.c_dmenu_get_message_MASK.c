
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ message; } ;
typedef int Mode ;
typedef TYPE_1__ DmenuModePrivateData ;


 char* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int const*) ;

__attribute__((used)) static char *FUNC_2 ( const Mode *VAR_0 )
{
    DmenuModePrivateData *VAR_1 = (DmenuModePrivateData *) FUNC_1 ( VAR_0 );
    if ( VAR_1->message ) {
        return FUNC_0 ( VAR_1->message );
    }
    return ((void*)0);
}
