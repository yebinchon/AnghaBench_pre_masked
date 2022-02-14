
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nk_vec2i {int y; int x; } ;
struct nk_color {int dummy; } ;
struct TYPE_3__ {int member_1; int member_0; } ;
typedef TYPE_1__ POINT ;
typedef int * HPEN ;
typedef int HDC ;
typedef int COLORREF ;


 int * FUNC_0 (int ,unsigned short,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,TYPE_1__*,int) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct nk_color) ;

__attribute__((used)) static void
FUNC_8(HDC VAR_3, struct nk_vec2i VAR_4,
    struct nk_vec2i VAR_5, struct nk_vec2i VAR_6, struct nk_vec2i VAR_7,
    unsigned short VAR_8, struct nk_color VAR_9)
{
    COLORREF VAR_10 = FUNC_7(VAR_9);
    POINT VAR_11[] = {
        { VAR_4, VAR_4 },
        { VAR_5, VAR_5 },
        { VAR_6, VAR_6 },
        { VAR_7, VAR_7 },
    };

    HPEN VAR_12 = ((void*)0);
    if (VAR_8 == 1) {
        FUNC_6(VAR_3, VAR_10);
    } else {
        VAR_12 = FUNC_0(VAR_2, VAR_8, VAR_10);
        FUNC_4(VAR_3, VAR_12);
    }

    FUNC_5(VAR_3, VAR_1);
    FUNC_3(VAR_3, VAR_11, 4);

    if (VAR_12) {
        FUNC_4(VAR_3, FUNC_2(VAR_0));
        FUNC_1(VAR_12);
    }
}
