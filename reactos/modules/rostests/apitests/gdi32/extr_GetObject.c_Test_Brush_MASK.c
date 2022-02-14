
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_5__ {int lbStyle; int lbColor; } ;
typedef TYPE_1__ LOGBRUSH ;
typedef scalar_t__ HBRUSH ;
typedef int HANDLE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__,int,TYPE_1__*) ;
 int FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int,TYPE_1__*) ;
 int FUNC_7 (int,int,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int,char*,...) ;

void
FUNC_10(void)
{
    LOGBRUSH VAR_3;
    HBRUSH VAR_4;

    FUNC_2(&VAR_3, sizeof(LOGBRUSH), 0x77);
    VAR_4 = FUNC_0(FUNC_7(1,2,3));
    FUNC_9(VAR_4 != 0, "CreateSolidBrush failed, skipping tests.\n");
    if (!VAR_4) return;

    FUNC_8(VAR_1);
    FUNC_9(FUNC_5((HANDLE)VAR_2, 0, ((void*)0)) == sizeof(LOGBRUSH), "\n");
    FUNC_9(FUNC_6((HANDLE)VAR_2, 0, ((void*)0)) == sizeof(LOGBRUSH), "\n");
    FUNC_9(FUNC_4(VAR_4, sizeof(WORD), ((void*)0)) == sizeof(LOGBRUSH), "\n");
    FUNC_9(FUNC_4(VAR_4, 0, ((void*)0)) == sizeof(LOGBRUSH), "\n");
    FUNC_9(FUNC_4(VAR_4, 5, ((void*)0)) == sizeof(LOGBRUSH), "\n");
    FUNC_9(FUNC_4(VAR_4, -5, ((void*)0)) == sizeof(LOGBRUSH), "\n");


    FUNC_9(VAR_3.lbStyle == 0x77777777, "\n");
    FUNC_9(FUNC_4(VAR_4, 5, &VAR_3) == sizeof(LOGBRUSH), "\n");
    FUNC_9(VAR_3.lbStyle == 0, "\n");
    FUNC_9(VAR_3.lbColor == 0x77777701, "\n");

    FUNC_9(FUNC_4(VAR_4, sizeof(LOGBRUSH), &VAR_3) == sizeof(LOGBRUSH), "\n");
    FUNC_9(FUNC_4(VAR_4, sizeof(LOGBRUSH) - 1, &VAR_3) == sizeof(LOGBRUSH), "\n");
    FUNC_9(FUNC_4(VAR_4, 1, &VAR_3) == sizeof(LOGBRUSH), "\n");
    FUNC_9(FUNC_4(VAR_4, sizeof(LOGBRUSH)+2, &VAR_3) == sizeof(LOGBRUSH), "\n");
    FUNC_9(FUNC_4(VAR_4, -1, &VAR_3) == sizeof(LOGBRUSH), "\n");


    FUNC_9(FUNC_3() == VAR_1, "\n");
    FUNC_1(VAR_4);

    FUNC_9(FUNC_6((HANDLE)VAR_2, sizeof(LOGBRUSH), &VAR_3) == 0, "\n");
    FUNC_9(FUNC_3() == VAR_0, "expected ERROR_INVALID_PARAMETER, got %ld\n", FUNC_3());
}
