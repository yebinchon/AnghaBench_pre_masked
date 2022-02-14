
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* mem; int sn; int dn; scalar_t__ cas; } ;
typedef TYPE_1__ opj_dwt_t ;
typedef int OPJ_UINT32 ;
typedef int OPJ_INT32 ;


 int FUNC_0 (int*,int*,int) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*,int*) ;
 int FUNC_3 (int*,int const,int const,int*) ;
 int FUNC_4 (int*,int const,int const,int*) ;

__attribute__((used)) static void FUNC_5(const opj_dwt_t *VAR_0,
                         OPJ_INT32* VAR_1)
{






    const OPJ_INT32 VAR_2 = VAR_0->sn;
    const OPJ_INT32 VAR_3 = VAR_2 + VAR_0->dn;
    if (VAR_0->cas == 0) {
        if (VAR_3 > 1) {
            FUNC_3(VAR_0->mem, VAR_2, VAR_3, VAR_1);
        } else {

        }
    } else {
        if (VAR_3 == 1) {
            VAR_1[0] /= 2;
        } else if (VAR_3 == 2) {
            OPJ_INT32* VAR_4 = VAR_0->mem;
            const OPJ_INT32* VAR_5 = &VAR_1[VAR_2];
            const OPJ_INT32* VAR_6 = &VAR_1[0];
            VAR_4[1] = VAR_6[0] - ((VAR_5[0] + 1) >> 1);
            VAR_4[0] = VAR_5[0] + VAR_4[1];
            FUNC_0(VAR_1, VAR_0->mem, (OPJ_UINT32)VAR_3 * sizeof(OPJ_INT32));
        } else if (VAR_3 > 2) {
            FUNC_4(VAR_0->mem, VAR_2, VAR_3, VAR_1);
        }
    }

}
