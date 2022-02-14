
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compressionParameters {int LZ4_dictStreamHC; int LZ4_streamHC; int cLevel; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(
    const struct compressionParameters* VAR_0)
{
    FUNC_1(VAR_0->LZ4_streamHC, VAR_0->cLevel);
    FUNC_0(VAR_0->LZ4_streamHC, VAR_0->LZ4_dictStreamHC);
}
