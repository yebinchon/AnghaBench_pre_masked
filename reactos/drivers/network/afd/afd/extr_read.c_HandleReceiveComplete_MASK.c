
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_5__ {scalar_t__ Content; scalar_t__ Size; } ;
struct TYPE_6__ {void* TdiReceiveClosed; TYPE_1__ Recv; scalar_t__ LastReceiveStatus; } ;
typedef TYPE_2__* PAFD_FCB ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 void* VAR_1 ;

__attribute__((used)) static VOID FUNC_2( PAFD_FCB VAR_2, NTSTATUS VAR_3, ULONG_PTR VAR_4 )
{
    VAR_2->LastReceiveStatus = VAR_3;


    if (VAR_2->TdiReceiveClosed)
    {

    }

    else if (VAR_3 == VAR_0)
    {
        VAR_2->Recv.Content += VAR_4;
        FUNC_0(VAR_2->Recv.Content <= VAR_2->Recv.Size);


        if (VAR_4 == 0)
        {

            VAR_2->TdiReceiveClosed = VAR_1;
        }
        else
        {

            FUNC_1(VAR_2);
        }
    }

    else
    {

        VAR_2->TdiReceiveClosed = VAR_1;
    }
}
