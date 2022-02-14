
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numresolutions; scalar_t__ qmfbid; scalar_t__ qntsty; int * stepsizes; } ;
typedef TYPE_1__ opj_tccp_t ;
typedef int OPJ_UINT32 ;
typedef int OPJ_INT32 ;
typedef int OPJ_FLOAT64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int *) ;
 int** VAR_1 ;

void FUNC_2(opj_tccp_t * VAR_2, OPJ_UINT32 VAR_3)
{
    OPJ_UINT32 VAR_4, VAR_5;
    VAR_4 = 3 * VAR_2->numresolutions - 2;
    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        OPJ_FLOAT64 VAR_6;
        OPJ_UINT32 VAR_7, VAR_8, VAR_9, VAR_10;

        VAR_7 = (VAR_5 == 0) ? 0 : ((VAR_5 - 1) / 3 + 1);
        VAR_9 = (VAR_5 == 0) ? 0 : ((VAR_5 - 1) % 3 + 1);
        VAR_8 = VAR_2->numresolutions - 1 - VAR_7;
        VAR_10 = (VAR_2->qmfbid == 0) ? 0 : ((VAR_9 == 0) ? 0 : (((VAR_9 == 1) ||
                                          (VAR_9 == 2)) ? 1 : 2));
        if (VAR_2->qntsty == VAR_0) {
            VAR_6 = 1.0;
        } else {
            OPJ_FLOAT64 VAR_11 = VAR_1[VAR_9][VAR_8];
            VAR_6 = (1 << (VAR_10)) / VAR_11;
        }
        FUNC_1((OPJ_INT32) FUNC_0(VAR_6 * 8192.0),
                                (OPJ_INT32)(VAR_3 + VAR_10), &VAR_2->stepsizes[VAR_5]);
    }
}
