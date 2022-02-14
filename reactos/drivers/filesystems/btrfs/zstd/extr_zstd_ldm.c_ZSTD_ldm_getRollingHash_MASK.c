
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U64 ;
typedef size_t U32 ;
typedef scalar_t__ BYTE ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static U64 FUNC_0(const BYTE* VAR_2, U32 VAR_3)
{
    U64 VAR_4 = 0;
    U32 VAR_5;
    for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
        VAR_4 *= VAR_1;
        VAR_4 += VAR_2[VAR_5] + VAR_0;
    }
    return VAR_4;
}
