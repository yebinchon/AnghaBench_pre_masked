
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int csty; int prg; int numlayers; int mct; TYPE_3__* tccps; } ;
typedef TYPE_2__ opj_tcp_t ;
struct TYPE_7__ {int csty; int numresolutions; int cblkw; int cblkh; int cblksty; int qmfbid; int* prcw; int* prch; int qntsty; int numgbits; int roishift; TYPE_1__* stepsizes; } ;
typedef TYPE_3__ opj_tccp_t ;
struct TYPE_5__ {int mant; int expn; } ;
typedef size_t OPJ_UINT32 ;
typedef size_t OPJ_INT32 ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void FUNC_1(opj_tcp_t * VAR_1,
                                   OPJ_INT32 VAR_2, FILE* VAR_3)
{
    if (VAR_1) {
        OPJ_INT32 VAR_4;

        FUNC_0(VAR_3, "\t default tile {\n");
        FUNC_0(VAR_3, "\t\t csty=%#x\n", VAR_1->csty);
        FUNC_0(VAR_3, "\t\t prg=%#x\n", VAR_1->prg);
        FUNC_0(VAR_3, "\t\t numlayers=%d\n", VAR_1->numlayers);
        FUNC_0(VAR_3, "\t\t mct=%x\n", VAR_1->mct);

        for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
            opj_tccp_t *VAR_5 = &(VAR_1->tccps[VAR_4]);
            OPJ_UINT32 VAR_6;
            OPJ_INT32 VAR_7, VAR_8;


            FUNC_0(VAR_3, "\t\t comp %d {\n", VAR_4);
            FUNC_0(VAR_3, "\t\t\t csty=%#x\n", VAR_5->csty);
            FUNC_0(VAR_3, "\t\t\t numresolutions=%d\n", VAR_5->numresolutions);
            FUNC_0(VAR_3, "\t\t\t cblkw=2^%d\n", VAR_5->cblkw);
            FUNC_0(VAR_3, "\t\t\t cblkh=2^%d\n", VAR_5->cblkh);
            FUNC_0(VAR_3, "\t\t\t cblksty=%#x\n", VAR_5->cblksty);
            FUNC_0(VAR_3, "\t\t\t qmfbid=%d\n", VAR_5->qmfbid);

            FUNC_0(VAR_3, "\t\t\t preccintsize (w,h)=");
            for (VAR_6 = 0; VAR_6 < VAR_5->numresolutions; VAR_6++) {
                FUNC_0(VAR_3, "(%d,%d) ", VAR_5->prcw[VAR_6], VAR_5->prch[VAR_6]);
            }
            FUNC_0(VAR_3, "\n");


            FUNC_0(VAR_3, "\t\t\t qntsty=%d\n", VAR_5->qntsty);
            FUNC_0(VAR_3, "\t\t\t numgbits=%d\n", VAR_5->numgbits);
            FUNC_0(VAR_3, "\t\t\t stepsizes (m,e)=");
            VAR_8 = (VAR_5->qntsty == VAR_0) ? 1 :
                       (OPJ_INT32)VAR_5->numresolutions * 3 - 2;
            for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
                FUNC_0(VAR_3, "(%d,%d) ", VAR_5->stepsizes[VAR_7].mant,
                        VAR_5->stepsizes[VAR_7].expn);
            }
            FUNC_0(VAR_3, "\n");


            FUNC_0(VAR_3, "\t\t\t roishift=%d\n", VAR_5->roishift);

            FUNC_0(VAR_3, "\t\t }\n");
        }
        FUNC_0(VAR_3, "\t }\n");
    }
}
