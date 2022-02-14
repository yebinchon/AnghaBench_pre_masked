
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned char FUNC_0 (int const*) ;
 unsigned char FUNC_1 (int const*) ;
 int FUNC_2 (int *,int,char*,unsigned char,int ) ;
 int FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (int const*) ;

__attribute__((used)) static int FUNC_5(FILE *VAR_2, const type_t *VAR_3, unsigned int *VAR_4)
{
    unsigned char VAR_5;

    if (FUNC_4(VAR_3) == VAR_0)
        VAR_5 = FUNC_0(VAR_3);
    else if (FUNC_4(VAR_3) == VAR_1)
        VAR_5 = FUNC_1(VAR_3);
    else
        return 0;

    FUNC_2(VAR_2, 2, "0x%02x,\t/* %s */\n", VAR_5, FUNC_3(VAR_5));
    *VAR_4 += 1;
    return 1;
}
