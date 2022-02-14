
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mp_vaapi_ctx {int display; } ;
typedef int VAStatus ;
struct TYPE_3__ {int buf; } ;
typedef TYPE_1__ VAImage ;


 int FUNC_0 (struct mp_vaapi_ctx*,char*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static bool FUNC_2(struct mp_vaapi_ctx *VAR_0, VAImage *VAR_1)
{
    const VAStatus VAR_2 = FUNC_1(VAR_0->display, VAR_1->buf);
    return FUNC_0(VAR_0, "vaUnmapBuffer()");
}
