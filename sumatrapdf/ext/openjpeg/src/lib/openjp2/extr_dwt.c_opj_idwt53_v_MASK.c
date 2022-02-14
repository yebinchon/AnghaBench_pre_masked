
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sn; scalar_t__ dn; scalar_t__* mem; scalar_t__ cas; } ;
typedef TYPE_1__ opj_dwt_t ;
typedef scalar_t__ OPJ_SIZE_T ;
typedef scalar_t__ OPJ_INT32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (TYPE_1__ const*,scalar_t__*,scalar_t__) ;
 int FUNC_2 (scalar_t__*,scalar_t__ const,scalar_t__ const,scalar_t__*,scalar_t__) ;
 int FUNC_3 (scalar_t__*,scalar_t__ const,scalar_t__ const,scalar_t__*,scalar_t__) ;
 int FUNC_4 (scalar_t__*,scalar_t__ const,scalar_t__ const,scalar_t__*,scalar_t__) ;
 int FUNC_5 (scalar_t__*,scalar_t__ const,scalar_t__ const,scalar_t__*,scalar_t__) ;

__attribute__((used)) static void FUNC_6(const opj_dwt_t *VAR_1,
                         OPJ_INT32* VAR_2,
                         OPJ_SIZE_T VAR_3,
                         OPJ_INT32 VAR_4)
{
    const OPJ_INT32 VAR_5 = VAR_1->sn;
    const OPJ_INT32 VAR_6 = VAR_5 + VAR_1->dn;
    if (VAR_1->cas == 0) {



        if (VAR_6 > 1 && VAR_4 == VAR_0) {


            FUNC_4(VAR_1->mem, VAR_5, VAR_6, VAR_2, VAR_3);
            return;
        }

        if (VAR_6 > 1) {
            OPJ_INT32 VAR_7;
            for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++, VAR_2++) {
                FUNC_2(VAR_1->mem, VAR_5, VAR_6, VAR_2, VAR_3);
            }
            return;
        }
    } else {
        if (VAR_6 == 1) {
            OPJ_INT32 VAR_8;
            for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++, VAR_2++) {
                VAR_2[0] /= 2;
            }
            return;
        }

        if (VAR_6 == 2) {
            OPJ_INT32 VAR_9;
            OPJ_INT32* VAR_10 = VAR_1->mem;
            for (VAR_9 = 0; VAR_9 < VAR_4; VAR_9++, VAR_2++) {
                OPJ_INT32 VAR_11;
                const OPJ_INT32* VAR_12 = &VAR_2[(OPJ_SIZE_T)VAR_5 * VAR_3];
                const OPJ_INT32* VAR_13 = &VAR_2[0];

                VAR_10[1] = VAR_13[0] - ((VAR_12[0] + 1) >> 1);
                VAR_10[0] = VAR_12[0] + VAR_10[1];

                for (VAR_11 = 0; VAR_11 < VAR_6; ++VAR_11) {
                    VAR_2[(OPJ_SIZE_T)VAR_11 * VAR_3] = VAR_10[VAR_11];
                }
            }

            return;
        }


        if (VAR_6 > 2 && VAR_4 == VAR_0) {


            FUNC_5(VAR_1->mem, VAR_5, VAR_6, VAR_2, VAR_3);
            return;
        }

        if (VAR_6 > 2) {
            OPJ_INT32 VAR_14;
            for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++, VAR_2++) {
                FUNC_3(VAR_1->mem, VAR_5, VAR_6, VAR_2, VAR_3);
            }
            return;
        }
    }

}
