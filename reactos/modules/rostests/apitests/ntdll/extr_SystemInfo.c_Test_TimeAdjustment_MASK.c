
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ULONG ;
typedef int TimeInfoOrg ;
struct TYPE_6__ {int TimeAdjustment; int Enable; int TimeIncrement; } ;
struct TYPE_5__ {int TimeAdjustment; int Enable; } ;
typedef int SetTimeInfo ;
typedef TYPE_1__ SYSTEM_SET_TIME_ADJUST_INFORMATION ;
typedef TYPE_2__ SYSTEM_QUERY_TIME_ADJUST_INFORMATION ;
typedef scalar_t__ NTSTATUS ;
typedef int GetTimeInfo ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*,int,int *) ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*,int) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int,char*,scalar_t__) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static
void
FUNC_8(void)
{
    SYSTEM_QUERY_TIME_ADJUST_INFORMATION VAR_8, VAR_9;
    SYSTEM_SET_TIME_ADJUST_INFORMATION VAR_10;
    NTSTATUS VAR_11;
    ULONG VAR_12;
    BOOLEAN VAR_13;

    VAR_10.TimeAdjustment = 0;
    VAR_10.Enable = 0;


    VAR_11 = FUNC_1(VAR_6,
                                      &VAR_8,
                                      sizeof(VAR_8),
                                      &VAR_12);


    VAR_11 = FUNC_2(VAR_6,
                                    &VAR_10,
                                    sizeof(VAR_10));
    FUNC_6(VAR_11, VAR_4);


    VAR_11 = FUNC_3(VAR_1, VAR_7, VAR_0, &VAR_13);
    if (!FUNC_0(VAR_11))
    {
        FUNC_7("Cannot acquire SeSystemTimePrivilege\n");
        return;
    }


    VAR_11 = FUNC_2(VAR_6,
                                    &VAR_10,
                                    sizeof(VAR_10) + 1);
    FUNC_6(VAR_11, VAR_2);


    VAR_11 = FUNC_2(VAR_6,
                                    &VAR_10,
                                    sizeof(VAR_10));
    FUNC_6(VAR_11, VAR_3);


    VAR_10.TimeAdjustment = -1;
    VAR_10.Enable = 0;
    VAR_11 = FUNC_2(VAR_6,
                                    &VAR_10,
                                    sizeof(VAR_10));
    FUNC_6(VAR_11, VAR_5);


    VAR_11 = FUNC_1(VAR_6,
                                      &VAR_9,
                                      sizeof(VAR_9),
                                      &VAR_12);
    FUNC_6(VAR_11, VAR_5);
    FUNC_5(VAR_9.TimeAdjustment, -1);
    FUNC_5(VAR_9.Enable, 0);


    VAR_10.TimeAdjustment = -1;
    VAR_10.Enable = 1;
    VAR_11 = FUNC_2(VAR_6,
                                    &VAR_10,
                                    sizeof(VAR_10));
    FUNC_6(VAR_11, VAR_5);


    VAR_11 = FUNC_1(VAR_6,
                                      &VAR_9,
                                      sizeof(VAR_9),
                                      &VAR_12);
    FUNC_6(VAR_11, VAR_5);
    FUNC_5(VAR_9.TimeAdjustment, VAR_9.TimeIncrement);
    FUNC_5(VAR_9.Enable, 1);


    VAR_10.TimeAdjustment = VAR_8.TimeAdjustment;
    VAR_10.Enable = VAR_8.Enable;
    VAR_11 = FUNC_2(VAR_6,
                                    &VAR_10,
                                    sizeof(VAR_10));
    FUNC_6(VAR_11, VAR_5);

    VAR_11 = FUNC_3(VAR_1, VAR_13, VAR_0, &VAR_13);
    FUNC_4(VAR_11 == VAR_5, "RtlAdjustPrivilege returned %lx\n", VAR_11);
}
