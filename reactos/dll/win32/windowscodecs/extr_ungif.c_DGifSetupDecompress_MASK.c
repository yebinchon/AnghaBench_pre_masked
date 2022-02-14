
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int BitsPerPixel; int ClearCode; int EOFCode; int RunningCode; int RunningBits; int MaxCode1; void** Prefix; scalar_t__ CrntShiftDWord; scalar_t__ CrntShiftState; void* LastCode; scalar_t__ StackPtr; scalar_t__* Buf; } ;
struct TYPE_5__ {TYPE_2__* Private; } ;
typedef void* GifPrefixType ;
typedef TYPE_1__ GifFileType ;
typedef TYPE_2__ GifFilePrivateType ;
typedef int GifByteType ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (TYPE_1__*,int*,int) ;

__attribute__((used)) static int
FUNC_1(GifFileType * VAR_3) {

    int VAR_4, VAR_5;
    GifByteType VAR_6;
    GifPrefixType *VAR_7;
    GifFilePrivateType *VAR_8 = VAR_3->Private;

    FUNC_0(VAR_3, &VAR_6, 1);
    VAR_5 = VAR_6;

    VAR_8->Buf[0] = 0;
    VAR_8->BitsPerPixel = VAR_5;
    VAR_8->ClearCode = (1 << VAR_5);
    VAR_8->EOFCode = VAR_8->ClearCode + 1;
    VAR_8->RunningCode = VAR_8->EOFCode + 1;
    VAR_8->RunningBits = VAR_5 + 1;
    VAR_8->MaxCode1 = 1 << VAR_8->RunningBits;
    VAR_8->StackPtr = 0;
    VAR_8->LastCode = VAR_2;
    VAR_8->CrntShiftState = 0;
    VAR_8->CrntShiftDWord = 0;

    VAR_7 = VAR_8->Prefix;
    for (VAR_4 = 0; VAR_4 <= VAR_1; VAR_4++)
        VAR_7[VAR_4] = VAR_2;

    return VAR_0;
}
