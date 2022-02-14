
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int opj_tls_t ;
struct TYPE_5__ {int mem; } ;
struct TYPE_4__ {size_t min_j; size_t max_j; TYPE_2__ v; scalar_t__ w; int * tiledp; } ;
typedef TYPE_1__ opj_dwd_decode_v_job_t ;
typedef size_t OPJ_UINT32 ;
typedef int OPJ_SIZE_T ;
typedef size_t OPJ_INT32 ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int *,int ,size_t) ;

__attribute__((used)) static void FUNC_3(void* VAR_1, opj_tls_t* VAR_2)
{
    OPJ_UINT32 VAR_3;
    opj_dwd_decode_v_job_t* VAR_4;
    (void)VAR_2;

    VAR_4 = (opj_dwd_decode_v_job_t*)VAR_1;
    for (VAR_3 = VAR_4->min_j; VAR_3 + VAR_0 <= VAR_4->max_j;
            VAR_3 += VAR_0) {
        FUNC_2(&VAR_4->v, &VAR_4->tiledp[VAR_3], (OPJ_SIZE_T)VAR_4->w,
                     VAR_0);
    }
    if (VAR_3 < VAR_4->max_j)
        FUNC_2(&VAR_4->v, &VAR_4->tiledp[VAR_3], (OPJ_SIZE_T)VAR_4->w,
                     (OPJ_INT32)(VAR_4->max_j - VAR_3));

    FUNC_0(VAR_4->v.mem);
    FUNC_1(VAR_4);
}
