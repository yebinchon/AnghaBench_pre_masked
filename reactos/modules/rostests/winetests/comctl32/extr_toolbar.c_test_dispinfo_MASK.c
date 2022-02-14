
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; } ;
struct TYPE_4__ {int member_0; int member_1; int member_6; int member_5; TYPE_1__ member_4; int member_3; int member_2; } ;
typedef TYPE_2__ TBBUTTON ;
typedef int LPARAM ;
typedef int * HWND ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 long VAR_2 ;
 scalar_t__ VAR_3 ;
 long VAR_4 ;
 int FUNC_1 (int *,int *,long) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int *,int ,long,int ) ;
 int FUNC_3 (int *,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 long VAR_10 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__,long,char*) ;
 scalar_t__ VAR_11 ;
 int FUNC_6 (int **) ;

__attribute__((used)) static void FUNC_7(void)
{
    HWND VAR_12 = ((void*)0);
    const TBBUTTON VAR_13[] = {
        {-1, 20, VAR_7, 0, {0, }, 0, -1},
        {0, 21, VAR_7, 0, {0, }, 0, -1},
    };
    BOOL VAR_14;

    FUNC_6(&VAR_12);
    FUNC_2(VAR_12, VAR_9, VAR_4, (LPARAM)VAR_3);
    FUNC_2(VAR_12, VAR_8, 2, (LPARAM)VAR_13);
    VAR_11 = VAR_6;


    FUNC_5((BOOL)FUNC_2(VAR_12, VAR_0, 0, 0), 0, "%d");
    FUNC_3(VAR_12, VAR_5);
    FUNC_4(VAR_12);

    VAR_14 = (BOOL)FUNC_2(VAR_12, VAR_1, VAR_10, 0);
    FUNC_5(VAR_14, VAR_2, "%d");
    FUNC_5(FUNC_2(VAR_12, VAR_0, 0, 0), 1L, "%ld");
    FUNC_1(VAR_12, ((void*)0), VAR_2);
    FUNC_4(VAR_12);

    VAR_14 = (BOOL)FUNC_2(VAR_12, VAR_1, VAR_2, 0);
    FUNC_5(VAR_14, VAR_10, "%d");
    FUNC_5(FUNC_2(VAR_12, VAR_0, 0, 0), 0L, "%ld");
    FUNC_1(VAR_12, ((void*)0), VAR_2);
    FUNC_4(VAR_12);

    FUNC_0(VAR_12);
    VAR_11 = 0;
}
