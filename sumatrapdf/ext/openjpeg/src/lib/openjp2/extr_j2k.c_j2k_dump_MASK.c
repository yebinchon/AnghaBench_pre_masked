
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int opj_tcp_t ;
struct TYPE_7__ {scalar_t__ th; scalar_t__ tw; int * tcps; } ;
struct TYPE_8__ {TYPE_5__* m_private_image; TYPE_1__ m_cp; } ;
typedef TYPE_2__ opj_j2k_t ;
struct TYPE_9__ {scalar_t__ numcomps; } ;
typedef scalar_t__ OPJ_UINT32 ;
typedef int OPJ_INT32 ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_5__*,int ,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (int *,int,int *) ;

void FUNC_5(opj_j2k_t* VAR_8, OPJ_INT32 VAR_9, FILE* VAR_10)
{

    if ((VAR_9 & VAR_7) || (VAR_9 & VAR_6)) {
        FUNC_0(VAR_10, "Wrong flag\n");
        return;
    }


    if (VAR_9 & VAR_0) {
        if (VAR_8->m_private_image) {
            FUNC_1(VAR_8->m_private_image, 0, VAR_10);
        }
    }


    if (VAR_9 & VAR_2) {
        if (VAR_8->m_private_image) {
            FUNC_3(VAR_8, VAR_10);
        }
    }

    if (VAR_9 & VAR_3) {
        OPJ_UINT32 VAR_11 = VAR_8->m_cp.th * VAR_8->m_cp.tw;
        OPJ_UINT32 VAR_12;
        opj_tcp_t * VAR_13 = VAR_8->m_cp.tcps;
        if (VAR_8->m_private_image) {
            for (VAR_12 = 0; VAR_12 < VAR_11; ++VAR_12) {
                FUNC_4(VAR_13, (OPJ_INT32)VAR_8->m_private_image->numcomps,
                                       VAR_10);
                ++VAR_13;
            }
        }
    }


    if (VAR_9 & VAR_5) {

    }


    if (VAR_9 & VAR_1) {
        FUNC_2(VAR_8, VAR_10);
    }


    if (VAR_9 & VAR_4) {

    }

}
