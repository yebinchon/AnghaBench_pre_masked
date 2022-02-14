
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int csty; int prg; int numlayers; int mct; TYPE_2__* tccps; } ;
typedef TYPE_1__ opj_tcp_t ;
struct TYPE_6__ {int numresolutions; int cblkw; int cblkh; int cblksty; int qmfbid; int csty; int* prch; int* prcw; } ;
typedef TYPE_2__ opj_tccp_t ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,char*,...) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_1(FILE* VAR_5, opj_tcp_t *VAR_6)
{




    opj_tccp_t *VAR_7;
    int VAR_8;
    char VAR_9[13] = "            ";
    char* VAR_10 = VAR_9;
    if (VAR_6 == VAR_2) {
        VAR_10++;
        VAR_10++;
    }
    VAR_7 = &(VAR_6->tccps[0]);

    FUNC_0(VAR_5, "%s<CodingStyleDefault Marker=\"COD\">\n",
            VAR_10);

    FUNC_0(VAR_5, "%s  <Scod>0x%02x</Scod>\n", VAR_10, VAR_6->csty);
    if (VAR_3) {
        FUNC_0(VAR_5,
                "%s  <!-- For Scod, specific bits mean (where bit 0 is lowest or rightmost): -->\n",
                VAR_10);
        FUNC_0(VAR_5, "%s  <!-- bit 0: Defines entropy coder precincts -->\n", VAR_10);
        FUNC_0(VAR_5,
                "%s  <!--        0 = (PPx=15, PPy=15); 1 = precincts defined below. -->\n", VAR_10);
        FUNC_0(VAR_5, "%s  <!-- bit 1: 1 = SOP marker may be used; 0 = not. -->\n",
                VAR_10);
        FUNC_0(VAR_5, "%s  <!-- bit 2: 1 = EPH marker may be used; 0 = not. -->\n",
                VAR_10);
    }
    FUNC_0(VAR_5, "%s  <SGcod>\n", VAR_10);
    FUNC_0(VAR_5, "%s    <ProgressionOrder>%d</ProgressionOrder>\n", VAR_10,
            VAR_6->prg);
    if (VAR_3) {
        FUNC_0(VAR_5, "%s    <!-- Defined Progression Order Values are: -->\n", VAR_10);
        FUNC_0(VAR_5,
                "%s    <!-- 0 = LRCP; 1 = RLCP; 2 = RPCL; 3 = PCRL; 4 = CPRL -->\n", VAR_10);
        FUNC_0(VAR_5,
                "%s    <!-- where L = \"layer\", R = \"resolution level\", C = \"component\", P = \"position\". -->\n",
                VAR_10);
    }
    FUNC_0(VAR_5, "%s    <NumberOfLayers>%d</NumberOfLayers>\n", VAR_10,
            VAR_6->numlayers);
    FUNC_0(VAR_5,
            "%s    <MultipleComponentTransformation>%d</MultipleComponentTransformation>\n",
            VAR_10, VAR_6->mct);
    if (VAR_3) {
        FUNC_0(VAR_5,
                "%s    <!-- For MCT, 0 = none, 1 = transform first 3 components for efficiency, per Part I Annex G -->\n",
                VAR_10);
    }
    FUNC_0(VAR_5, "%s  </SGcod>\n", VAR_10);

    FUNC_0(VAR_5, "%s  <SPcod>\n", VAR_10);



    FUNC_0(VAR_5,
            "%s    <NumberOfDecompositionLevels>%d</NumberOfDecompositionLevels>\n", VAR_10,
            VAR_7->numresolutions - 1);
    FUNC_0(VAR_5, "%s    <CodeblockWidth>%d</CodeblockWidth>\n", VAR_10,
            VAR_7->cblkw - 2);
    FUNC_0(VAR_5, "%s    <CodeblockHeight>%d</CodeblockHeight>\n", VAR_10,
            VAR_7->cblkh - 2);
    if (VAR_3) {
        FUNC_0(VAR_5,
                "%s    <!-- CBW and CBH are non-negative, and summed cannot exceed 8 -->\n", VAR_10);
        FUNC_0(VAR_5, "%s    <!-- Codeblock dimension is 2^(value + 2) -->\n", VAR_10);
    }
    FUNC_0(VAR_5, "%s    <CodeblockStyle>0x%02x</CodeblockStyle>\n", VAR_10,
            VAR_7->cblksty);
    if (VAR_3) {
        FUNC_0(VAR_5,
                "%s    <!-- For CodeblockStyle, bits mean (with value 1=feature on, 0=off): -->\n",
                VAR_10);
        FUNC_0(VAR_5,
                "%s    <!-- bit 0: Selective arithmetic coding bypass. -->\n", VAR_10);
        FUNC_0(VAR_5,
                "%s    <!-- bit 1: Reset context probabilities on coding pass boundaries. -->\n",
                VAR_10);
        FUNC_0(VAR_5, "%s    <!-- bit 2: Termination on each coding pass. -->\n",
                VAR_10);
        FUNC_0(VAR_5, "%s    <!-- bit 3: Vertically causal context. -->\n", VAR_10);
        FUNC_0(VAR_5, "%s    <!-- bit 4: Predictable termination. -->\n", VAR_10);
        FUNC_0(VAR_5, "%s    <!-- bit 5: Segmentation symbols are used. -->\n", VAR_10);
    }
    FUNC_0(VAR_5, "%s    <Transformation>%d</Transformation>\n", VAR_10,
            VAR_7->qmfbid);
    if (VAR_3) {
        FUNC_0(VAR_5,
                "%s    <!-- For Transformation, 0=\"9-7 irreversible filter\", 1=\"5-3 reversible filter\" -->\n",
                VAR_10);
    }
    if (VAR_7->csty & VAR_0) {
        FUNC_0(VAR_5, "%s    <PrecinctSize>\n", VAR_10);
        if (VAR_3) {
            FUNC_0(VAR_5,
                    "%s    <!-- These are size exponents PPx and PPy. May be zero only for first level (aka N(L)LL subband)-->\n",
                    VAR_10);
        }
        for (VAR_8 = 0; VAR_8 < VAR_7->numresolutions; VAR_8++) {
            FUNC_0(VAR_5, "%s      <PrecinctHeightAndWidth  ResolutionLevel=\"%d\">\n",
                    VAR_10, VAR_8);
            if (VAR_4) {
                FUNC_0(VAR_5, "%s        <AsHex>0x%02x</AsHex>\n", VAR_10,
                        (VAR_7->prch[VAR_8] << 4) | VAR_7->prcw[VAR_8]);
            }
            if (VAR_1) {
                FUNC_0(VAR_5, "%s        <WidthAsDecimal>%d</WidthAsDecimal>\n", VAR_10,
                        VAR_7->prcw[VAR_8]);
                FUNC_0(VAR_5, "%s        <HeightAsDecimal>%d</HeightAsDecimal>\n", VAR_10,
                        VAR_7->prch[VAR_8]);
            }
            FUNC_0(VAR_5, "%s      </PrecinctHeightAndWidth>\n", VAR_10, VAR_8);
        }
        FUNC_0(VAR_5, "%s    </PrecinctSize>\n", VAR_10);
    }
    FUNC_0(VAR_5, "%s  </SPcod>\n", VAR_10);
    FUNC_0(VAR_5, "%s</CodingStyleDefault>\n", VAR_10);
}
