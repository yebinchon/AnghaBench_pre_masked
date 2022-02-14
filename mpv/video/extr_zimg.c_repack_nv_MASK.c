
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct mp_zimg_repack {int* zmask; int* components; int (* packed_repack_scanline ) (int *,void**,unsigned int,unsigned int) ;TYPE_3__* tmp; TYPE_2__* mpi; scalar_t__ pack; scalar_t__* use_buf; } ;
typedef unsigned int ptrdiff_t ;
struct TYPE_6__ {unsigned int* stride; void** planes; } ;
struct TYPE_4__ {int chroma_xs; int chroma_ys; unsigned int* bytes; } ;
struct TYPE_5__ {unsigned int* stride; void** planes; TYPE_1__ fmt; } ;


 int FUNC_0 (void*,void*,size_t) ;
 int FUNC_1 (int *,void**,unsigned int,unsigned int) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, unsigned VAR_1, unsigned VAR_2, unsigned VAR_3)
{
    struct mp_zimg_repack *VAR_4 = VAR_0;

    int VAR_5 = VAR_4->mpi->fmt.chroma_xs;
    int VAR_6 = VAR_4->mpi->fmt.chroma_ys;

    if (VAR_4->use_buf[0]) {

        int VAR_7 = 1 << VAR_6;
        for (int VAR_8 = VAR_1; VAR_8 < VAR_1 + VAR_7; VAR_8++) {
            ptrdiff_t VAR_9 = VAR_4->mpi->fmt.bytes[0];
            void *VAR_10 = VAR_4->mpi->planes[0] +
                    VAR_4->mpi->stride[0] * (ptrdiff_t)VAR_8 + VAR_9 * VAR_2;
            void *VAR_11 = VAR_4->tmp->planes[0] +
                    VAR_4->tmp->stride[0] * (ptrdiff_t)(VAR_8 & VAR_4->zmask[0]) + VAR_9 * VAR_2;
            size_t VAR_12 = (VAR_3 - VAR_2) * VAR_9;
            if (VAR_4->pack) {
                FUNC_0(VAR_10, VAR_11, VAR_12);
            } else {
                FUNC_0(VAR_11, VAR_10, VAR_12);
            }
        }
    }

    uint32_t *VAR_13 =
        (void *)(VAR_4->mpi->planes[1] + VAR_4->mpi->stride[1] * (ptrdiff_t)(VAR_1 >> VAR_6));

    void *VAR_14[2];
    for (int VAR_15 = 0; VAR_15 < 2; VAR_15++) {
        int VAR_16 = VAR_4->components[VAR_15];
        VAR_14[VAR_15] = VAR_4->tmp->planes[VAR_16] +
                VAR_4->tmp->stride[VAR_16] * (ptrdiff_t)((VAR_1 >> VAR_6) & VAR_4->zmask[VAR_16]);
    }

    VAR_4->packed_repack_scanline(VAR_13, VAR_14, VAR_2 >> VAR_5, VAR_3 >> VAR_5);

    return 0;
}
