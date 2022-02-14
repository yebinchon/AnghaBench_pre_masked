
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_vaapi_ctx {int native_ctx; int (* destroy_native_ctx ) (int ) ;scalar_t__ display; } ;
struct AVHWDeviceContext {struct mp_vaapi_ctx* user_opaque; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct mp_vaapi_ctx*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct AVHWDeviceContext *VAR_0)
{
    struct mp_vaapi_ctx *VAR_1 = VAR_0->user_opaque;

    if (VAR_1->display)
        FUNC_2(VAR_1->display);

    if (VAR_1->destroy_native_ctx)
        VAR_1->destroy_native_ctx(VAR_1->native_ctx);

    FUNC_1(VAR_1);
}
