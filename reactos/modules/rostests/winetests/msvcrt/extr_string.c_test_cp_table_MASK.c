
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,int,int,int,int) ;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_2(int VAR_1, int *VAR_2)
{
    int VAR_3;
    int VAR_4 = 0;
    int VAR_5 = 0;
    FUNC_0(VAR_1);
    for (VAR_3 = 0; VAR_3 < 256; VAR_3++)
    {
        if (VAR_4 == 0)
        {
            VAR_5 = VAR_2[0];
            VAR_4 = VAR_2[1];
            VAR_2 += 2;
        }
        FUNC_1(VAR_0[VAR_3] == VAR_5, "CP%d: Mismatch in ctype for character %d - %d instead of %d\n", VAR_1, VAR_3-1, VAR_0[VAR_3], VAR_5);
        VAR_4--;
    }
}
