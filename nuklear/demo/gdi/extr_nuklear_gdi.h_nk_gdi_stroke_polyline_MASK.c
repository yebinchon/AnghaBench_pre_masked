
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nk_vec2i {int y; int x; } ;
struct nk_color {int dummy; } ;
typedef int * HPEN ;
typedef int HDC ;
typedef int COLORREF ;


 int * FUNC_0 (int ,unsigned short,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct nk_color) ;

__attribute__((used)) static void
FUNC_8(HDC VAR_2, const struct nk_vec2i *VAR_3,
    int VAR_4, unsigned short VAR_5, struct nk_color VAR_6)
{
    COLORREF VAR_7 = FUNC_7(VAR_6);
    HPEN VAR_8 = ((void*)0);
    if (VAR_5 == 1) {
        FUNC_6(VAR_2, VAR_7);
    } else {
        VAR_8 = FUNC_0(VAR_1, VAR_5, VAR_7);
        FUNC_5(VAR_2, VAR_8);
    }

    if (VAR_4 > 0) {
        int VAR_9;
        FUNC_4(VAR_2, VAR_3[0].x, VAR_3[0].y, ((void*)0));
        for (VAR_9 = 1; VAR_9 < VAR_4; ++VAR_9)
            FUNC_3(VAR_2, VAR_3[VAR_9].x, VAR_3[VAR_9].y);
    }

    if (VAR_8) {
        FUNC_5(VAR_2, FUNC_2(VAR_0));
        FUNC_1(VAR_8);
    }
}
