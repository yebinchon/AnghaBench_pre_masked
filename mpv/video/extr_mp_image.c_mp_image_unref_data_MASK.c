
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image {int * bufs; scalar_t__* stride; int ** planes; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct mp_image *VAR_1)
{
    for (int VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
        VAR_1->planes[VAR_2] = ((void*)0);
        VAR_1->stride[VAR_2] = 0;
        FUNC_0(&VAR_1->bufs[VAR_2]);
    }
}
