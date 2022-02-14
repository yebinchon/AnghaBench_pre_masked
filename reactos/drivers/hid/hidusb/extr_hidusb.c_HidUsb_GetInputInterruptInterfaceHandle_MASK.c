
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ULONG ;
struct TYPE_6__ {size_t NumberOfPipes; TYPE_1__* Pipes; } ;
struct TYPE_5__ {scalar_t__ PipeType; int EndpointAddress; } ;
typedef TYPE_1__* PUSBD_PIPE_INFORMATION ;
typedef TYPE_2__* PUSBD_INTERFACE_INFORMATION ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

PUSBD_PIPE_INFORMATION
FUNC_1(
    PUSBD_INTERFACE_INFORMATION VAR_2)
{
    ULONG VAR_3;




    FUNC_0(VAR_2->NumberOfPipes);

    for (VAR_3 = 0; VAR_3 < VAR_2->NumberOfPipes; VAR_3++)
    {

        if (VAR_2->Pipes[VAR_3].PipeType == VAR_1 && (VAR_2->Pipes[VAR_3].EndpointAddress & VAR_0))
        {



            return &VAR_2->Pipes[VAR_3];
        }
    }




    return ((void*)0);
}
