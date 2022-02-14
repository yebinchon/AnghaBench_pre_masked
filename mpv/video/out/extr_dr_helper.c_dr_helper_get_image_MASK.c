
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image {int dummy; } ;
struct get_image_cmd {int imgfmt; int w; int h; int stride_align; struct mp_image* res; struct dr_helper* dr; } ;
struct dr_helper {int dispatch; } ;


 int FUNC_0 (int ,int ,struct get_image_cmd*) ;
 int VAR_0 ;

struct mp_image *FUNC_1(struct dr_helper *VAR_1, int VAR_2,
                                     int VAR_3, int VAR_4, int VAR_5)
{
    struct get_image_cmd VAR_6 = {
        .dr = VAR_1,
        .imgfmt = VAR_2, .w = VAR_3, .h = VAR_4, .stride_align = VAR_5,
    };
    FUNC_0(VAR_1->dispatch, VAR_0, &VAR_6);
    return VAR_6.res;
}
