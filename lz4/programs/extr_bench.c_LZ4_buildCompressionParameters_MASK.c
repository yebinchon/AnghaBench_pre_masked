
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compressionParameters {int cLevel; char const* dictBuf; int dictSize; int blockFunction; int cleanupFunction; int resetFunction; int initFunction; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_0(
    struct compressionParameters* VAR_14,
    int VAR_15, const char* VAR_16, int VAR_17)
{
    VAR_14->cLevel = VAR_15;
    VAR_14->dictBuf = VAR_16;
    VAR_14->dictSize = VAR_17;

    if (VAR_17) {
        if (VAR_15 < VAR_0) {
            VAR_14->initFunction = VAR_9;
            VAR_14->resetFunction = VAR_12;
            VAR_14->blockFunction = VAR_3;
            VAR_14->cleanupFunction = VAR_6;
        } else {
            VAR_14->initFunction = VAR_10;
            VAR_14->resetFunction = VAR_13;
            VAR_14->blockFunction = VAR_4;
            VAR_14->cleanupFunction = VAR_7;
        }
    } else {
        VAR_14->initFunction = VAR_8;
        VAR_14->resetFunction = VAR_11;
        VAR_14->cleanupFunction = VAR_5;

        if (VAR_15 < VAR_0) {
            VAR_14->blockFunction = VAR_1;
        } else {
            VAR_14->blockFunction = VAR_2;
        }
    }
}
