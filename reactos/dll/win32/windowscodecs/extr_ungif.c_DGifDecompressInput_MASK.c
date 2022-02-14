
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned long RunningBits; unsigned long CrntShiftState; unsigned long CrntShiftDWord; scalar_t__ RunningCode; int MaxCode1; int Buf; } ;
struct TYPE_5__ {TYPE_2__* Private; } ;
typedef TYPE_1__ GifFileType ;
typedef TYPE_2__ GifFilePrivateType ;
typedef scalar_t__ GifByteType ;


 int FUNC_0 (TYPE_1__*,int ,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_1(GifFileType * VAR_4,
                    int *VAR_5) {

    GifFilePrivateType *VAR_6 = VAR_4->Private;

    GifByteType VAR_7;
    static const unsigned short VAR_8[] = {
        0x0000, 0x0001, 0x0003, 0x0007,
        0x000f, 0x001f, 0x003f, 0x007f,
        0x00ff, 0x01ff, 0x03ff, 0x07ff,
        0x0fff
    };

    if (VAR_6->RunningBits > VAR_2) {
        return VAR_0;
    }

    while (VAR_6->CrntShiftState < VAR_6->RunningBits) {

        if (FUNC_0(VAR_4, VAR_6->Buf, &VAR_7) == VAR_0) {
            return VAR_0;
        }
        VAR_6->CrntShiftDWord |=
           ((unsigned long)VAR_7) << VAR_6->CrntShiftState;
        VAR_6->CrntShiftState += 8;
    }
    *VAR_5 = VAR_6->CrntShiftDWord & VAR_8[VAR_6->RunningBits];

    VAR_6->CrntShiftDWord >>= VAR_6->RunningBits;
    VAR_6->CrntShiftState -= VAR_6->RunningBits;






    if (VAR_6->RunningCode < VAR_3 + 2 &&
            ++VAR_6->RunningCode > VAR_6->MaxCode1 &&
            VAR_6->RunningBits < VAR_2) {
        VAR_6->MaxCode1 <<= 1;
        VAR_6->RunningBits++;
    }
    return VAR_1;
}
