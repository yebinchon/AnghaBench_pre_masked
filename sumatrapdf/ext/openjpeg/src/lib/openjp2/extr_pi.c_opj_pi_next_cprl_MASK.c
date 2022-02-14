
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int pdx; int pdy; scalar_t__ pw; scalar_t__ ph; } ;
typedef TYPE_2__ opj_pi_resolution_t ;
struct TYPE_7__ {size_t compno0; size_t compno1; scalar_t__ ty0; scalar_t__ tx0; scalar_t__ ty1; scalar_t__ tx1; size_t resno0; size_t resno1; size_t layno0; size_t layno1; } ;
struct TYPE_9__ {size_t compno; size_t dx; size_t dy; scalar_t__ ty0; scalar_t__ tx0; scalar_t__ ty1; scalar_t__ tx1; size_t y; size_t x; size_t resno; size_t precno; size_t layno; size_t step_l; size_t step_r; size_t step_c; size_t step_p; size_t include_size; int* include; TYPE_1__ poc; int tp_on; TYPE_4__* comps; scalar_t__ first; } ;
typedef TYPE_3__ opj_pi_iterator_t ;
struct TYPE_10__ {size_t numresolutions; unsigned int dx; unsigned int dy; TYPE_2__* resolutions; } ;
typedef TYPE_4__ opj_pi_comp_t ;
typedef size_t OPJ_UINT32 ;
typedef size_t OPJ_INT32 ;
typedef int OPJ_BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 size_t FUNC_0 (scalar_t__,size_t) ;
 size_t FUNC_1 (size_t,size_t) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 size_t FUNC_3 (size_t,size_t) ;

