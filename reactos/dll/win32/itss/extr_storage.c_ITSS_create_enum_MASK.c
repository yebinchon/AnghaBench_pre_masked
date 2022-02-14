
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int ref; int * current; int * last; int * first; TYPE_1__ IEnumSTATSTG_iface; } ;
typedef TYPE_2__ IEnumSTATSTG_Impl ;


 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (char*,TYPE_2__*) ;

__attribute__((used)) static IEnumSTATSTG_Impl *FUNC_4( void )
{
    IEnumSTATSTG_Impl *VAR_1;

    VAR_1 = FUNC_1( FUNC_0(), 0, sizeof (IEnumSTATSTG_Impl) );
    VAR_1->IEnumSTATSTG_iface.lpVtbl = &VAR_0;
    VAR_1->ref = 1;
    VAR_1->first = ((void*)0);
    VAR_1->last = ((void*)0);
    VAR_1->current = ((void*)0);

    FUNC_2();
    FUNC_3(" -> %p\n", VAR_1 );

    return VAR_1;
}
