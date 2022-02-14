
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int numpocs; } ;
typedef TYPE_2__ opj_tcp_t ;
struct TYPE_5__ {int th; int tw; TYPE_2__* tcps; } ;
struct TYPE_7__ {TYPE_1__ m_cp; } ;
typedef TYPE_3__ opj_j2k_t ;
typedef int OPJ_UINT32 ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static OPJ_UINT32 FUNC_1(opj_j2k_t *VAR_0)
{
    opj_tcp_t * VAR_1 = 00;
    OPJ_UINT32 VAR_2 = 0;
    OPJ_UINT32 VAR_3 = 0;
    OPJ_UINT32 VAR_4;

    VAR_1 = VAR_0->m_cp.tcps;
    VAR_2 = VAR_0->m_cp.th * VAR_0->m_cp.tw;

    for (VAR_4 = 0; VAR_4 < VAR_2; ++VAR_4) {
        VAR_3 = FUNC_0(VAR_3, VAR_1->numpocs);
        ++VAR_1;
    }

    ++VAR_3;

    return 4 + 9 * VAR_3;
}
