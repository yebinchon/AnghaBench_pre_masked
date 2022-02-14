
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int track_ID; scalar_t__ track_type; int layer; int volume; int* trans_matrix; int w; int h; } ;
typedef TYPE_1__ mj2_tk_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_1(FILE* VAR_3, FILE* VAR_4, mj2_tk_t *VAR_5,
                    unsigned int VAR_6)
{
    FUNC_0(VAR_4, "      <TrackHeader BoxType=\"tkhd\">\n");
    if (VAR_1) {
        FUNC_0(VAR_4,
                "      <!-- Not shown here: CreationTime, ModificationTime, Duration. -->\n");
        FUNC_0(VAR_4,
                "      <!-- These 3 fields are reported under MediaHeader below.   When reading these 3, -->\n");
        FUNC_0(VAR_4,
                "      <!-- m2j_to_metadata currently doesn't distinguish between TrackHeader and MediaHeader source. -->\n");
        FUNC_0(VAR_4,
                "      <!-- If both found, value read from MediaHeader is used. -->\n");
    }
    FUNC_0(VAR_4, "        <TrackID>%u</TrackID>\n", VAR_5->track_ID);
    if (VAR_5->track_type == 0) {
        FUNC_0(VAR_4, "        <TrackLayer>%d</TrackLayer>\n", VAR_5->layer);
        if (VAR_1) {
            FUNC_0(VAR_4,
                    "        <!-- front-to-back ordering of video tracks. 0 = normal, -1 is closer, etc. -->\n");
        }
    }
    if (VAR_5->track_type != 0) {



        FUNC_0(VAR_4, "        <Volume>\n");
        if (VAR_1) {
            FUNC_0(VAR_4,
                    "          <!-- Track audio volume stored as fixed-point binary 8.8 value. Decimal value is approximation. -->\n");
            FUNC_0(VAR_4,
                    "          <!-- Full, normal (default) value is 0x0100 (1.0) -->\n");
        }
        if (VAR_2) {
            FUNC_0(VAR_4, "          <AsHex>0x%04x</AsHex>\n", VAR_5->volume);
        }
        if (VAR_0) {
            FUNC_0(VAR_4, "          <AsDecimal>%6.3f</AsDecimal>\n",
                    (double)VAR_5->volume / (double)0x0100);
        }
        FUNC_0(VAR_4, "        </Volume>\n");







    }
    if (VAR_5->track_type == 0) {

        FUNC_0(VAR_4, "        <TransformationMatrix>\n");
        if (VAR_1) {
            FUNC_0(VAR_4,
                    "          <!-- Comments about matrix in MovieHeader apply here as well. -->\n");
            FUNC_0(VAR_4,
                    "          <!-- This matrix is applied before MovieHeader one. -->\n");
        }
        FUNC_0(VAR_4, "          <TMa>0x%08x</TMa>\n", VAR_5->trans_matrix[0]);
        FUNC_0(VAR_4, "          <TMb>0x%08x</TMb>\n", VAR_5->trans_matrix[1]);
        FUNC_0(VAR_4, "          <TMu>0x%08x</TMu>\n", VAR_5->trans_matrix[2]);
        FUNC_0(VAR_4, "          <TMc>0x%08x</TMc>\n", VAR_5->trans_matrix[3]);
        FUNC_0(VAR_4, "          <TMd>0x%08x</TMd>\n", VAR_5->trans_matrix[4]);
        FUNC_0(VAR_4, "          <TMv>0x%08x</TMv>\n", VAR_5->trans_matrix[5]);
        FUNC_0(VAR_4, "          <TMx>0x%08x</TMx>\n", VAR_5->trans_matrix[6]);
        FUNC_0(VAR_4, "          <TMy>0x%08x</TMy>\n", VAR_5->trans_matrix[7]);
        FUNC_0(VAR_4, "          <TMw>0x%08x</TMw>\n", VAR_5->trans_matrix[8]);
        FUNC_0(VAR_4, "        </TransformationMatrix>\n");
    }




    if (VAR_1) {
        FUNC_0(VAR_4,
                "        <!-- Width and Height in pixels are for the presentation; frames will be scaled to this. -->\n");
        FUNC_0(VAR_4,
                "        <!-- Both stored as fixed-point binary 16.16 values. Decimal values are approximations. -->\n");
    }
    FUNC_0(VAR_4, "        <Width>\n");
    if (VAR_2) {
        FUNC_0(VAR_4, "          <AsHex>0x%08x</AsHex>\n", VAR_5->w);
    }
    if (VAR_0) {
        FUNC_0(VAR_4, "          <AsDecimal>%12.6f</AsDecimal>\n",
                (double)VAR_5->w / (double)
                0x00010000);
    }
    FUNC_0(VAR_4, "        </Width>\n");
    FUNC_0(VAR_4, "        <Height>\n");
    if (VAR_2) {
        FUNC_0(VAR_4, "          <AsHex>0x%08x</AsHex>\n", VAR_5->h);
    }
    if (VAR_0) {
        FUNC_0(VAR_4, "          <AsDecimal>%12.6f</AsDecimal>\n",
                (double)VAR_5->h / (double)
                0x00010000);
    }
    FUNC_0(VAR_4, "        </Height>\n");
    FUNC_0(VAR_4, "      </TrackHeader>\n");
}
