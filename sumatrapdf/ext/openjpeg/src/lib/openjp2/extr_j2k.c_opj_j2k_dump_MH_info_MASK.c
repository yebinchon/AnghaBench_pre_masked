
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int m_default_tcp; } ;
struct TYPE_9__ {TYPE_2__ m_decoder; } ;
struct TYPE_7__ {int tx0; int ty0; int tdx; int tdy; int tw; int th; } ;
struct TYPE_11__ {TYPE_4__* m_private_image; TYPE_3__ m_specific_param; TYPE_1__ m_cp; } ;
typedef TYPE_5__ opj_j2k_t ;
struct TYPE_10__ {scalar_t__ numcomps; } ;
typedef int OPJ_INT32 ;
typedef int FILE ;


 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int ,int ,int *) ;

__attribute__((used)) static void FUNC_2(opj_j2k_t* VAR_0, FILE* VAR_1)
{

    FUNC_0(VAR_1, "Codestream info from main header: {\n");

    FUNC_0(VAR_1, "\t tx0=%d, ty0=%d\n", VAR_0->m_cp.tx0, VAR_0->m_cp.ty0);
    FUNC_0(VAR_1, "\t tdx=%d, tdy=%d\n", VAR_0->m_cp.tdx, VAR_0->m_cp.tdy);
    FUNC_0(VAR_1, "\t tw=%d, th=%d\n", VAR_0->m_cp.tw, VAR_0->m_cp.th);
    FUNC_1(VAR_0->m_specific_param.m_decoder.m_default_tcp,
                           (OPJ_INT32)VAR_0->m_private_image->numcomps, VAR_1);
    FUNC_0(VAR_1, "}\n");
}
