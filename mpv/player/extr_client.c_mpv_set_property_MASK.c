
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct setproperty_request {char const* name; void* data; int status; int format; TYPE_5__* mpctx; } ;
struct TYPE_6__ {TYPE_5__* mpctx; } ;
typedef TYPE_1__ mpv_handle ;
typedef int mpv_format ;
struct TYPE_7__ {int initialized; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_5__*,char const*) ;
 int FUNC_2 (TYPE_1__*,char const*,int ,void*) ;
 int FUNC_3 (TYPE_1__*,int ,struct setproperty_request*) ;
 int VAR_4 ;

int FUNC_4(mpv_handle *VAR_5, const char *VAR_6, mpv_format VAR_7,
                     void *VAR_8)
{
    if (!VAR_5->mpctx->initialized) {
        int VAR_9 = FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8);
        if (VAR_9 == 129 &&
            FUNC_1(VAR_5->mpctx, VAR_6) >= 0)
            return VAR_3;
        switch (VAR_9) {
        case 128: return 128;
        case 130: return VAR_1;
        case 129: return VAR_2;
        default: return VAR_0;
        }
    }
    if (!FUNC_0(VAR_7))
        return VAR_1;

    struct setproperty_request VAR_10 = {
        .mpctx = VAR_5->mpctx,
        .name = VAR_6,
        .format = VAR_7,
        .data = VAR_8,
    };
    FUNC_3(VAR_5, VAR_4, &VAR_10);
    return VAR_10.status;
}
