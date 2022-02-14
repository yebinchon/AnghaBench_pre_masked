
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int StackPtr; int* Prefix; int* Suffix; int* Stack; int EOFCode; int ClearCode; int LastCode; scalar_t__ PixelCount; int RunningCode; int RunningBits; int BitsPerPixel; int MaxCode1; } ;
struct TYPE_5__ {TYPE_2__* Private; } ;
typedef int GifPrefixType ;
typedef int GifPixelType ;
typedef TYPE_1__ GifFileType ;
typedef TYPE_2__ GifFilePrivateType ;
typedef int GifByteType ;


 scalar_t__ FUNC_0 (TYPE_1__*,int*) ;
 int FUNC_1 (int*,int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_2(GifFileType * VAR_4,
                   GifPixelType * VAR_5,
                   int VAR_6) {

    int VAR_7 = 0;
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;
    GifByteType *VAR_15, *VAR_16;
    GifPrefixType *VAR_17;
    GifFilePrivateType *VAR_18 = VAR_4->Private;

    VAR_14 = VAR_18->StackPtr;
    VAR_17 = VAR_18->Prefix;
    VAR_16 = VAR_18->Suffix;
    VAR_15 = VAR_18->Stack;
    VAR_10 = VAR_18->EOFCode;
    VAR_11 = VAR_18->ClearCode;
    VAR_13 = VAR_18->LastCode;

    if (VAR_14 != 0) {

        while (VAR_14 != 0 && VAR_7 < VAR_6)
            VAR_5[VAR_7++] = VAR_15[--VAR_14];
    }

    while (VAR_7 < VAR_6) {
        if (FUNC_0(VAR_4, &VAR_9) == VAR_0)
            return VAR_0;

        if (VAR_9 == VAR_10) {



            if (VAR_7 != VAR_6 - 1 || VAR_18->PixelCount != 0) {
                return VAR_0;
            }
            VAR_7++;
        } else if (VAR_9 == VAR_11) {

            for (VAR_8 = 0; VAR_8 <= VAR_2; VAR_8++)
                VAR_17[VAR_8] = VAR_3;
            VAR_18->RunningCode = VAR_18->EOFCode + 1;
            VAR_18->RunningBits = VAR_18->BitsPerPixel + 1;
            VAR_18->MaxCode1 = 1 << VAR_18->RunningBits;
            VAR_13 = VAR_18->LastCode = VAR_3;
        } else {



            if (VAR_9 < VAR_11) {

                VAR_5[VAR_7++] = VAR_9;
            } else {




                if (VAR_17[VAR_9] == VAR_3) {




                    if (VAR_9 == VAR_18->RunningCode - 2) {
                        VAR_12 = VAR_13;
                        VAR_16[VAR_18->RunningCode - 2] =
                           VAR_15[VAR_14++] = FUNC_1(VAR_17,
                                                                 VAR_13,
                                                                 VAR_11);
                    } else {
                        return VAR_0;
                    }
                } else
                    VAR_12 = VAR_9;






                VAR_8 = 0;
                while (VAR_8++ <= VAR_2 &&
                       VAR_12 > VAR_11 && VAR_12 <= VAR_2) {
                    VAR_15[VAR_14++] = VAR_16[VAR_12];
                    VAR_12 = VAR_17[VAR_12];
                }
                if (VAR_8 >= VAR_2 || VAR_12 > VAR_2) {
                    return VAR_0;
                }

                VAR_15[VAR_14++] = VAR_12;


                while (VAR_14 != 0 && VAR_7 < VAR_6)
                    VAR_5[VAR_7++] = VAR_15[--VAR_14];
            }
            if (VAR_13 != VAR_3) {
                VAR_17[VAR_18->RunningCode - 2] = VAR_13;

                if (VAR_9 == VAR_18->RunningCode - 2) {




                    VAR_16[VAR_18->RunningCode - 2] =
                       FUNC_1(VAR_17, VAR_13, VAR_11);
                } else {
                    VAR_16[VAR_18->RunningCode - 2] =
                       FUNC_1(VAR_17, VAR_9, VAR_11);
                }
            }
            VAR_13 = VAR_9;
        }
    }

    VAR_18->LastCode = VAR_13;
    VAR_18->StackPtr = VAR_14;

    return VAR_1;
}
