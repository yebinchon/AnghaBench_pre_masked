
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int SortFlag; int ColorCount; TYPE_1__* Colors; } ;
struct TYPE_9__ {int SColorResolution; int SBackGroundColor; int SAspectRatio; TYPE_4__* SColorMap; int SHeight; int SWidth; } ;
struct TYPE_8__ {int Red; int Green; int Blue; } ;
typedef TYPE_2__ GifFileType ;
typedef int GifByteType ;


 scalar_t__ FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__* FUNC_2 (int,int *) ;
 int FUNC_3 (TYPE_2__*,int*,int) ;

__attribute__((used)) static int
FUNC_4(GifFileType * VAR_2) {

    int VAR_3, VAR_4, VAR_5;
    GifByteType VAR_6[3];


    if (FUNC_0(VAR_2, &VAR_2->SWidth) == VAR_0 ||
        FUNC_0(VAR_2, &VAR_2->SHeight) == VAR_0)
        return VAR_0;

    if (FUNC_3(VAR_2, VAR_6, 3) != 3) {
        return VAR_0;
    }
    VAR_2->SColorResolution = (((VAR_6[0] & 0x70) + 1) >> 4) + 1;
    VAR_5 = (VAR_6[0] & 0x08) != 0;
    VAR_4 = (VAR_6[0] & 0x07) + 1;
    VAR_2->SBackGroundColor = VAR_6[1];
    VAR_2->SAspectRatio = VAR_6[2];
    if (VAR_6[0] & 0x80) {

        VAR_2->SColorMap = FUNC_2(1 << VAR_4, ((void*)0));
        if (VAR_2->SColorMap == ((void*)0)) {
            return VAR_0;
        }


        VAR_2->SColorMap->SortFlag = VAR_5;
        for (VAR_3 = 0; VAR_3 < VAR_2->SColorMap->ColorCount; VAR_3++) {
            if (FUNC_3(VAR_2, VAR_6, 3) != 3) {
                FUNC_1(VAR_2->SColorMap);
                VAR_2->SColorMap = ((void*)0);
                return VAR_0;
            }
            VAR_2->SColorMap->Colors[VAR_3].Red = VAR_6[0];
            VAR_2->SColorMap->Colors[VAR_3].Green = VAR_6[1];
            VAR_2->SColorMap->Colors[VAR_3].Blue = VAR_6[2];
        }
    } else {
        VAR_2->SColorMap = ((void*)0);
    }

    return VAR_1;
}
