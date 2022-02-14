
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mp_zimg_repack {int* components; unsigned int* zmask; int (* packed_repack_scanline ) (int *,void**,unsigned int,unsigned int) ;TYPE_2__* tmp; TYPE_1__* mpi; } ;
typedef int ptrdiff_t ;
struct TYPE_4__ {int* stride; void** planes; } ;
struct TYPE_3__ {int* stride; scalar_t__* planes; } ;


 int FUNC_0 (int *,void**,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned VAR_1, unsigned VAR_2, unsigned VAR_3)
{
    struct mp_zimg_repack *VAR_4 = VAR_0;

    uint32_t *VAR_5 =
        (void *)(VAR_4->mpi->planes[0] + VAR_4->mpi->stride[0] * (ptrdiff_t)VAR_1);

    void *VAR_6[3];
    for (int VAR_7 = 0; VAR_7 < 3; VAR_7++) {
        int VAR_8 = VAR_4->components[VAR_7];
        VAR_6[VAR_7] = VAR_4->tmp->planes[VAR_8] +
                VAR_4->tmp->stride[VAR_8] * (ptrdiff_t)(VAR_1 & VAR_4->zmask[VAR_8]);
    }

    VAR_4->packed_repack_scanline(VAR_5, VAR_6, VAR_2, VAR_3);

    return 0;
}
