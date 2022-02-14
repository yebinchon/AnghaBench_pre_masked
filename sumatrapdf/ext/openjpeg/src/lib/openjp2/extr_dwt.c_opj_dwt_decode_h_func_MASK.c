
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int opj_tls_t ;
struct TYPE_5__ {int mem; } ;
struct TYPE_4__ {size_t min_j; size_t max_j; size_t w; TYPE_2__ h; int * tiledp; } ;
typedef TYPE_1__ opj_dwd_decode_h_job_t ;
typedef size_t OPJ_UINT32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,int *) ;

__attribute__((used)) static void FUNC_3(void* VAR_0, opj_tls_t* VAR_1)
{
    OPJ_UINT32 VAR_2;
    opj_dwd_decode_h_job_t* VAR_3;
    (void)VAR_1;

    VAR_3 = (opj_dwd_decode_h_job_t*)VAR_0;
    for (VAR_2 = VAR_3->min_j; VAR_2 < VAR_3->max_j; VAR_2++) {
        FUNC_2(&VAR_3->h, &VAR_3->tiledp[VAR_2 * VAR_3->w]);
    }

    FUNC_0(VAR_3->h.mem);
    FUNC_1(VAR_3);
}
