
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* tccps; } ;
typedef TYPE_2__ opj_tcp_t ;
struct TYPE_10__ {int numgbits; int qntsty; TYPE_1__* stepsizes; } ;
typedef TYPE_3__ opj_tccp_t ;
struct TYPE_8__ {int expn; int mant; } ;
typedef int FILE ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,char*,...) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_3__*) ;

void FUNC_2(FILE* VAR_5, opj_tcp_t *VAR_6, int VAR_7)
{


    opj_tccp_t *VAR_8, *VAR_9;
    int VAR_10, VAR_11;
    int VAR_12;
    char VAR_13[13] = "            ";
    char* VAR_14 = VAR_13;
    if (VAR_6 == VAR_2) {
        VAR_14++;
        VAR_14++;
    }

    VAR_9 = &(VAR_6->tccps[0]);





    if (VAR_3) {
        FUNC_0(VAR_5,
                "%s<!-- mj2_to_metadata implementation always reports component[0] as using default QCD, -->\n",
                VAR_14);
        if (VAR_6 == VAR_2) {
            FUNC_0(VAR_5,
                    "%s<!-- and any other component, with main-header quantization values different from [0], as QCC. -->\n",
                    VAR_14);
        } else {
            FUNC_0(VAR_5,
                    "%s<!-- and any other component, with tile-part-header quantization values different from [0], as QCC. -->\n",
                    VAR_14);
        }
    }
    for (VAR_12 = 1; VAR_12 < VAR_7;
            VAR_12++) {
        VAR_8 = &(VAR_6->tccps[VAR_12]);
        if (FUNC_1(VAR_9, VAR_8)) {
            continue;
        }


        FUNC_0(VAR_5,
                "%s<QuantizationComponent Marker=\"QCC\" Component=\"%d\">\n", VAR_14,
                VAR_12);
        VAR_8 = &VAR_2->tccps[0];

        FUNC_0(VAR_5, "%s  <Sqcc>\n", VAR_14);
        if (VAR_3) {
            FUNC_0(VAR_5, "%s  <!-- Quantization style for this component. -->\n", VAR_14);
        }
        if (VAR_4) {
            FUNC_0(VAR_5, "%s    <AsHex>0x%02x</AsHex>\n", VAR_14,
                    (VAR_8->numgbits) << 5 | VAR_8->qntsty);
        }
        if (VAR_1) {
            FUNC_0(VAR_5, "%s    <QuantizationStyle>%d</QuantizationStyle>\n", VAR_14,
                    VAR_8->qntsty);
        }
        if (VAR_3) {
            FUNC_0(VAR_5,
                    "%s    <!-- Quantization style (in Sqcc's low 5 bits) may be: -->\n", VAR_14);
            FUNC_0(VAR_5, "%s    <!--   0 = No quantization. SPqcc size = 8 bits-->\n",
                    VAR_14);
            FUNC_0(VAR_5,
                    "%s    <!--   1 = Scalar derived (values signaled for N(L)LL subband only). Use Eq. E.5. SPqcc size = 16. -->\n",
                    VAR_14);
            FUNC_0(VAR_5,
                    "%s    <!--   2 = Scalar expounded (values signaled for each subband). SPqcc size = 16. -->\n",
                    VAR_14);
        }
        if (VAR_1) {
            FUNC_0(VAR_5, "%s    <NumberOfGuardBits>%d</NumberOfGuardBits>\n", VAR_14,
                    VAR_8->numgbits);
        }
        if (VAR_3) {
            FUNC_0(VAR_5,
                    "%s    <!-- 0-7 guard bits allowed (stored in Sqcc's high 3 bits) -->\n", VAR_14);
        }
        FUNC_0(VAR_5, "%s  </Sqcc>\n", VAR_14);



        FUNC_0(VAR_5, "%s  <SPqcc>\n", VAR_14);
        switch (VAR_8->qntsty) {
        case 129:
            VAR_11 = VAR_0;



            FUNC_0(VAR_5, "%s    <ReversibleStepSizeValue>\n", VAR_14);
            if (VAR_3) {
                FUNC_0(VAR_5,
                        "%s    <!-- Current mj2_to_metadata implementation dumps entire internal table, -->\n",
                        VAR_14);
                FUNC_0(VAR_5,
                        "%s    <!-- until an exponent with zero value is reached. -->\n", VAR_14);
                FUNC_0(VAR_5,
                        "%s    <!-- Exponent epsilon(b) of reversible dynamic range. -->\n", VAR_14);
                FUNC_0(VAR_5,
                        "%s    <!-- Hex value is as stored, in high-order 5 bits. -->\n", VAR_14);
            }
            for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
                if (VAR_8->stepsizes[VAR_10].expn == 0) {
                    break;
                }
                FUNC_0(VAR_5, "%s      <Exponent Subband=\"%d\">\n", VAR_14, VAR_10);
                if (VAR_4) {
                    FUNC_0(VAR_5, "%s        <AsHex>0x%02x</AsHex>\n", VAR_14,
                            VAR_8->stepsizes[VAR_10].expn << 3);
                }
                if (VAR_1) {
                    FUNC_0(VAR_5, "%s        <AsDecimal>%d</AsDecimal>\n", VAR_14,
                            VAR_8->stepsizes[VAR_10].expn);
                }
                FUNC_0(VAR_5, "%s      </Exponent>\n", VAR_14);
            }
            FUNC_0(VAR_5, "%s    </ReversibleStepSizeValue>\n", VAR_14);
            break;
        case 128:

            FUNC_0(VAR_5, "%s    <QuantizationStepSizeValues>\n", VAR_14);
            if (VAR_3) {
                FUNC_0(VAR_5,
                        "%s    <!-- For irreversible transformation only.  See Part I Annex E Equation E.3 -->\n",
                        VAR_14);
            }
            FUNC_0(VAR_5, "%s      <QuantizationValuesForSubband0>\n", VAR_14);
            if (VAR_3) {
                FUNC_0(VAR_5, "%s      <!-- For N(L)LL subband: >\n", VAR_14);
            }
            if (VAR_4) {
                FUNC_0(VAR_5, "%s        <AsHex>0x%02x</AsHex>\n", VAR_14,
                        (VAR_8->stepsizes[0].expn << 11) | VAR_8->stepsizes[0].mant);
            }
            if (VAR_1) {
                FUNC_0(VAR_5, "%s        <Exponent>%d</Exponent>\n", VAR_14,
                        VAR_8->stepsizes[0].expn);
                FUNC_0(VAR_5, "%s        <Mantissa>%d</Mantissa>\n", VAR_14,
                        VAR_8->stepsizes[0].mant);
            }
            FUNC_0(VAR_5, "%s      </QuantizationValuesForSubband0>\n", VAR_14);
            if (VAR_3) {
                FUNC_0(VAR_5,
                        "%s      <!-- Exponents for subbands beyond 0 are not from header, but calculated per Eq. E.5 -->\n",
                        VAR_14);
                FUNC_0(VAR_5,
                        "%s      <!-- The mantissa for all subbands is the same, given by the value above. -->\n",
                        VAR_14);
                FUNC_0(VAR_5,
                        "%s      <!-- Current mj2_to_metadata implementation dumps entire internal table, -->\n",
                        VAR_14);
                FUNC_0(VAR_5,
                        "%s      <!-- until a subband with exponent of zero value is reached. -->\n",
                        VAR_14);
            }

            for (VAR_10 = 1; VAR_10 < VAR_0; VAR_10++) {
                if (VAR_8->stepsizes[VAR_10].expn == 0) {
                    break;
                }

                FUNC_0(VAR_5,
                        "%s      <CalculatedExponent Subband=\"%d\">%d</CalculatedExponent>\n", VAR_14,
                        VAR_10, VAR_8->stepsizes[VAR_10].expn);
            }
            FUNC_0(VAR_5, "%s    </QuantizationStepSizeValues>\n", VAR_14);
            break;

        default:
            VAR_11 = VAR_0;

            FUNC_0(VAR_5, "%s    <QuantizationStepSizeValues>\n", VAR_14);
            if (VAR_3) {
                FUNC_0(VAR_5,
                        "%s    <!-- For irreversible transformation only.  See Part I Annex E Equation E.3 -->\n",
                        VAR_14);
                FUNC_0(VAR_5,
                        "%s    <!-- Current mj2_to_metadata implementation dumps entire internal table, -->\n",
                        VAR_14);
                FUNC_0(VAR_5,
                        "%s    <!-- until a subband with mantissa and exponent of zero values is reached. -->\n",
                        VAR_14);
            }
            for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
                if (VAR_8->stepsizes[VAR_10].expn == 0 && VAR_8->stepsizes[VAR_10].mant == 0) {
                    break;
                }
                FUNC_0(VAR_5, "%s      <QuantizationValues Subband=\"%d\">\n", VAR_14, VAR_10);
                if (VAR_4) {
                    FUNC_0(VAR_5, "%s        <AsHex>0x%02x</AsHex>\n", VAR_14,
                            (VAR_8->stepsizes[VAR_10].expn << 11) | VAR_8->stepsizes[VAR_10].mant);
                }
                if (VAR_1) {
                    FUNC_0(VAR_5, "%s        <Exponent>%d</Exponent>\n", VAR_14,
                            VAR_8->stepsizes[VAR_10].expn);
                    FUNC_0(VAR_5, "%s        <Mantissa>%d</Mantissa>\n", VAR_14,
                            VAR_8->stepsizes[VAR_10].mant);
                }
                FUNC_0(VAR_5, "%s      </QuantizationValues>\n", VAR_14);
            }
            FUNC_0(VAR_5, "%s    </QuantizationStepSizeValues>\n", VAR_14);
            break;
        }
        FUNC_0(VAR_5, "%s  </SPqcc>\n", VAR_14);
        FUNC_0(VAR_5, "%s</QuantizationComponent>\n", VAR_14);
    }

}
