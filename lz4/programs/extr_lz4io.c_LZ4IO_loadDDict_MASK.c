
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * dictBuffer; scalar_t__ dictBufferSize; } ;
typedef TYPE_1__ dRess_t ;
struct TYPE_7__ {int useDictionary; } ;
typedef TYPE_2__ LZ4IO_prefs_t ;


 int FUNC_0 (int,char*) ;
 int * FUNC_1 (TYPE_2__* const,scalar_t__*) ;

__attribute__((used)) static void FUNC_2(LZ4IO_prefs_t* const VAR_0, dRess_t* VAR_1) {
    if (!VAR_0->useDictionary) {
        VAR_1->dictBuffer = ((void*)0);
        VAR_1->dictBufferSize = 0;
        return;
    }

    VAR_1->dictBuffer = FUNC_1(VAR_0, &VAR_1->dictBufferSize);
    if (!VAR_1->dictBuffer) FUNC_0(25, "Dictionary error : could not create dictionary");
}