__attribute__((used)) static OPJ_BOOL FUNC_4(opj_pi_iterator_t * VAR_4)
{
    opj_pi_comp_t *VAR_5 = ((void*)0);
    opj_pi_resolution_t *VAR_6 = ((void*)0);
    OPJ_UINT32 VAR_7 = 0;

    if (!VAR_4->first) {
        VAR_5 = &VAR_4->comps[VAR_4->compno];
        goto LABEL_SKIP;
    } else {
        VAR_4->first = 0;
    }

    for (VAR_4->compno = VAR_4->poc.compno0; VAR_4->compno < VAR_4->poc.compno1; VAR_4->compno++) {
        OPJ_UINT32 VAR_8;
        VAR_5 = &VAR_4->comps[VAR_4->compno];
        VAR_4->dx = 0;
        VAR_4->dy = 0;
        for (VAR_8 = 0; VAR_8 < VAR_5->numresolutions; VAR_8++) {
            OPJ_UINT32 VAR_9, VAR_10;
            VAR_6 = &VAR_5->resolutions[VAR_8];
            if (VAR_6->pdx + VAR_5->numresolutions - 1 - VAR_8 < 32 &&
                    VAR_5->dx <= VAR_3 / (1u << (VAR_6->pdx + VAR_5->numresolutions - 1 - VAR_8))) {
                VAR_9 = VAR_5->dx * (1u << (VAR_6->pdx + VAR_5->numresolutions - 1 - VAR_8));
                VAR_4->dx = !VAR_4->dx ? VAR_9 : FUNC_3(VAR_4->dx, VAR_9);
            }
            if (VAR_6->pdy + VAR_5->numresolutions - 1 - VAR_8 < 32 &&
                    VAR_5->dy <= VAR_3 / (1u << (VAR_6->pdy + VAR_5->numresolutions - 1 - VAR_8))) {
                VAR_10 = VAR_5->dy * (1u << (VAR_6->pdy + VAR_5->numresolutions - 1 - VAR_8));
                VAR_4->dy = !VAR_4->dy ? VAR_10 : FUNC_3(VAR_4->dy, VAR_10);
            }
        }
        if (VAR_4->dx == 0 || VAR_4->dy == 0) {
            return VAR_1;
        }
        if (!VAR_4->tp_on) {
            VAR_4->poc.ty0 = VAR_4->ty0;
            VAR_4->poc.tx0 = VAR_4->tx0;
            VAR_4->poc.ty1 = VAR_4->ty1;
            VAR_4->poc.tx1 = VAR_4->tx1;
        }
        for (VAR_4->y = VAR_4->poc.ty0; VAR_4->y < VAR_4->poc.ty1;
                VAR_4->y += (OPJ_INT32)(VAR_4->dy - (OPJ_UINT32)(VAR_4->y % (OPJ_INT32)VAR_4->dy))) {
            for (VAR_4->x = VAR_4->poc.tx0; VAR_4->x < VAR_4->poc.tx1;
                    VAR_4->x += (OPJ_INT32)(VAR_4->dx - (OPJ_UINT32)(VAR_4->x % (OPJ_INT32)VAR_4->dx))) {
                for (VAR_4->resno = VAR_4->poc.resno0;
                        VAR_4->resno < FUNC_3(VAR_4->poc.resno1, VAR_5->numresolutions); VAR_4->resno++) {
                    OPJ_UINT32 VAR_11;
                    OPJ_INT32 VAR_12, VAR_13;
                    OPJ_INT32 VAR_14, VAR_15;
                    OPJ_UINT32 VAR_16, VAR_17;
                    OPJ_INT32 VAR_18, VAR_19;
                    VAR_6 = &VAR_5->resolutions[VAR_4->resno];
                    VAR_11 = VAR_5->numresolutions - 1 - VAR_4->resno;


                    if (VAR_11 >= 32 ||
                            ((VAR_5->dx << VAR_11) >> VAR_11) != VAR_5->dx ||
                            ((VAR_5->dy << VAR_11) >> VAR_11) != VAR_5->dy) {
                        continue;
                    }
                    if ((VAR_5->dx << VAR_11) > VAR_0 ||
                            (VAR_5->dy << VAR_11) > VAR_0) {
                        continue;
                    }
                    VAR_12 = FUNC_0(VAR_4->tx0, (OPJ_INT32)(VAR_5->dx << VAR_11));
                    VAR_13 = FUNC_0(VAR_4->ty0, (OPJ_INT32)(VAR_5->dy << VAR_11));
                    VAR_14 = FUNC_0(VAR_4->tx1, (OPJ_INT32)(VAR_5->dx << VAR_11));
                    VAR_15 = FUNC_0(VAR_4->ty1, (OPJ_INT32)(VAR_5->dy << VAR_11));
                    VAR_16 = VAR_6->pdx + VAR_11;
                    VAR_17 = VAR_6->pdy + VAR_11;





                    if (VAR_16 >= 31 || ((VAR_5->dx << VAR_16) >> VAR_16) != VAR_5->dx ||
                            VAR_17 >= 31 || ((VAR_5->dy << VAR_17) >> VAR_17) != VAR_5->dy) {
                        continue;
                    }


                    if (!((VAR_4->y % (OPJ_INT32)(VAR_5->dy << VAR_17) == 0) || ((VAR_4->y == VAR_4->ty0) &&
                            ((VAR_13 << VAR_11) % (1 << VAR_17))))) {
                        continue;
                    }
                    if (!((VAR_4->x % (OPJ_INT32)(VAR_5->dx << VAR_16) == 0) || ((VAR_4->x == VAR_4->tx0) &&
                            ((VAR_12 << VAR_11) % (1 << VAR_16))))) {
                        continue;
                    }

                    if ((VAR_6->pw == 0) || (VAR_6->ph == 0)) {
                        continue;
                    }

                    if ((VAR_12 == VAR_14) || (VAR_13 == VAR_15)) {
                        continue;
                    }

                    VAR_18 = FUNC_1(FUNC_0(VAR_4->x,
                                                (OPJ_INT32)(VAR_5->dx << VAR_11)), (OPJ_INT32)VAR_6->pdx)
                           - FUNC_1(VAR_12, (OPJ_INT32)VAR_6->pdx);
                    VAR_19 = FUNC_1(FUNC_0(VAR_4->y,
                                                (OPJ_INT32)(VAR_5->dy << VAR_11)), (OPJ_INT32)VAR_6->pdy)
                           - FUNC_1(VAR_13, (OPJ_INT32)VAR_6->pdy);
                    VAR_4->precno = (OPJ_UINT32)(VAR_18 + VAR_19 * (OPJ_INT32)VAR_6->pw);
                    for (VAR_4->layno = VAR_4->poc.layno0; VAR_4->layno < VAR_4->poc.layno1; VAR_4->layno++) {
                        VAR_7 = VAR_4->layno * VAR_4->step_l + VAR_4->resno * VAR_4->step_r + VAR_4->compno *
                                VAR_4->step_c + VAR_4->precno * VAR_4->step_p;
                        if (VAR_7 >= VAR_4->include_size) {
                            FUNC_2(VAR_4, "Invalid access to pi->include");
                            return VAR_1;
                        }
                        if (!VAR_4->include[VAR_7]) {
                            VAR_4->include[VAR_7] = 1;
                            return VAR_2;
                        }
LABEL_SKIP:
                        ;
                    }
                }
            }
        }
    }

    return VAR_1;
}
