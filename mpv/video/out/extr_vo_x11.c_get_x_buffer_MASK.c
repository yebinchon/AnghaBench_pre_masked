
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct priv {int image_width; TYPE_2__** myximage; TYPE_1__* sws; } ;
struct mp_image {int* stride; int * planes; int member_0; } ;
struct TYPE_4__ {int bits_per_pixel; int data; } ;
struct TYPE_3__ {int dst; } ;


 int FUNC_0 (struct mp_image*,int *) ;

__attribute__((used)) static struct mp_image FUNC_1(struct priv *VAR_0, int VAR_1)
{
    struct mp_image VAR_2 = {0};
    FUNC_0(&VAR_2, &VAR_0->sws->dst);

    VAR_2.planes[0] = VAR_0->myximage[VAR_1]->data;
    VAR_2.stride[0] =
        VAR_0->image_width * ((VAR_0->myximage[VAR_1]->bits_per_pixel + 7) / 8);

    return VAR_2;
}
