
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compressionParameters {int dictSize; int dictBuf; void* LZ4_dictStream; int * LZ4_dictStreamHC; int * LZ4_streamHC; void* LZ4_stream; } ;


 void* FUNC_0 () ;
 int FUNC_1 (void*,int ,int ) ;

__attribute__((used)) static void FUNC_2(
    struct compressionParameters* VAR_0)
{
    VAR_0->LZ4_stream = FUNC_0();
    VAR_0->LZ4_dictStream = FUNC_0();
    VAR_0->LZ4_streamHC = ((void*)0);
    VAR_0->LZ4_dictStreamHC = ((void*)0);
    FUNC_1(VAR_0->LZ4_dictStream, VAR_0->dictBuf, VAR_0->dictSize);
}
