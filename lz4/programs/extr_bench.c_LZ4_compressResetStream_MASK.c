
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct compressionParameters {int LZ4_dictStream; int LZ4_stream; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(
    const struct compressionParameters* VAR_0)
{
    FUNC_1(VAR_0->LZ4_stream);
    FUNC_0(VAR_0->LZ4_stream, VAR_0->LZ4_dictStream);
}
