
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vaapi_opts {int path; } ;
struct mpv_global {int dummy; } ;
struct TYPE_3__ {struct AVBufferRef* av_device_ref; } ;
struct mp_vaapi_ctx {TYPE_1__ hwctx; int (* destroy_native_ctx ) (void*) ;void* native_ctx; } ;
struct mp_log {int dummy; } ;
struct hwcontext_create_dev_params {int probing; } ;
struct AVBufferRef {int dummy; } ;
typedef int VADisplay ;
struct TYPE_4__ {int (* destroy ) (void*) ;int (* create ) (int **,void**,int ) ;} ;


 struct vaapi_opts* FUNC_0 (int *,struct mpv_global*,int *) ;
 TYPE_2__** VAR_0 ;
 int FUNC_1 (int **,void**,int ) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct vaapi_opts*) ;
 int FUNC_4 (int *) ;
 struct mp_vaapi_ctx* FUNC_5 (int *,struct mp_log*,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct AVBufferRef *FUNC_6(struct mpv_global *VAR_2,
        struct mp_log *VAR_3, struct hwcontext_create_dev_params *VAR_4)
{
    struct AVBufferRef *VAR_5 = ((void*)0);
    struct vaapi_opts *VAR_6 = FUNC_0(((void*)0), VAR_2, &VAR_1);

    for (int VAR_7 = 0; VAR_0[VAR_7]; VAR_7++) {
        VADisplay *VAR_8 = ((void*)0);
        void *VAR_9 = ((void*)0);
        VAR_0[VAR_7]->create(&VAR_8, &VAR_9, VAR_6->path);
        if (VAR_8) {
            struct mp_vaapi_ctx *VAR_10 =
                FUNC_5(VAR_8, VAR_3, VAR_4->probing);
            if (!VAR_10) {
                FUNC_4(VAR_8);
                VAR_0[VAR_7]->destroy(VAR_9);
                goto end;
            }
            VAR_10->native_ctx = VAR_9;
            VAR_10->destroy_native_ctx = VAR_0[VAR_7]->destroy;
            VAR_5 = VAR_10->hwctx.av_device_ref;
            goto end;
        }
    }

end:
    FUNC_3(VAR_6);
    return VAR_5;
}
