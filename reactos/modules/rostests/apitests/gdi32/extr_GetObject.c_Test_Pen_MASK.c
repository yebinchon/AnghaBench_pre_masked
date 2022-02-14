
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ lopnStyle; } ;
typedef TYPE_1__ LOGPEN ;
typedef scalar_t__ HPEN ;
typedef int HANDLE ;
typedef int BITMAP ;


 scalar_t__ FUNC_0 (scalar_t__,int,int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__,int,TYPE_1__*) ;
 int FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int,TYPE_1__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (int,int,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int,char*,...) ;

void
FUNC_10(void)
{
    LOGPEN VAR_4;
    HPEN VAR_5;

    FUNC_2(&VAR_4, sizeof(LOGPEN), 0x77);
    VAR_5 = FUNC_0(VAR_3, 3, FUNC_7(4,5,6));
    FUNC_9(VAR_5 != 0, "CreatePen failed, skipping tests.\n");
    if (!VAR_5) return;
    FUNC_8(VAR_1);
    FUNC_9(FUNC_5((HANDLE)VAR_2, 0, ((void*)0)) == sizeof(LOGPEN), "\n");
    FUNC_9(FUNC_6((HANDLE)VAR_2, 0, ((void*)0)) == sizeof(LOGPEN), "\n");
    FUNC_9(FUNC_4(VAR_5, sizeof(BITMAP), ((void*)0)) == sizeof(LOGPEN), "\n");
    FUNC_9(FUNC_4(VAR_5, 0, ((void*)0)) == sizeof(LOGPEN), "\n");
    FUNC_9(FUNC_4(VAR_5, 5, ((void*)0)) == sizeof(LOGPEN), "\n");
    FUNC_9(FUNC_4(VAR_5, -5, ((void*)0)) == sizeof(LOGPEN), "\n");
    FUNC_9(FUNC_4(VAR_5, sizeof(LOGPEN), &VAR_4) == sizeof(LOGPEN), "\n");
    FUNC_9(FUNC_4(VAR_5, sizeof(LOGPEN)-1, &VAR_4) == 0, "\n");
    FUNC_9(FUNC_4(VAR_5, sizeof(LOGPEN)+2, &VAR_4) == sizeof(LOGPEN), "\n");
    FUNC_9(FUNC_4(VAR_5, 0, &VAR_4) == 0, "\n");
    FUNC_9(FUNC_4(VAR_5, -5, &VAR_4) == sizeof(LOGPEN), "\n");



    FUNC_9(VAR_4.lopnStyle == VAR_3, "\n");

    FUNC_9(FUNC_6((HANDLE)VAR_2, sizeof(LOGPEN), &VAR_4) == 0, "\n");
    FUNC_9(FUNC_3() == VAR_0, "expected ERROR_INVALID_PARAMETER, got %ld\n", FUNC_3());

    FUNC_1(VAR_5);
}
