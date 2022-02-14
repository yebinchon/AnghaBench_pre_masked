
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* Bytes; } ;
struct TYPE_5__ {int ExtensionBlockCount; TYPE_2__* ExtensionBlocks; } ;
typedef TYPE_1__ Extensions ;
typedef TYPE_2__ ExtensionBlock ;


 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(Extensions *VAR_0)
{
    ExtensionBlock *VAR_1;

    if ((VAR_0 == ((void*)0)) || (VAR_0->ExtensionBlocks == ((void*)0))) {
        return;
    }
    for (VAR_1 = VAR_0->ExtensionBlocks;
         VAR_1 < (VAR_0->ExtensionBlocks + VAR_0->ExtensionBlockCount); VAR_1++)
        FUNC_0(VAR_1->Bytes);
    FUNC_0(VAR_0->ExtensionBlocks);
    VAR_0->ExtensionBlocks = ((void*)0);
}
