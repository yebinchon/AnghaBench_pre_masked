
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct xdaliclock {TYPE_1__* gif_enc; } ;
typedef enum paint_color { ____Placeholder_paint_color } paint_color ;
struct TYPE_2__ {scalar_t__ frame; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,int ,size_t) ;

__attribute__((used)) static void FUNC_2(struct xdaliclock *VAR_0,
                                 int VAR_1,
                                 int VAR_2,
                                 int VAR_3,
                                 int VAR_4,
                                 enum paint_color VAR_5)
{


    if (FUNC_0(VAR_1 > VAR_4))
        VAR_1 = VAR_4;
    else if (FUNC_0(VAR_1 < 0))
        VAR_1 = 0;

    if (FUNC_0(VAR_2 > VAR_4))
        VAR_2 = VAR_4;
    else if (FUNC_0(VAR_2 < 0))
        VAR_2 = 0;

    if (VAR_1 == VAR_2)
        return;

    if (VAR_1 > VAR_2) {
        int VAR_6 = VAR_1;
        VAR_1 = VAR_2;
        VAR_2 = VAR_6;
    }

    FUNC_1(VAR_0->gif_enc->frame + VAR_3 * VAR_4 + VAR_1, (uint8_t)VAR_5,
           (size_t)(VAR_2 - VAR_1));
}
