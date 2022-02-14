
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; } ;
typedef TYPE_1__ POINT ;
typedef int HWND ;
typedef int HIMAGELIST ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int const,int const) ;
 int FUNC_2 () ;
 int FUNC_3 (int const,int const) ;
 int FUNC_4 (int,char*,int,int,...) ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int ,int*,int*) ;
 int FUNC_10 (int ,int ,int,int) ;
 int FUNC_11 (int ,int ,int ,int,char*,int ) ;
 int FUNC_12 (char*,char*,int,int) ;

__attribute__((used)) static void FUNC_13(void)
{
    struct hotspot {
        int dx;
        int dy;
    };






    static const struct hotspot VAR_4[4] = {
        { 10, 7 },
        { 47, 31 },
        { -9, -8 },
        { -7, 35 }
    };
    int VAR_5, VAR_6, VAR_7;
    HIMAGELIST VAR_8 = FUNC_1(47, 31);
    HIMAGELIST VAR_9 = FUNC_1(11, 17);
    HWND VAR_10 = FUNC_2();


    for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
        for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
            int VAR_11 = VAR_4[VAR_5].dx;
            int VAR_12 = VAR_4[VAR_5].dy;
            int VAR_13 = VAR_4[VAR_6].dx;
            int VAR_14 = VAR_4[VAR_6].dy;
            int VAR_15, VAR_16, VAR_17, VAR_18;
            char VAR_19[256];
            HIMAGELIST VAR_20;
            POINT VAR_21;

            VAR_7 = FUNC_5(VAR_8, 0, VAR_11, VAR_12);
            FUNC_4(VAR_7 != 0, "BeginDrag failed for { %d, %d }\n", VAR_11, VAR_12);
            FUNC_12(VAR_19, "BeginDrag (%d,%d)\n", VAR_5, VAR_6);
            FUNC_11(VAR_10, VAR_8, 0, FUNC_3(47, 31), VAR_19, VAR_3);


            VAR_7 = FUNC_10(VAR_9, 0, VAR_13, VAR_14);
            FUNC_4(VAR_7 != 0, "SetDragCursorImage failed for {%d, %d}{%d, %d}\n",
                    VAR_11, VAR_12, VAR_13, VAR_14);
            FUNC_12(VAR_19, "SetDragCursorImage (%d,%d)\n", VAR_5, VAR_6);
            FUNC_11(VAR_10, VAR_9, 0, FUNC_3(11, 17), VAR_19, VAR_3);


            VAR_20 = FUNC_8(((void*)0), &VAR_21);
            FUNC_4(VAR_21.x == VAR_11 && VAR_21.y == VAR_12,
                    "Expected drag hotspot [%d,%d] got [%d,%d]\n",
                    VAR_11, VAR_12, VAR_21.x, VAR_21.y);

            FUNC_9(VAR_20, &VAR_17, &VAR_18);
            VAR_15 = FUNC_3(47, FUNC_3(11 + VAR_13, 47 - VAR_13));
            VAR_16 = FUNC_3(31, FUNC_3(17 + VAR_14, 31 - VAR_14));
            FUNC_4(VAR_17 == VAR_15 && VAR_18 == VAR_16,
                    "Expected drag image size [%d,%d] got [%d,%d]\n",
                    VAR_15, VAR_16, VAR_17, VAR_18);
            FUNC_12(VAR_19, "GetDragImage (%d,%d)\n", VAR_5, VAR_6);
            FUNC_11(VAR_10, VAR_20, 0, FUNC_3(VAR_15, VAR_16), VAR_19, VAR_3);
            FUNC_7();
        }
    }





    FUNC_6(VAR_9);
    FUNC_6(VAR_8);
    FUNC_0(VAR_10);
}
