
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32_t ;
struct TYPE_6__ {int Event; } ;
typedef TYPE_1__ sys_sem_t ;
typedef int UINT64 ;
struct TYPE_7__ {int QuadPart; } ;
typedef int * PVOID ;
typedef scalar_t__ NTSTATUS ;
typedef TYPE_2__ LARGE_INTEGER ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ FUNC_3 (int,int **,int ,int ,int ,int ,TYPE_2__*,int *) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

u32_t
FUNC_5(sys_sem_t* VAR_9, u32_t VAR_10)
{
    LARGE_INTEGER VAR_11, VAR_12, VAR_13;
    UINT64 VAR_14;
    NTSTATUS VAR_15;
    PVOID VAR_16[] = {&VAR_9->Event, &VAR_7};

    VAR_11.QuadPart = FUNC_1(VAR_10, -10000);

    FUNC_2(&VAR_12);

    VAR_15 = FUNC_3(2,
                                      VAR_16,
                                      VAR_8,
                                      VAR_0,
                                      VAR_2,
                                      VAR_1,
                                      VAR_10 != 0 ? &VAR_11 : ((void*)0),
                                      ((void*)0));
    if (VAR_15 == VAR_4)
    {
        FUNC_2(&VAR_13);
        VAR_14 = VAR_13.QuadPart - VAR_12.QuadPart;
        VAR_14 /= 10000;

        return VAR_14;
    }
    else if (VAR_15 == VAR_5)
    {

        FUNC_4(VAR_3);


        FUNC_0(VAR_1);

        return 0;
    }

    return VAR_6;
}
