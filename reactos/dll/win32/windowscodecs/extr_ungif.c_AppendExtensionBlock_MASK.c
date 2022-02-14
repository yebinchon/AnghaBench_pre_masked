
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int* Bytes; int ByteCount; } ;
struct TYPE_4__ {int ExtensionBlockCount; TYPE_2__* ExtensionBlocks; } ;
typedef TYPE_1__ Extensions ;
typedef TYPE_2__ ExtensionBlock ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,unsigned char const*,int) ;
 int* FUNC_1 (int*,int) ;

__attribute__((used)) static int
FUNC_2(Extensions *VAR_2,
                     int VAR_3,
                     const unsigned char VAR_4[])
{
    ExtensionBlock *VAR_5;

    if (VAR_2->ExtensionBlocks == ((void*)0))
        return (VAR_0);

    VAR_5 = &VAR_2->ExtensionBlocks[VAR_2->ExtensionBlockCount - 1];

    VAR_5->Bytes = FUNC_1(VAR_5->Bytes, VAR_5->ByteCount + VAR_3 + 1);
    if (VAR_5->Bytes == ((void*)0))
        return (VAR_0);

    VAR_5->Bytes[VAR_5->ByteCount] = VAR_3;

    if (VAR_4)
        FUNC_0(VAR_5->Bytes + VAR_5->ByteCount + 1, VAR_4, VAR_3);

    VAR_5->ByteCount += VAR_3 + 1;

    return (VAR_1);
}
