
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int obuf; TYPE_1__* funcs; scalar_t__ err; } ;
typedef TYPE_2__ redisContext ;
struct TYPE_5__ {int (* write ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(redisContext *VAR_2, int *VAR_3) {


    if (VAR_2->err)
        return VAR_0;

    if (FUNC_2(VAR_2->obuf) > 0) {
        int VAR_4 = VAR_2->funcs->write(VAR_2);
        if (VAR_4 < 0) {
            return VAR_0;
        } else if (VAR_4 > 0) {
            if (VAR_4 == (signed)FUNC_2(VAR_2->obuf)) {
                FUNC_1(VAR_2->obuf);
                VAR_2->obuf = FUNC_0();
            } else {
                FUNC_3(VAR_2->obuf,VAR_4,-1);
            }
        }
    }
    if (VAR_3 != ((void*)0)) *VAR_3 = (FUNC_2(VAR_2->obuf) == 0);
    return VAR_1;
}
