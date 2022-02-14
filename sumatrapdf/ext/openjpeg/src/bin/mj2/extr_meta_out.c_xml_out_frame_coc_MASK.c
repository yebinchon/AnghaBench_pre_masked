
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* tccps; } ;
typedef TYPE_1__ opj_tcp_t ;
struct TYPE_8__ {int csty; int numresolutions; int cblkw; int cblkh; int cblksty; int qmfbid; int* prch; int* prcw; } ;
typedef TYPE_2__ opj_tccp_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,char*,...) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*) ;

void FUNC_2(FILE* VAR_5, opj_tcp_t *VAR_6,
                       int VAR_7)
{

    opj_tccp_t *VAR_8, *VAR_9;
    int VAR_10, VAR_11;
    char VAR_12[13] = "            ";
    char* VAR_13 = VAR_12;
    if (VAR_6 == VAR_2) {
        VAR_13++;
        VAR_13++;
    }

    VAR_9 = &(VAR_6->tccps[0]);





    if (VAR_3) {
        FUNC_0(VAR_5,
                "%s<!-- mj2_to_metadata implementation always reports component[0] as using default COD, -->\n",
                VAR_13);
        if (VAR_6 == VAR_2) {
            FUNC_0(VAR_5,
                    "%s<!-- and any other component, with main-header style values different from [0], as COC. -->\n",
                    VAR_13);
        } else {
            FUNC_0(VAR_5,
                    "%s<!-- and any other component, with tile-part-header style values different from [0], as COC. -->\n",
                    VAR_13);
        }
    }
    for (VAR_11 = 1; VAR_11 < VAR_7;
            VAR_11++) {
        VAR_8 = &VAR_6->tccps[VAR_11];
        if (FUNC_1(VAR_9, VAR_8)) {
            continue;
        }


        FUNC_0(VAR_5, "%s<CodingStyleComponent Marker=\"COC\">\n",
                VAR_13);
        if (VAR_3) {
            FUNC_0(VAR_5,
                    "%s  <!-- See Ccoc below for zero-based component number. -->\n", VAR_13);
        }


        FUNC_0(VAR_5, "%s  <Scoc>0x%02x</Scoc>\n", VAR_13, VAR_8->csty);
        if (VAR_3) {
            FUNC_0(VAR_5, "%s  <!-- Scoc defines entropy coder precincts: -->\n", VAR_13);
            FUNC_0(VAR_5,
                    "%s  <!--   0 = maximum, namely (PPx=15, PPy=15); 1 = precincts defined below. -->\n",
                    VAR_13);
        }
        FUNC_0(VAR_5, "%s  <Ccoc>%d</Ccoc>\n", VAR_13, VAR_11);







        FUNC_0(VAR_5, "%s  <SPcoc>\n", VAR_13);
        FUNC_0(VAR_5,
                "%s    <NumberOfDecompositionLevels>%d</NumberOfDecompositionLevels>\n", VAR_13,
                VAR_8->numresolutions - 1);
        FUNC_0(VAR_5, "%s    <CodeblockWidth>%d</CodeblockWidth>\n", VAR_13,
                VAR_8->cblkw - 2);
        FUNC_0(VAR_5, "%s    <CodeblockHeight>%d</CodeblockHeight>\n", VAR_13,
                VAR_8->cblkh - 2);
        if (VAR_3) {
            FUNC_0(VAR_5,
                    "%s    <!-- CBW and CBH are non-negative, and summed cannot exceed 8 -->\n", VAR_13);
            FUNC_0(VAR_5, "%s    <!-- Codeblock dimension is 2^(value + 2) -->\n", VAR_13);
        }
        FUNC_0(VAR_5, "%s    <CodeblockStyle>0x%02x</CodeblockStyle>\n", VAR_13,
                VAR_8->cblksty);
        if (VAR_3) {
            FUNC_0(VAR_5,
                    "%s    <!-- For CodeblockStyle, bits mean (with value 1=feature on, 0=off): -->\n",
                    VAR_13);
            FUNC_0(VAR_5,
                    "%s    <!-- bit 0: Selective arithmetic coding bypass. -->\n", VAR_13);
            FUNC_0(VAR_5,
                    "%s    <!-- bit 1: Reset context probabilities on coding pass boundaries. -->\n",
                    VAR_13);
            FUNC_0(VAR_5, "%s    <!-- bit 2: Termination on each coding pass. -->\n",
                    VAR_13);
            FUNC_0(VAR_5, "%s    <!-- bit 3: Vertically causal context. -->\n", VAR_13);
            FUNC_0(VAR_5, "%s    <!-- bit 4: Predictable termination. -->\n", VAR_13);
            FUNC_0(VAR_5, "%s    <!-- bit 5: Segmentation symbols are used. -->\n", VAR_13);
        }
        FUNC_0(VAR_5, "%s    <Transformation>%d</Transformation>\n", VAR_13,
                VAR_8->qmfbid);
        if (VAR_3) {
            FUNC_0(VAR_5,
                    "%s    <!-- For Transformation, 0=\"9-7 irreversible filter\", 1=\"5-3 reversible filter\" -->\n",
                    VAR_13);
        }
        if (VAR_8->csty & VAR_0) {
            FUNC_0(VAR_5, "%s    <PrecinctSize>\n", VAR_13);
            if (VAR_3) {
                FUNC_0(VAR_5,
                        "%s      <!-- These are size exponents PPx and PPy. May be zero only for first level (aka N(L)LL subband)-->\n",
                        VAR_13);
            }
            for (VAR_10 = 0; VAR_10 < VAR_8->numresolutions - 1;
                    VAR_10++) {
                FUNC_0(VAR_5, "%s      <PrecinctHeightAndWidth  ResolutionLevel=\"%d\">\n",
                        VAR_13, VAR_10);
                if (VAR_4) {
                    FUNC_0(VAR_5, "%s        <AsHex>0x%02x</AsHex>\n", VAR_13,
                            (VAR_8->prch[VAR_10] << 4) | VAR_8->prcw[VAR_10]);
                }
                if (VAR_1) {
                    FUNC_0(VAR_5, "%s        <WidthAsDecimal>%d</WidthAsDecimal>\n", VAR_13,
                            VAR_8->prcw[VAR_10]);
                    FUNC_0(VAR_5, "%s        <HeightAsDecimal>%d</HeightAsDecimal>\n", VAR_13,
                            VAR_8->prch[VAR_10]);
                }
                FUNC_0(VAR_5, "%s      </PrecinctHeightAndWidth>\n", VAR_13, VAR_10);
            }
            FUNC_0(VAR_5, "%s    </PrecinctSize>\n", VAR_13);
        }
        FUNC_0(VAR_5, "%s  </SPcoc>\n", VAR_13);
        FUNC_0(VAR_5, "%s</CodingStyleComponent>\n", VAR_13);
    }
}
