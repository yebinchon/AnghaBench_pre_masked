
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vo_w32_state {int windowrc; int window; } ;
struct TYPE_3__ {int member_0; int member_1; int y; int x; } ;
typedef TYPE_1__ POINT ;
typedef int LRESULT ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static LRESULT FUNC_5(struct vo_w32_state *VAR_12, int VAR_13, int VAR_14)
{
    if (FUNC_1(VAR_12->window))
        return VAR_3;

    POINT VAR_15 = { VAR_13, VAR_14 };
    FUNC_2(VAR_12->window, &VAR_15);



    int VAR_16 = FUNC_0(VAR_10) +
                     FUNC_0(VAR_11);

    int VAR_17 = VAR_16 * 2 + FUNC_0(VAR_9);


    if (VAR_15.y < VAR_16) {
        if (VAR_15.x < VAR_17)
            return VAR_7;
        if (VAR_15.x >= FUNC_4(VAR_12->windowrc) - VAR_17)
            return VAR_8;
        return VAR_6;
    }


    if (VAR_15.y >= FUNC_3(VAR_12->windowrc) - VAR_16) {
        if (VAR_15.x < VAR_17)
            return VAR_1;
        if (VAR_15.x >= FUNC_4(VAR_12->windowrc) - VAR_17)
            return VAR_2;
        return VAR_0;
    }


    if (VAR_15.x < VAR_16)
        return VAR_4;
    if (VAR_15.x >= FUNC_4(VAR_12->windowrc) - VAR_16)
        return VAR_5;
    return VAR_3;
}
