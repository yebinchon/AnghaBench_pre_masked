
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image {int h; int w; int imgfmt; } ;


 struct mp_image* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mp_image*,struct mp_image*) ;
 int FUNC_2 (struct mp_image*,struct mp_image*) ;

struct mp_image *FUNC_3(struct mp_image *VAR_0)
{
    struct mp_image *VAR_1 = FUNC_0(VAR_0->imgfmt, VAR_0->w, VAR_0->h);
    if (!VAR_1)
        return ((void*)0);
    FUNC_1(VAR_1, VAR_0);
    FUNC_2(VAR_1, VAR_0);
    return VAR_1;
}
