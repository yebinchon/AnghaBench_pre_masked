
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nk_vec2i {int y; int x; } ;
struct nk_color {int dummy; } ;
struct TYPE_2__ {int pen; int memory; } ;
typedef int REAL ;


 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct nk_color) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_4(const struct nk_vec2i *VAR_1, int VAR_2,
    unsigned short VAR_3, struct nk_color VAR_4)
{
    FUNC_2(VAR_0.pen, (REAL)VAR_3);
    FUNC_1(VAR_0.pen, FUNC_3(VAR_4));
    if (VAR_2 > 0) {
        int VAR_5;
        for (VAR_5 = 1; VAR_5 < VAR_2; ++VAR_5)
            FUNC_0(VAR_0.memory, VAR_0.pen, VAR_1[VAR_5-1].x, VAR_1[VAR_5-1].y, VAR_1[VAR_5].x, VAR_1[VAR_5].y);
        FUNC_0(VAR_0.memory, VAR_0.pen, VAR_1[VAR_2-1].x, VAR_1[VAR_2-1].y, VAR_1[0].x, VAR_1[0].y);
    }
}
