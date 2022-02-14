
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tw; scalar_t__ th; } ;
struct TYPE_8__ {TYPE_2__* m_private_image; TYPE_1__ m_cp; } ;
typedef TYPE_3__ opj_j2k_t ;
struct TYPE_7__ {scalar_t__ numcomps; } ;
typedef scalar_t__ OPJ_UINT32 ;


 int FUNC_0 (TYPE_3__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

__attribute__((used)) static OPJ_UINT32 FUNC_2(opj_j2k_t *VAR_0)
{
    OPJ_UINT32 VAR_1, VAR_2;
    OPJ_UINT32 VAR_3;
    OPJ_UINT32 VAR_4;
    OPJ_UINT32 VAR_5 = 0;



    VAR_4 = VAR_0->m_cp.tw * VAR_0->m_cp.th ;
    VAR_3 = VAR_0->m_private_image->numcomps;

    for (VAR_1 = 0; VAR_1 < VAR_4; ++VAR_1) {
        for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
            VAR_5 = FUNC_1(VAR_5, FUNC_0(VAR_0, VAR_1, VAR_2));
        }
    }

    return 6 + VAR_5;
}
