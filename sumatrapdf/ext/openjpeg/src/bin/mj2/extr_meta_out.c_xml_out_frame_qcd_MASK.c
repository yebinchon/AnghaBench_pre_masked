
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_3__* tccps; } ;
typedef TYPE_2__ opj_tcp_t ;
struct TYPE_8__ {int numgbits; int qntsty; TYPE_1__* stepsizes; } ;
typedef TYPE_3__ opj_tccp_t ;
struct TYPE_6__ {int expn; int mant; } ;
typedef int FILE ;




 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*,char*,...) ;
 TYPE_2__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_1(FILE* VAR_5, opj_tcp_t *VAR_6)
{

    opj_tccp_t *VAR_7;
    int VAR_8, VAR_9;
    char VAR_10[13] = "            ";
    char* VAR_11 = VAR_10;
    if (VAR_6 == VAR_2) {
        VAR_11++;
        VAR_11++;
    }


    FUNC_0(VAR_5, "%s<QuantizationDefault Marker=\"QCD\">\n",
            VAR_11);
    VAR_7 = &(VAR_6->tccps[0]);

    FUNC_0(VAR_5, "%s  <Sqcd>\n", VAR_11);
    if (VAR_3) {
        FUNC_0(VAR_5,
                "%s  <!-- Default quantization style for all components. -->\n", VAR_11);
    }
    if (VAR_4) {
        FUNC_0(VAR_5, "%s    <AsHex>0x%02x</AsHex>\n", VAR_11,
                (VAR_7->numgbits) << 5 | VAR_7->qntsty);
    }
    if (VAR_1) {
        FUNC_0(VAR_5, "%s    <QuantizationStyle>%d</QuantizationStyle>\n", VAR_11,
                VAR_7->qntsty);
    }
    if (VAR_3) {
        FUNC_0(VAR_5,
                "%s    <!-- Quantization style (in Sqcd's low 5 bits) may be: -->\n", VAR_11);
        FUNC_0(VAR_5, "%s    <!--   0 = No quantization. SPqcd size = 8 bits-->\n",
                VAR_11);
        FUNC_0(VAR_5,
                "%s    <!--   1 = Scalar derived (values signaled for N(L)LL subband only). Use Eq. E.5. SPqcd size = 16. -->\n",
                VAR_11);
        FUNC_0(VAR_5,
                "%s    <!--   2 = Scalar expounded (values signaled for each subband). SPqcd size = 16. -->\n",
                VAR_11);
    }
    if (VAR_1) {
        FUNC_0(VAR_5, "%s    <NumberOfGuardBits>%d</NumberOfGuardBits>\n", VAR_11,
                VAR_7->numgbits);
    }
    if (VAR_3) {
        FUNC_0(VAR_5,
                "%s    <!-- 0-7 guard bits allowed (stored in Sqcd's high 3 bits) -->\n", VAR_11);
    }
    FUNC_0(VAR_5, "%s  </Sqcd>\n", VAR_11);





    FUNC_0(VAR_5, "%s  <SPqcd>\n", VAR_11);
    switch (VAR_7->qntsty) {
    case 129:

        VAR_9 = VAR_0;


        FUNC_0(VAR_5, "%s    <ReversibleStepSizeValue>\n", VAR_11);
        if (VAR_3) {
            FUNC_0(VAR_5,
                    "%s    <!-- Current mj2_to_metadata implementation dumps entire internal table, -->\n",
                    VAR_11);
            FUNC_0(VAR_5,
                    "%s    <!-- until an exponent with zero value is reached. -->\n", VAR_11);
            FUNC_0(VAR_5,
                    "%s    <!-- Exponent epsilon(b) of reversible dynamic range. -->\n", VAR_11);
            FUNC_0(VAR_5,
                    "%s    <!-- Hex value is as stored, in high-order 5 bits. -->\n", VAR_11);
        }
        for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
            if (VAR_7->stepsizes[VAR_8].expn == 0) {
                break;
            }
            FUNC_0(VAR_5, "%s      <DynamicRangeExponent Subband=\"%d\">\n", VAR_11, VAR_8);
            if (VAR_4) {
                FUNC_0(VAR_5, "%s        <AsHex>0x%02x</AsHex>\n", VAR_11,
                        VAR_7->stepsizes[VAR_8].expn << 3);
            }
            if (VAR_1) {
                FUNC_0(VAR_5, "%s        <AsDecimal>%d</AsDecimal>\n", VAR_11,
                        VAR_7->stepsizes[VAR_8].expn);
            }
            FUNC_0(VAR_5, "%s      </DynamicRangeExponent>\n", VAR_11);
        }
        FUNC_0(VAR_5, "%s    </ReversibleStepSizeValue>\n", VAR_11);
        break;
    case 128:


        FUNC_0(VAR_5, "%s    <QuantizationStepSizeValues>\n", VAR_11);
        if (VAR_3) {
            FUNC_0(VAR_5,
                    "%s    <!-- For irreversible transformation only.  See Part I Annex E Equation E.3 -->\n",
                    VAR_11);
        }
        FUNC_0(VAR_5, "%s      <QuantizationValues Subband=\"0\">\n", VAR_11);
        if (VAR_3) {
            FUNC_0(VAR_5, "%s      <!-- For N(L)LL subband: >\n", VAR_11);
        }
        if (VAR_4) {
            FUNC_0(VAR_5, "%s        <AsHex>0x%02x</AsHex>\n", VAR_11,
                    (VAR_7->stepsizes[0].expn << 11) | VAR_7->stepsizes[0].mant);
        }
        if (VAR_1) {
            FUNC_0(VAR_5, "%s        <Exponent>%d</Exponent>\n", VAR_11,
                    VAR_7->stepsizes[0].expn);
            FUNC_0(VAR_5, "%s        <Mantissa>%d</Mantissa>\n", VAR_11,
                    VAR_7->stepsizes[0].mant);
        }
        FUNC_0(VAR_5, "%s      </QuantizationValues>\n", VAR_11);
        if (VAR_3) {
            FUNC_0(VAR_5,
                    "%s      <!-- Exponents for subbands beyond 0 are not from header, but calculated per Eq. E.5 -->\n",
                    VAR_11);
            FUNC_0(VAR_5,
                    "%s      <!-- The mantissa for all subbands is the same, given by the value above. -->\n",
                    VAR_11);
            FUNC_0(VAR_5,
                    "%s      <!-- Current mj2_to_metadata implementation dumps entire internal table, -->\n",
                    VAR_11);
            FUNC_0(VAR_5,
                    "%s      <!-- until a subband with exponent of zero value is reached. -->\n",
                    VAR_11);
        }

        for (VAR_8 = 1; VAR_8 < VAR_0; VAR_8++) {
            if (VAR_7->stepsizes[VAR_8].expn == 0) {
                break;
            }

            FUNC_0(VAR_5,
                    "%s      <CalculatedExponent Subband=\"%d\">%d</CalculatedExponent>\n", VAR_11,
                    VAR_8, VAR_7->stepsizes[VAR_8].expn);
        }

        FUNC_0(VAR_5, "%s    </QuantizationStepSizeValues>\n", VAR_11);
        break;

    default:

        VAR_9 = VAR_0;

        FUNC_0(VAR_5, "%s    <QuantizationStepSizeValues>\n", VAR_11);
        if (VAR_3) {
            FUNC_0(VAR_5,
                    "%s    <!-- For irreversible transformation only.  See Part I Annex E Equation E.3 -->\n",
                    VAR_11);
            FUNC_0(VAR_5,
                    "%s    <!-- Current mj2_to_metadata implementation dumps entire internal table, -->\n",
                    VAR_11);
            FUNC_0(VAR_5,
                    "%s    <!-- until a subband with mantissa and exponent of zero values is reached. -->\n",
                    VAR_11);
        }
        for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
            if (VAR_7->stepsizes[VAR_8].expn == 0 && VAR_7->stepsizes[VAR_8].mant == 0) {
                break;
            }

            FUNC_0(VAR_5, "%s      <QuantizationValues Subband=\"%d\">\n", VAR_11, VAR_8);
            if (VAR_4) {
                FUNC_0(VAR_5, "%s        <AsHex>0x%02x</AsHex>\n", VAR_11,
                        (VAR_7->stepsizes[VAR_8].expn << 11) | VAR_7->stepsizes[VAR_8].mant);
            }
            if (VAR_1) {
                FUNC_0(VAR_5, "%s        <Exponent>%d</Exponent>\n", VAR_11,
                        VAR_7->stepsizes[VAR_8].expn);
                FUNC_0(VAR_5, "%s        <Mantissa>%d</Mantissa>\n", VAR_11,
                        VAR_7->stepsizes[VAR_8].mant);
            }
            FUNC_0(VAR_5, "%s      </QuantizationValues>\n", VAR_11);
        }
        FUNC_0(VAR_5, "%s    </QuantizationStepSizeValues>\n", VAR_11);
        break;
    }
    FUNC_0(VAR_5, "%s  </SPqcd>\n", VAR_11);
    FUNC_0(VAR_5, "%s</QuantizationDefault>\n", VAR_11);


}
