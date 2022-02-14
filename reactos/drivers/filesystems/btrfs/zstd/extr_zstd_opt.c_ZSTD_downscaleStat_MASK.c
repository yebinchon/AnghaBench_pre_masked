
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t U32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static U32 FUNC_1(U32* VAR_1, U32 VAR_2, int VAR_3)
{
    U32 VAR_4, VAR_5=0;
    FUNC_0(VAR_0+VAR_3 > 0 && VAR_0+VAR_3 < 31);
    for (VAR_4=0; VAR_4<=VAR_2; VAR_4++) {
        VAR_1[VAR_4] = 1 + (VAR_1[VAR_4] >> (VAR_0+VAR_3));
        VAR_5 += VAR_1[VAR_4];
    }
    return VAR_5;
}
