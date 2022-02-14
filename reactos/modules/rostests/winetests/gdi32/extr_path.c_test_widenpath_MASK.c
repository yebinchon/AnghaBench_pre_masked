
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; } ;
typedef TYPE_1__ POINT ;
typedef int INT ;
typedef int HPEN ;
typedef int HDC ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int *,int *,int ) ;
 int VAR_2 ;
 int FUNC_7 (int ,TYPE_1__*,int) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;
 int VAR_3 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int,char*,...) ;

__attribute__((used)) static void FUNC_14(void)
{
    HDC VAR_4 = FUNC_4(0);
    HPEN VAR_5, VAR_6;
    POINT VAR_7[6];
    INT VAR_8;
    BOOL VAR_9;


    VAR_5 = FUNC_2(VAR_2, 10, FUNC_8(0,0,0));
    FUNC_10(VAR_4, VAR_5);


    VAR_7[0].x = 100;
    VAR_7[0].y = 0;
    VAR_7[1].x = 200;
    VAR_7[1].y = 0;
    VAR_7[2].x = 300;
    VAR_7[2].y = 100;
    VAR_7[3].x = 300;
    VAR_7[3].y = 200;
    VAR_7[4].x = 200;
    VAR_7[4].y = 300;
    VAR_7[5].x = 100;
    VAR_7[5].y = 300;


    FUNC_1(VAR_4);
    FUNC_7(VAR_4, VAR_7, 6);
    FUNC_3(VAR_4);


    FUNC_13(FUNC_12(VAR_4), "WidenPath fails while widening a poyline path.\n");


    VAR_8 = FUNC_6(VAR_4, ((void*)0), ((void*)0), 0);
    FUNC_13(VAR_8 != -1, "GetPath fails after calling WidenPath.\n");
    FUNC_13(VAR_8 > 6, "Path number of points is too low. Should be more than 6 but is %d\n", VAR_8);

    FUNC_0(VAR_4);


    FUNC_11(0xdeadbeef);
    FUNC_1(VAR_4);
    VAR_9 = FUNC_12(VAR_4);
    FUNC_13(VAR_9 == VAR_1 && (FUNC_5() == VAR_0 || FUNC_5() == 0xdeadbeef),
       "WidenPath fails while widening an open path. Return value is %d, should be %d. Error is %u\n", VAR_9, VAR_1, FUNC_5());

    FUNC_0(VAR_4);


    VAR_6 = FUNC_2(VAR_2, 1, FUNC_8(0,0,0));
    FUNC_10(VAR_4, VAR_6);
    FUNC_1(VAR_4);
    FUNC_7(VAR_4, VAR_7, 6);
    FUNC_3(VAR_4);
    VAR_9 = FUNC_12(VAR_4);
    FUNC_13(VAR_9 == VAR_3, "WidenPath failed: %d\n", FUNC_5());
    VAR_8 = FUNC_6(VAR_4, ((void*)0), ((void*)0), 0);
    FUNC_13(VAR_8 > 6, "WidenPath should compute a widened path with a 1px wide pen. Path length is %d, should be more than 6\n", VAR_8);

    FUNC_9(0, VAR_4);
    return;
}
