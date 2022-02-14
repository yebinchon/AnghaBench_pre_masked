
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nk_color {int dummy; } ;
struct TYPE_3__ {short member_0; short member_1; } ;
typedef TYPE_1__ POINT ;
typedef int HDC ;
typedef int COLORREF ;


 int FUNC_0 (int ,TYPE_1__*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct nk_color) ;

__attribute__((used)) static void
FUNC_4(HDC VAR_0, short VAR_1, short VAR_2, short VAR_3,
    short VAR_4, short VAR_5, short VAR_6, struct nk_color VAR_7)
{
    COLORREF VAR_8 = FUNC_3(VAR_7);
    POINT VAR_9[] = {
        { VAR_1, VAR_2 },
        { VAR_3, VAR_4 },
        { VAR_5, VAR_6 },
    };

    FUNC_2(VAR_0, VAR_8);
    FUNC_1(VAR_0, VAR_8);
    FUNC_0(VAR_0, VAR_9, 3);
}
