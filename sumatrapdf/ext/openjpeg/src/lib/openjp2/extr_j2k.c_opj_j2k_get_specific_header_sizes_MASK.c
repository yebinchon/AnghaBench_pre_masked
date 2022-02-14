
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int rsiz; } ;
struct TYPE_11__ {TYPE_2__ m_cp; TYPE_1__* m_private_image; } ;
typedef TYPE_3__ opj_j2k_t ;
struct TYPE_9__ {int numcomps; } ;
typedef int OPJ_UINT32 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static OPJ_UINT32 FUNC_5(opj_j2k_t *VAR_0)
{
    OPJ_UINT32 VAR_1 = 0;
    OPJ_UINT32 VAR_2;
    OPJ_UINT32 VAR_3, VAR_4;

    VAR_2 = VAR_0->m_private_image->numcomps - 1;
    VAR_1 += FUNC_4(VAR_0);

    if (!(FUNC_0(VAR_0->m_cp.rsiz))) {
        VAR_3 = FUNC_1(VAR_0);
        VAR_1 += VAR_2 * VAR_3;

        VAR_4 = FUNC_3(VAR_0);
        VAR_1 += VAR_2 * VAR_4;
    }

    VAR_1 += FUNC_2(VAR_0);



    return VAR_1;
}
