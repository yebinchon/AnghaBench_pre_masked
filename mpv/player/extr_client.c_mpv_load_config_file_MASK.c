
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* mpctx; } ;
typedef TYPE_2__ mpv_handle ;
struct TYPE_6__ {int mconfig; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,char const*,int *,int ) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(mpv_handle *VAR_2, const char *VAR_3)
{
    FUNC_0(VAR_2);
    int VAR_4 = FUNC_1(VAR_2->mpctx->mconfig, VAR_3, ((void*)0), 0);
    FUNC_2(VAR_2);
    if (VAR_4 == 0)
        return VAR_0;
    if (VAR_4 < 0)
        return VAR_1;
    return 0;
}
