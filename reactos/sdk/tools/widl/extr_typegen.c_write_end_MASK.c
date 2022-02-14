
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,char*,int ) ;

__attribute__((used)) static void FUNC_1(FILE *VAR_2, unsigned int *VAR_3)
{
    if (*VAR_3 % 2 == 0)
    {
        FUNC_0(VAR_2, 2, "0x%x,\t/* FC_PAD */\n", VAR_1);
        *VAR_3 += 1;
    }
    FUNC_0(VAR_2, 2, "0x%x,\t/* FC_END */\n", VAR_0);
    *VAR_3 += 1;
}
