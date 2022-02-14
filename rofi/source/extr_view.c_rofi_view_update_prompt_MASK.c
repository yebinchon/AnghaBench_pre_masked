
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ prompt; int sw; } ;
typedef TYPE_1__ RofiViewState ;


 char* FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char const*) ;

__attribute__((used)) static void FUNC_2 ( RofiViewState *VAR_0 )
{
    if ( VAR_0->prompt ) {
        const char *VAR_1 = FUNC_0 ( VAR_0->sw );
        FUNC_1 ( VAR_0->prompt, VAR_1 );
    }
}
