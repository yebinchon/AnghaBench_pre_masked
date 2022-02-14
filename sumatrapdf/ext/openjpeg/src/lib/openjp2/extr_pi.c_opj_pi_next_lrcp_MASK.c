
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pw; int ph; } ;
typedef TYPE_2__ opj_pi_resolution_t ;
struct TYPE_7__ {size_t layno0; size_t layno1; size_t resno0; size_t resno1; size_t compno0; size_t compno1; int precno1; size_t precno0; } ;
struct TYPE_9__ {size_t compno; size_t resno; size_t layno; size_t precno; size_t step_l; size_t step_r; size_t step_c; size_t step_p; size_t include_size; int* include; TYPE_1__ poc; int tp_on; TYPE_4__* comps; scalar_t__ first; } ;
typedef TYPE_3__ opj_pi_iterator_t ;
struct TYPE_10__ {size_t numresolutions; TYPE_2__* resolutions; } ;
typedef TYPE_4__ opj_pi_comp_t ;
typedef size_t OPJ_UINT32 ;
typedef int OPJ_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,char*) ;

__attribute__((used)) static OPJ_BOOL FUNC_1(opj_pi_iterator_t * VAR_2)
{
    opj_pi_comp_t *VAR_3 = ((void*)0);
    opj_pi_resolution_t *VAR_4 = ((void*)0);
    OPJ_UINT32 VAR_5 = 0;

    if (!VAR_2->first) {
        VAR_3 = &VAR_2->comps[VAR_2->compno];
        VAR_4 = &VAR_3->resolutions[VAR_2->resno];
        goto LABEL_SKIP;
    } else {
        VAR_2->first = 0;
    }

    for (VAR_2->layno = VAR_2->poc.layno0; VAR_2->layno < VAR_2->poc.layno1; VAR_2->layno++) {
        for (VAR_2->resno = VAR_2->poc.resno0; VAR_2->resno < VAR_2->poc.resno1;
                VAR_2->resno++) {
            for (VAR_2->compno = VAR_2->poc.compno0; VAR_2->compno < VAR_2->poc.compno1; VAR_2->compno++) {
                VAR_3 = &VAR_2->comps[VAR_2->compno];
                if (VAR_2->resno >= VAR_3->numresolutions) {
                    continue;
                }
                VAR_4 = &VAR_3->resolutions[VAR_2->resno];
                if (!VAR_2->tp_on) {
                    VAR_2->poc.precno1 = VAR_4->pw * VAR_4->ph;
                }
                for (VAR_2->precno = VAR_2->poc.precno0; VAR_2->precno < VAR_2->poc.precno1; VAR_2->precno++) {
                    VAR_5 = VAR_2->layno * VAR_2->step_l + VAR_2->resno * VAR_2->step_r + VAR_2->compno *
                            VAR_2->step_c + VAR_2->precno * VAR_2->step_p;






                    if (VAR_5 >= VAR_2->include_size) {
                        FUNC_0(VAR_2, "Invalid access to pi->include");
                        return VAR_0;
                    }
                    if (!VAR_2->include[VAR_5]) {
                        VAR_2->include[VAR_5] = 1;
                        return VAR_1;
                    }
LABEL_SKIP:
                    ;
                }
            }
        }
    }

    return VAR_0;
}
