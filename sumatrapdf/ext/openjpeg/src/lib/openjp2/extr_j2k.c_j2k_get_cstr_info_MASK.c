
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_23__ {TYPE_8__* tccps; int mct; int numlayers; int prg; int csty; } ;
typedef TYPE_7__ opj_tcp_t ;
struct TYPE_24__ {scalar_t__ numresolutions; scalar_t__ qntsty; int roishift; TYPE_6__* stepsizes; int numgbits; int prcw; int prch; int qmfbid; int cblksty; int cblkh; int cblkw; int csty; } ;
typedef TYPE_8__ opj_tccp_t ;
struct TYPE_25__ {scalar_t__ numresolutions; scalar_t__ qntsty; size_t* stepsizes_mant; size_t* stepsizes_expn; int roishift; int numgbits; int prcw; int prch; int qmfbid; int cblksty; int cblkh; int cblkw; int csty; } ;
typedef TYPE_9__ opj_tccp_info_t ;
struct TYPE_19__ {TYPE_7__* m_default_tcp; } ;
struct TYPE_20__ {TYPE_3__ m_decoder; } ;
struct TYPE_18__ {int th; int tw; int tdy; int tdx; int ty0; int tx0; } ;
struct TYPE_15__ {TYPE_4__ m_specific_param; TYPE_2__ m_cp; TYPE_1__* m_private_image; } ;
typedef TYPE_10__ opj_j2k_t ;
struct TYPE_21__ {TYPE_9__* tccp_info; int mct; int numlayers; int prg; int csty; } ;
struct TYPE_16__ {int nbcomps; TYPE_5__ m_default_tile_info; int * tile_info; int th; int tw; int tdy; int tdx; int ty0; int tx0; } ;
typedef TYPE_11__ opj_codestream_info_v2_t ;
struct TYPE_22__ {scalar_t__ expn; scalar_t__ mant; } ;
struct TYPE_17__ {size_t numcomps; } ;
typedef size_t OPJ_UINT32 ;
typedef int OPJ_INT32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_11__**) ;

opj_codestream_info_v2_t* FUNC_3(opj_j2k_t* VAR_3)
{
    OPJ_UINT32 VAR_4;
    OPJ_UINT32 VAR_5 = VAR_3->m_private_image->numcomps;
    opj_tcp_t *VAR_6;
    opj_codestream_info_v2_t* VAR_7 = (opj_codestream_info_v2_t*) FUNC_1(1,
                                          sizeof(opj_codestream_info_v2_t));
    if (!VAR_7) {
        return ((void*)0);
    }

    VAR_7->nbcomps = VAR_3->m_private_image->numcomps;

    VAR_7->tx0 = VAR_3->m_cp.tx0;
    VAR_7->ty0 = VAR_3->m_cp.ty0;
    VAR_7->tdx = VAR_3->m_cp.tdx;
    VAR_7->tdy = VAR_3->m_cp.tdy;
    VAR_7->tw = VAR_3->m_cp.tw;
    VAR_7->th = VAR_3->m_cp.th;

    VAR_7->tile_info = ((void*)0);

    VAR_6 = VAR_3->m_specific_param.m_decoder.m_default_tcp;

    VAR_7->m_default_tile_info.csty = VAR_6->csty;
    VAR_7->m_default_tile_info.prg = VAR_6->prg;
    VAR_7->m_default_tile_info.numlayers = VAR_6->numlayers;
    VAR_7->m_default_tile_info.mct = VAR_6->mct;

    VAR_7->m_default_tile_info.tccp_info = (opj_tccp_info_t*) FUNC_1(
                VAR_7->nbcomps, sizeof(opj_tccp_info_t));
    if (!VAR_7->m_default_tile_info.tccp_info) {
        FUNC_2(&VAR_7);
        return ((void*)0);
    }

    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
        opj_tccp_t *VAR_8 = &(VAR_6->tccps[VAR_4]);
        opj_tccp_info_t *VAR_9 = &
                                       (VAR_7->m_default_tile_info.tccp_info[VAR_4]);
        OPJ_INT32 VAR_10, VAR_11;


        VAR_9->csty = VAR_8->csty;
        VAR_9->numresolutions = VAR_8->numresolutions;
        VAR_9->cblkw = VAR_8->cblkw;
        VAR_9->cblkh = VAR_8->cblkh;
        VAR_9->cblksty = VAR_8->cblksty;
        VAR_9->qmfbid = VAR_8->qmfbid;
        if (VAR_8->numresolutions < VAR_2) {
            FUNC_0(VAR_9->prch, VAR_8->prch, VAR_8->numresolutions);
            FUNC_0(VAR_9->prcw, VAR_8->prcw, VAR_8->numresolutions);
        }


        VAR_9->qntsty = VAR_8->qntsty;
        VAR_9->numgbits = VAR_8->numgbits;

        VAR_11 = (VAR_8->qntsty == VAR_0) ? 1 :
                   (OPJ_INT32)VAR_8->numresolutions * 3 - 2;
        if (VAR_11 < VAR_1) {
            for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
                VAR_9->stepsizes_mant[VAR_10] = (OPJ_UINT32)
                                                      VAR_8->stepsizes[VAR_10].mant;
                VAR_9->stepsizes_expn[VAR_10] = (OPJ_UINT32)
                                                      VAR_8->stepsizes[VAR_10].expn;
            }
        }


        VAR_9->roishift = VAR_8->roishift;
    }

    return VAR_7;
}
