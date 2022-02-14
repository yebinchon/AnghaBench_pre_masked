
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image {int num_planes; int* stride; scalar_t__* planes; } ;


 int FUNC_0 (struct mp_image*,int) ;

void FUNC_1(struct mp_image *VAR_0)
{
    for (int VAR_1 = 0; VAR_1 < VAR_0->num_planes; VAR_1++) {
        int VAR_2 = FUNC_0(VAR_0, VAR_1);
        VAR_0->planes[VAR_1] = VAR_0->planes[VAR_1] + VAR_0->stride[VAR_1] * (VAR_2 - 1);
        VAR_0->stride[VAR_1] = -VAR_0->stride[VAR_1];
    }
}
