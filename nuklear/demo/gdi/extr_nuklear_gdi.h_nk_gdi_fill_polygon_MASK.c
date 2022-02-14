
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct nk_vec2i {int y; int x; } ;
struct nk_color {int dummy; } ;
struct TYPE_3__ {int y; int x; } ;
typedef TYPE_1__ POINT ;
typedef int HDC ;
typedef int COLORREF ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_1__*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct nk_color) ;

__attribute__((used)) static void
FUNC_4(HDC VAR_1, const struct nk_vec2i *VAR_2, int VAR_3, struct nk_color VAR_4)
{
    int VAR_5 = 0;

    POINT VAR_6[64];
    COLORREF VAR_7 = FUNC_3(VAR_4);
    FUNC_1(VAR_1, VAR_7);
    FUNC_2(VAR_1, VAR_7);
    for (VAR_5 = 0; VAR_5 < VAR_3 && VAR_5 < 64; ++VAR_5) {
        VAR_6[VAR_5].x = VAR_2[VAR_5].x;
        VAR_6[VAR_5].y = VAR_2[VAR_5].y;
    }
    FUNC_0(VAR_1, VAR_6, VAR_5);

}
