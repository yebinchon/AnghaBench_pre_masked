
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nk_vec2i {int y; int x; } ;
struct nk_color {int dummy; } ;
struct TYPE_5__ {int brush; int memory; } ;
struct TYPE_4__ {int y; int x; } ;
typedef TYPE_1__ POINT ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,TYPE_1__*,int,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct nk_color) ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static void
FUNC_3(const struct nk_vec2i *VAR_3, int VAR_4, struct nk_color VAR_5)
{
    int VAR_6 = 0;

    POINT VAR_7[64];
    FUNC_1(VAR_2.brush, FUNC_2(VAR_5));
    for (VAR_6 = 0; VAR_6 < VAR_4 && VAR_6 < 64; ++VAR_6) {
        VAR_7[VAR_6].x = VAR_3[VAR_6].x;
        VAR_7[VAR_6].y = VAR_3[VAR_6].y;
    }
    FUNC_0(VAR_2.memory, VAR_2.brush, VAR_7, VAR_6, VAR_0);

}
