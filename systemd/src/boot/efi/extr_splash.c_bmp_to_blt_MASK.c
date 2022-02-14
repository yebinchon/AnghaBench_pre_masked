
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct bmp_map {int red; int green; int blue; } ;
struct bmp_dib {scalar_t__ y; scalar_t__ x; int depth; } ;
typedef scalar_t__ UINTN ;
typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
struct TYPE_3__ {int Red; int Green; int Blue; } ;
typedef int EFI_STATUS ;
typedef TYPE_1__ EFI_GRAPHICS_OUTPUT_BLT_PIXEL ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

EFI_STATUS FUNC_1(EFI_GRAPHICS_OUTPUT_BLT_PIXEL *VAR_1,
                      struct bmp_dib *VAR_2, struct bmp_map *VAR_3,
                      UINT8 *VAR_4) {
        UINT8 *VAR_5;
        UINTN VAR_6;


        VAR_5 = VAR_4;
        for (VAR_6 = 0; VAR_6 < VAR_2->y; VAR_6++) {
                EFI_GRAPHICS_OUTPUT_BLT_PIXEL *VAR_7;
                UINTN VAR_8;
                UINTN VAR_9;

                VAR_7 = &VAR_1[(VAR_2->y - VAR_6 - 1) * VAR_2->x];
                for (VAR_9 = 0; VAR_9 < VAR_2->x; VAR_9++, VAR_5++, VAR_7++) {
                        switch (VAR_2->depth) {
                        case 1: {
                                UINTN VAR_10;

                                for (VAR_10 = 0; VAR_10 < 8 && VAR_9 < VAR_2->x; VAR_10++) {
                                        VAR_7->Red = VAR_3[((*VAR_5) >> (7 - VAR_10)) & 1].red;
                                        VAR_7->Green = VAR_3[((*VAR_5) >> (7 - VAR_10)) & 1].green;
                                        VAR_7->Blue = VAR_3[((*VAR_5) >> (7 - VAR_10)) & 1].blue;
                                        VAR_7++;
                                        VAR_9++;
                                }
                                VAR_7--;
                                VAR_9--;
                                break;
                        }

                        case 4: {
                                UINTN VAR_11;

                                VAR_11 = (*VAR_5) >> 4;
                                VAR_7->Red = VAR_3[VAR_11].red;
                                VAR_7->Green = VAR_3[VAR_11].green;
                                VAR_7->Blue = VAR_3[VAR_11].blue;
                                if (VAR_9 < (VAR_2->x - 1)) {
                                        VAR_7++;
                                        VAR_9++;
                                        VAR_11 = (*VAR_5) & 0x0f;
                                        VAR_7->Red = VAR_3[VAR_11].red;
                                        VAR_7->Green = VAR_3[VAR_11].green;
                                        VAR_7->Blue = VAR_3[VAR_11].blue;
                                }
                                break;
                        }

                        case 8:
                                VAR_7->Red = VAR_3[*VAR_5].red;
                                VAR_7->Green = VAR_3[*VAR_5].green;
                                VAR_7->Blue = VAR_3[*VAR_5].blue;
                                break;

                        case 16: {
                                UINT16 VAR_12 = *(UINT16 *) VAR_5;

                                VAR_7->Red = (VAR_12 & 0x7c00) >> 7;
                                VAR_7->Green = (VAR_12 & 0x3e0) >> 2;
                                VAR_7->Blue = (VAR_12 & 0x1f) << 3;
                                VAR_5 += 1;
                                break;
                        }

                        case 24:
                                VAR_7->Red = VAR_5[2];
                                VAR_7->Green = VAR_5[1];
                                VAR_7->Blue = VAR_5[0];
                                VAR_5 += 2;
                                break;

                        case 32: {
                                UINT32 VAR_13 = *(UINT32 *) VAR_5;

                                FUNC_0((UINT32 *)VAR_7, VAR_13);

                                VAR_5 += 3;
                                break;
                        }
                        }
                }


                VAR_8 = VAR_5 - VAR_4;
                VAR_5 += ((VAR_8 + 3) & ~3) - VAR_8;
        }

        return VAR_0;
}
