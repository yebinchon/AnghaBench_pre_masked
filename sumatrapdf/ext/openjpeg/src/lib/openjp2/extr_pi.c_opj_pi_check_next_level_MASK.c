
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* pocs; } ;
typedef TYPE_1__ opj_tcp_t ;
struct TYPE_6__ {int tyE; int ty0_t; int txE; int tx0_t; int prcE; int prc_t; int prg; int layE; int lay_t; int compE; int comp_t; int resE; int res_t; } ;
typedef TYPE_2__ opj_poc_t ;
struct TYPE_7__ {TYPE_1__* tcps; } ;
typedef TYPE_3__ opj_cp_t ;
typedef size_t OPJ_UINT32 ;
typedef scalar_t__ OPJ_INT32 ;
typedef int OPJ_CHAR ;
typedef void* OPJ_BOOL ;


 void* VAR_0 ;


 void* VAR_1 ;

__attribute__((used)) static OPJ_BOOL FUNC_0(OPJ_INT32 VAR_2,
                                        opj_cp_t *VAR_3,
                                        OPJ_UINT32 VAR_4,
                                        OPJ_UINT32 VAR_5,
                                        const OPJ_CHAR *VAR_6)
{
    OPJ_INT32 VAR_7;
    opj_tcp_t *VAR_8 = &VAR_3->tcps[VAR_4];
    opj_poc_t *VAR_9 = &VAR_8->pocs[VAR_5];

    if (VAR_2 >= 0) {
        for (VAR_7 = VAR_2; VAR_2 >= 0; VAR_7--) {
            switch (VAR_6[VAR_7]) {
            case 'R':
                if (VAR_9->res_t == VAR_9->resE) {
                    if (FUNC_0(VAR_2 - 1, VAR_3, VAR_4, VAR_5, VAR_6)) {
                        return VAR_1;
                    } else {
                        return VAR_0;
                    }
                } else {
                    return VAR_1;
                }
                break;
            case 'C':
                if (VAR_9->comp_t == VAR_9->compE) {
                    if (FUNC_0(VAR_2 - 1, VAR_3, VAR_4, VAR_5, VAR_6)) {
                        return VAR_1;
                    } else {
                        return VAR_0;
                    }
                } else {
                    return VAR_1;
                }
                break;
            case 'L':
                if (VAR_9->lay_t == VAR_9->layE) {
                    if (FUNC_0(VAR_2 - 1, VAR_3, VAR_4, VAR_5, VAR_6)) {
                        return VAR_1;
                    } else {
                        return VAR_0;
                    }
                } else {
                    return VAR_1;
                }
                break;
            case 'P':
                switch (VAR_9->prg) {
                case 129:
                case 128:
                    if (VAR_9->prc_t == VAR_9->prcE) {
                        if (FUNC_0(VAR_7 - 1, VAR_3, VAR_4, VAR_5, VAR_6)) {
                            return VAR_1;
                        } else {
                            return VAR_0;
                        }
                    } else {
                        return VAR_1;
                    }
                    break;
                default:
                    if (VAR_9->tx0_t == VAR_9->txE) {

                        if (VAR_9->ty0_t == VAR_9->tyE) {
                            if (FUNC_0(VAR_7 - 1, VAR_3, VAR_4, VAR_5, VAR_6)) {
                                return VAR_1;
                            } else {
                                return VAR_0;
                            }
                        } else {
                            return VAR_1;
                        }
                    } else {
                        return VAR_1;
                    }
                    break;
                }
            }
        }
    }
    return VAR_0;
}
