
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_5__ {int ** DriverContext; } ;
struct TYPE_6__ {TYPE_1__ Overlay; } ;
struct TYPE_7__ {int * MdlAddress; TYPE_2__ Tail; } ;
typedef TYPE_3__* PIRP ;
typedef int PIO_STACK_LOCATION ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;

VOID FUNC_7( PIRP VAR_1, PIO_STACK_LOCATION VAR_2 )
{
    FUNC_0(VAR_1->MdlAddress);
    FUNC_0(VAR_1->Tail.Overlay.DriverContext[0]);

    FUNC_6(VAR_2);


    if (VAR_1->Tail.Overlay.DriverContext[1] != ((void*)0))
    {
        FUNC_5(VAR_1->Tail.Overlay.DriverContext[1],
                      VAR_1->Tail.Overlay.DriverContext[0],
                      FUNC_3(VAR_1->MdlAddress));
    }

    FUNC_1(VAR_1->Tail.Overlay.DriverContext[0], VAR_0);
    FUNC_4( VAR_1->MdlAddress );
    FUNC_2( VAR_1->MdlAddress );
    VAR_1->MdlAddress = ((void*)0);
}
