
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int VOID ;
typedef int ULONG ;
struct TYPE_8__ {int ResourceThreadId; } ;
struct TYPE_9__ {TYPE_1__ LowIoContext; scalar_t__ FcbPagingIoResourceAcquired; scalar_t__ FcbResourceAcquired; } ;
typedef TYPE_2__* PRX_CONTEXT ;
typedef int PCSTR ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *,int ) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 int FUNC_5 (TYPE_2__*,int *,int ) ;
 int * VAR_2 ;

VOID
FUNC_6(
    PRX_CONTEXT VAR_3,
    BOOLEAN VAR_4,
    ULONG VAR_5,
    PCSTR VAR_6,
    ULONG VAR_7)
{
    VAR_1;

    FUNC_1();

    FUNC_0(VAR_3 != ((void*)0));
    FUNC_0(VAR_2 != ((void*)0));


    if (VAR_3->FcbResourceAcquired)
    {

        if (VAR_4)
        {
            FUNC_3(VAR_3, VAR_2, VAR_3->LowIoContext.ResourceThreadId);
        }
        else
        {
            FUNC_2(VAR_3, VAR_2);
        }

        VAR_3->FcbResourceAcquired = VAR_0;
    }


    if (VAR_3->FcbPagingIoResourceAcquired)
    {

        if (VAR_4)
        {
            FUNC_5(VAR_3, VAR_2, VAR_3->LowIoContext.ResourceThreadId);
        }
        else
        {
            FUNC_4(VAR_3, VAR_2);
        }


    }
}
