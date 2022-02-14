
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* tempdir; struct TYPE_5__* display_name; struct TYPE_5__* application; struct TYPE_5__* manifest; struct TYPE_5__* feature; } ;
typedef TYPE_1__ MSIASSEMBLY ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_2( MSIASSEMBLY *VAR_0 )
{
    FUNC_1( VAR_0->feature );
    FUNC_1( VAR_0->manifest );
    FUNC_1( VAR_0->application );
    FUNC_1( VAR_0->display_name );
    if (VAR_0->tempdir) FUNC_0( VAR_0->tempdir );
    FUNC_1( VAR_0->tempdir );
    FUNC_1( VAR_0 );
}
