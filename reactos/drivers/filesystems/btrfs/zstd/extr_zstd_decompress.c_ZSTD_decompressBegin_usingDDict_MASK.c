
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int * rep; int hufTable; int OFTable; int MLTable; int LLTable; } ;
struct TYPE_10__ {int dictSize; TYPE_2__ entropy; scalar_t__ entropyPresent; scalar_t__ dictContent; int dictID; } ;
typedef TYPE_3__ ZSTD_DDict ;
struct TYPE_8__ {int * rep; } ;
struct TYPE_11__ {int ddictIsCold; char const* dictEnd; char const* previousDstEnd; int litEntropy; int fseEntropy; TYPE_1__ entropy; int HUFptr; int OFTptr; int MLTptr; int LLTptr; scalar_t__ virtualStart; scalar_t__ prefixStart; int dictID; } ;
typedef TYPE_4__ ZSTD_DCtx ;
typedef char BYTE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ) ;

size_t FUNC_4(ZSTD_DCtx* VAR_0, const ZSTD_DDict* VAR_1)
{
    FUNC_1(4, "ZSTD_decompressBegin_usingDDict");
    FUNC_3(VAR_0 != ((void*)0));
    if (VAR_1) {
        VAR_0->ddictIsCold = (VAR_0->dictEnd != (const char*)VAR_1->dictContent + VAR_1->dictSize);
        FUNC_1(4, "DDict is %s",
                    VAR_0->ddictIsCold ? "~cold~" : "hot!");
    }
    FUNC_0( FUNC_2(VAR_0) );
    if (VAR_1) {
        VAR_0->dictID = VAR_1->dictID;
        VAR_0->prefixStart = VAR_1->dictContent;
        VAR_0->virtualStart = VAR_1->dictContent;
        VAR_0->dictEnd = (const BYTE*)VAR_1->dictContent + VAR_1->dictSize;
        VAR_0->previousDstEnd = VAR_0->dictEnd;
        if (VAR_1->entropyPresent) {
            VAR_0->litEntropy = 1;
            VAR_0->fseEntropy = 1;
            VAR_0->LLTptr = VAR_1->entropy.LLTable;
            VAR_0->MLTptr = VAR_1->entropy.MLTable;
            VAR_0->OFTptr = VAR_1->entropy.OFTable;
            VAR_0->HUFptr = VAR_1->entropy.hufTable;
            VAR_0->entropy.rep[0] = VAR_1->entropy.rep[0];
            VAR_0->entropy.rep[1] = VAR_1->entropy.rep[1];
            VAR_0->entropy.rep[2] = VAR_1->entropy.rep[2];
        } else {
            VAR_0->litEntropy = 0;
            VAR_0->fseEntropy = 0;
        }
    }
    return 0;
}
