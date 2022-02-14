
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mmr_table_node ;
typedef int Jbig2MmrCtx ;
typedef int Jbig2Ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int const*,int) ;
 int FUNC_1 (int *,int ,int,char*) ;

__attribute__((used)) static int
FUNC_2(Jbig2Ctx *VAR_4, Jbig2MmrCtx *VAR_5, const mmr_table_node *VAR_6, int VAR_7)
{
    int VAR_8 = 0;
    int VAR_9;

    do {
        VAR_9 = FUNC_0(VAR_5, VAR_6, VAR_7);
        if (VAR_9 == VAR_0)
            return FUNC_1(VAR_4, VAR_1, -1, "invalid code detected in MMR-coded data");
        else if (VAR_9 == VAR_2)
            return FUNC_1(VAR_4, VAR_1, -1, "uncompressed code in MMR-coded data");
        else if (VAR_9 == VAR_3)
            return FUNC_1(VAR_4, VAR_1, -1, "zeroes code in MMR-coded data");
        VAR_8 += VAR_9;
    } while (VAR_9 >= 64);

    return VAR_8;
}
