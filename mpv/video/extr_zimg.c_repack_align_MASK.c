
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mp_zimg_repack {int* zmask; scalar_t__ pack; TYPE_3__* tmp; TYPE_2__* mpi; int * use_buf; } ;
typedef int ptrdiff_t ;
struct TYPE_6__ {int* stride; void** planes; } ;
struct TYPE_4__ {int num_planes; int* bytes; int* xs; int* ys; int chroma_ys; } ;
struct TYPE_5__ {int* stride; void** planes; TYPE_1__ fmt; } ;


 int FUNC_0 (void*,void*,size_t) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, unsigned VAR_1, unsigned VAR_2, unsigned VAR_3)
{
    struct mp_zimg_repack *VAR_4 = VAR_0;

    for (int VAR_5 = 0; VAR_5 < VAR_4->mpi->fmt.num_planes; VAR_5++) {
        if (!VAR_4->use_buf[VAR_5])
            continue;

        int VAR_6 = VAR_4->mpi->fmt.bytes[VAR_5];
        int VAR_7 = VAR_4->mpi->fmt.xs[VAR_5];
        int VAR_8 = VAR_4->mpi->fmt.ys[VAR_5];

        int VAR_9 = (1 << VAR_4->mpi->fmt.chroma_ys) - (1 << VAR_8) + 1;

        for (int VAR_10 = VAR_1; VAR_10 < VAR_1 + VAR_9; VAR_10++) {
            void *VAR_11 = VAR_4->mpi->planes[VAR_5] +
                      VAR_4->mpi->stride[VAR_5] * (ptrdiff_t)(VAR_10 >> VAR_8) +
                      VAR_6 * (VAR_2 >> VAR_7);
            void *VAR_12 = VAR_4->tmp->planes[VAR_5] +
                      VAR_4->tmp->stride[VAR_5] * (ptrdiff_t)((VAR_10 >> VAR_8) & VAR_4->zmask[VAR_5]) +
                      VAR_6 * (VAR_2 >> VAR_7);
            size_t VAR_13 = ((VAR_3 - VAR_2) >> VAR_7) * VAR_6;
            if (VAR_4->pack) {
                FUNC_0(VAR_11, VAR_12, VAR_13);
            } else {
                FUNC_0(VAR_12, VAR_11, VAR_13);
            }
        }
    }

    return 0;
}
