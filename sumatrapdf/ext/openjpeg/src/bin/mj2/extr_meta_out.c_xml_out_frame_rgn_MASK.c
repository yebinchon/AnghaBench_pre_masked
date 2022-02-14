
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* tccps; } ;
typedef TYPE_2__ opj_tcp_t ;
struct TYPE_5__ {int roishift; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*,...) ;
 TYPE_2__* VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_1(FILE* VAR_2, opj_tcp_t *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;

    char VAR_7[13] = "            ";
    char* VAR_8 = VAR_7;
    if (VAR_3 == VAR_0) {
        VAR_8++;
        VAR_8++;
    }

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
        VAR_6 = VAR_3->tccps[VAR_5].roishift;
        if (VAR_6 == 0) {
            continue;
        }

        FUNC_0(VAR_2, "%s<RegionOfInterest Marker=\"RGN\">\n",
                VAR_8);
        if (VAR_1) {
            FUNC_0(VAR_2, "%s<!-- See Crgn below for zero-based component number. -->\n",
                    VAR_8);
        }

        FUNC_0(VAR_2, "%s  <Srgn>0</Srgn>\n", VAR_8);
        if (VAR_1) {
            FUNC_0(VAR_2,
                    "%s  <!-- Srgn is ROI style.  Only style=0 defined: Implicit ROI (max. shift) -->\n",
                    VAR_8);
        }
        FUNC_0(VAR_2, "%s  <Crgn>%d</Crgn>\n", VAR_8, VAR_5);
        FUNC_0(VAR_2, "%s  <SPrgn>%d</SPrgn>\n", VAR_8, VAR_6);
        if (VAR_1) {
            FUNC_0(VAR_2,
                    "%s  <!-- SPrgn is implicit ROI shift, i.e., binary shifting of ROI coefficients above background. -->\n",
                    VAR_8);
        }
        FUNC_0(VAR_2, "</RegionOfInterest\n",
                VAR_8);
    }
}
