
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_image {struct AVBufferRef** bufs; } ;
struct AVBufferRef {scalar_t__ size; } ;


 int VAR_0 ;

int FUNC_0(struct mp_image *VAR_1)
{
    int VAR_2 = sizeof(*VAR_1);

    for (int VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        struct AVBufferRef *VAR_4 = VAR_1->bufs[VAR_3];
        if (VAR_4)
            VAR_2 += VAR_4->size;
    }

    return VAR_2;
}
