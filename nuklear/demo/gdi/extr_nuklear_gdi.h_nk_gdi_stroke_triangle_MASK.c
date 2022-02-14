
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nk_color {int dummy; } ;
struct TYPE_3__ {short member_0; short member_1; } ;
typedef TYPE_1__ POINT ;
typedef int * HPEN ;
typedef int HDC ;
typedef int COLORREF ;


 int * FUNC_0 (int ,unsigned short,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,TYPE_1__*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct nk_color) ;

__attribute__((used)) static void
FUNC_7(HDC VAR_2, short VAR_3, short VAR_4, short VAR_5,
    short VAR_6, short VAR_7, short VAR_8, unsigned short VAR_9, struct nk_color VAR_10)
{
    COLORREF VAR_11 = FUNC_6(VAR_10);
    POINT VAR_12[] = {
        { VAR_3, VAR_4 },
        { VAR_5, VAR_6 },
        { VAR_7, VAR_8 },
        { VAR_3, VAR_4 },
    };

    HPEN VAR_13 = ((void*)0);
    if (VAR_9 == 1) {
        FUNC_5(VAR_2, VAR_11);
    } else {
        VAR_13 = FUNC_0(VAR_1, VAR_9, VAR_11);
        FUNC_4(VAR_2, VAR_13);
    }

    FUNC_3(VAR_2, VAR_12, 4);

    if (VAR_13) {
        FUNC_4(VAR_2, FUNC_2(VAR_0));
        FUNC_1(VAR_13);
    }
}
