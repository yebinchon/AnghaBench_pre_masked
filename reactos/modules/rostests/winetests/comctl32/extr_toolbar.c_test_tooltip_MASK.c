
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int nmtti ;
struct TYPE_7__ {int idFrom; int code; } ;
struct TYPE_9__ {TYPE_2__ hdr; } ;
struct TYPE_6__ {int member_0; } ;
struct TYPE_8__ {int member_0; int member_1; int member_6; int member_5; TYPE_1__ member_4; int member_3; int member_2; } ;
typedef TYPE_3__ TBBUTTON ;
typedef TYPE_4__ NMTTDISPINFOW ;
typedef int LPARAM ;
typedef int * HWND ;
typedef int HMENU ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,int *,int,int ,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (int *,int ,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (TYPE_4__*,int ,int) ;
 int FUNC_6 (int ,char*,int *) ;
 int FUNC_7 (int ,int ,int ,char*,int) ;
 int FUNC_8 (int **) ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_9(void)
{
    HWND VAR_17 = ((void*)0);
    const TBBUTTON VAR_18[] = {
        {-1, 20, VAR_4, 0, {0, }, 0, -1},
        {0, 21, VAR_4, 0, {0, }, 0, -1},
    };
    NMTTDISPINFOW VAR_19;
    HWND VAR_20;

    FUNC_8(&VAR_17);

    FUNC_3(VAR_17, VAR_5, 2, (LPARAM)VAR_18);


    FUNC_5(&VAR_19, 0, sizeof(VAR_19));
    VAR_19.hdr.code = VAR_9;
    VAR_19.hdr.idFrom = 20;

    FUNC_3(VAR_17, VAR_0, VAR_1, 0);

    FUNC_4(VAR_15, VAR_2);
    FUNC_3(VAR_17, VAR_10, 0, (LPARAM)&VAR_19);
    FUNC_7(VAR_15, VAR_3, VAR_16,
                "dispinfo from tooltip", VAR_1);

    VAR_13 = VAR_8;
    FUNC_3(VAR_17, VAR_10, 0, (LPARAM)&VAR_19);
    VAR_13 = VAR_1;

    FUNC_1(VAR_17);


    VAR_17 = FUNC_0(0, VAR_7, ((void*)0), VAR_11 | VAR_12, 0, 0, 0, 0,
        VAR_14, (HMENU)5, FUNC_2(((void*)0)), ((void*)0));
    VAR_20 = (HWND)FUNC_3(VAR_17, VAR_6, 0, 0);
    FUNC_6(VAR_20 == ((void*)0), "got %p\n", VAR_20);
    FUNC_1(VAR_17);
}
