
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct getproperty_request {char const* name; void* data; int status; int format; TYPE_1__* mpctx; } ;
struct TYPE_6__ {TYPE_1__* mpctx; } ;
typedef TYPE_2__ mpv_handle ;
typedef int mpv_format ;
struct TYPE_5__ {int initialized; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_2__*,int ,struct getproperty_request*) ;

int FUNC_2(mpv_handle *VAR_4, const char *VAR_5, mpv_format VAR_6,
                     void *VAR_7)
{
    if (!VAR_4->mpctx->initialized)
        return VAR_2;
    if (!VAR_7)
        return VAR_0;
    if (!FUNC_0(VAR_6))
        return VAR_1;

    struct getproperty_request VAR_8 = {
        .mpctx = VAR_4->mpctx,
        .name = VAR_5,
        .format = VAR_6,
        .data = VAR_7,
    };
    FUNC_1(VAR_4, VAR_3, &VAR_8);
    return VAR_8.status;
}
