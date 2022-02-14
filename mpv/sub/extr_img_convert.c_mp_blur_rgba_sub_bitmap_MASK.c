
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sub_bitmap {int bitmap; int stride; int h; int w; } ;
struct mp_image {int * planes; int * stride; int member_0; } ;


 int VAR_0 ;
 struct mp_image* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct mp_image*,struct mp_image*) ;
 int FUNC_2 (struct mp_image*,int ,int ) ;
 int FUNC_3 (struct mp_image*,int ) ;
 int FUNC_4 (struct mp_image*,struct mp_image*,double) ;
 int FUNC_5 (struct mp_image*) ;

void FUNC_6(struct sub_bitmap *VAR_1, double VAR_2)
{
    struct mp_image *VAR_3 = FUNC_0(VAR_0, VAR_1->w, VAR_1->h);
    if (VAR_3) {
        struct mp_image VAR_4 = {0};
        FUNC_3(&VAR_4, VAR_0);
        FUNC_2(&VAR_4, VAR_1->w, VAR_1->h);
        VAR_4.stride[0] = VAR_1->stride;
        VAR_4.planes[0] = VAR_1->bitmap;

        FUNC_1(VAR_3, &VAR_4);

        FUNC_4(&VAR_4, VAR_3, VAR_2);
    }
    FUNC_5(VAR_3);
}
