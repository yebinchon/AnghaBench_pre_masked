
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* mpctx; } ;
typedef TYPE_2__ mpv_handle ;
struct TYPE_5__ {int dispatch; } ;


 int FUNC_0 (int ,void (*) (void*),void*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (void*) ;

__attribute__((used)) static int FUNC_3(mpv_handle *VAR_0, void (*VAR_1)(void *VAR_2), void *VAR_3)
{
    int VAR_4 = FUNC_1(VAR_0);
    if (VAR_4 < 0) {
        FUNC_2(VAR_3);
        return VAR_4;
    }
    FUNC_0(VAR_0->mpctx->dispatch, VAR_1, VAR_3);
    return 0;
}
