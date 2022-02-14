
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* mpctx; } ;
typedef TYPE_2__ mpv_handle ;
struct TYPE_8__ {int clients; } ;


 TYPE_2__* FUNC_0 (int ,char const*) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (TYPE_2__*,int ) ;

mpv_handle *FUNC_3(mpv_handle *VAR_0, const char *VAR_1)
{
    if (!VAR_0)
        return FUNC_1();
    mpv_handle *VAR_2 = FUNC_0(VAR_0->mpctx->clients, VAR_1);
    if (VAR_2)
        FUNC_2(VAR_2, 0);
    return VAR_2;
}
