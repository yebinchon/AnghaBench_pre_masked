
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mp_sws_context {int sws; int zimg; scalar_t__ zimg_ok; int dst; int src; } ;
struct mp_image {int stride; scalar_t__ planes; int h; int params; } ;


 int FUNC_0 (struct mp_sws_context*,char*) ;
 int FUNC_1 (struct mp_sws_context*) ;
 scalar_t__ FUNC_2 (int ,struct mp_image*,struct mp_image*) ;
 int FUNC_3 (int ,int const* const*,int ,int ,int ,scalar_t__,int ) ;

int FUNC_4(struct mp_sws_context *VAR_0, struct mp_image *VAR_1,
                 struct mp_image *VAR_2)
{
    VAR_0->src = VAR_2->params;
    VAR_0->dst = VAR_1->params;

    int VAR_3 = FUNC_1(VAR_0);
    if (VAR_3 < 0) {
        FUNC_0(VAR_0, "libswscale initialization failed.\n");
        return VAR_3;
    }






    FUNC_3(VAR_0->sws, (const uint8_t *const *) VAR_2->planes, VAR_2->stride,
              0, VAR_2->h, VAR_1->planes, VAR_1->stride);
    return 0;
}
