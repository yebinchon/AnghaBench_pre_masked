
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compressionParameters {int * LZ4_dictStreamHC; int * LZ4_streamHC; int * LZ4_dictStream; int * LZ4_stream; } ;



__attribute__((used)) static void FUNC_0(
    struct compressionParameters* VAR_0)
{
    VAR_0->LZ4_stream = ((void*)0);
    VAR_0->LZ4_dictStream = ((void*)0);
    VAR_0->LZ4_streamHC = ((void*)0);
    VAR_0->LZ4_dictStreamHC = ((void*)0);
}
