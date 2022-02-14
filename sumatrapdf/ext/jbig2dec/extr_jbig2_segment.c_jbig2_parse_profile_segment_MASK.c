
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int data_length; int number; } ;
typedef TYPE_1__ Jbig2Segment ;
typedef int Jbig2Ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,char*,...) ;
 scalar_t__ FUNC_1 (int const*) ;

__attribute__((used)) static int
FUNC_2(Jbig2Ctx *VAR_2, Jbig2Segment *VAR_3, const uint8_t *VAR_4)
{
    uint32_t VAR_5;
    uint32_t VAR_6;
    uint32_t VAR_7;
    int VAR_8;
    const char *VAR_9;
    const char *VAR_10;
    const char *VAR_11;
    const char *VAR_12;
    const char *VAR_13;

    if (VAR_3->data_length < 4)
        return FUNC_0(VAR_2, VAR_0, VAR_3->number, "Segment too short");
    VAR_8 = 0;

    VAR_5 = FUNC_1(&VAR_4[VAR_8]);
    VAR_8 += 4;

    for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
        if (VAR_3->data_length - VAR_8 < 4)
            return FUNC_0(VAR_2, VAR_0, VAR_3->number, "segment too short to store profile");

        VAR_7 = FUNC_1(&VAR_4[VAR_8]);
        VAR_8 += 4;

        switch (VAR_7) {
        case 0x00000001:
            VAR_9 = "All JBIG2 capabilities";
            VAR_10 = "No restriction";
            VAR_11 = "No restriction";
            VAR_12 = "No restriction";
            VAR_13 = "No restriction";
            break;
        case 0x00000002:
            VAR_9 = "Maximum compression";
            VAR_10 = "Arithmetic only; any template used";
            VAR_11 = "No restriction";
            VAR_12 = "No restriction";
            VAR_13 = "Arithmetic only";
            break;
        case 0x00000003:
            VAR_9 = "Medium complexity and medium compression";
            VAR_10 = "Arithmetic only; only 10-pixel and 13-pixel templates";
            VAR_11 = "10-pixel template only";
            VAR_12 = "No skip mask used";
            VAR_13 = "Arithmetic only";
            break;
        case 0x00000004:
            VAR_9 = "Low complexity with progressive lossless capability";
            VAR_10 = "MMR only";
            VAR_11 = "10-pixel template only";
            VAR_12 = "No skip mask used";
            VAR_13 = "Huffman only";
            break;
        case 0x00000005:
            VAR_9 = "Low complexity";
            VAR_10 = "MMR only";
            VAR_11 = "Not available";
            VAR_12 = "No skip mask used";
            VAR_13 = "Huffman only";
            break;
        default:
            VAR_9 = "Unknown";
            VAR_10 = "Unknown";
            VAR_11 = "Unknown";
            VAR_12 = "Unknown";
            VAR_13 = "Unknown";
            break;
        }

        FUNC_0(VAR_2, VAR_1, VAR_3->number, "Supported profile: 0x%08x", VAR_7);
        FUNC_0(VAR_2, VAR_1, VAR_3->number, "  Requirements: %s", VAR_9);
        FUNC_0(VAR_2, VAR_1, VAR_3->number, "  Generic region coding: %s", VAR_10);
        FUNC_0(VAR_2, VAR_1, VAR_3->number, "  Refinement region coding: %s", VAR_11);
        FUNC_0(VAR_2, VAR_1, VAR_3->number, "  Halftone region coding: %s", VAR_12);
        FUNC_0(VAR_2, VAR_1, VAR_3->number, "  Numerical data: %s", VAR_13);
    }

    return 0;
}
