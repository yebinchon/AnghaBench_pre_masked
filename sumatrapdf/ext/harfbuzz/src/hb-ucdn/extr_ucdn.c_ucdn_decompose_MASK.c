
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned short const**) ;
 unsigned short* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;

int FUNC_3(uint32_t VAR_0, uint32_t *VAR_1, uint32_t *VAR_2)
{
    const unsigned short *VAR_3;
    int VAR_4;

    if (FUNC_2(VAR_0, VAR_1, VAR_2))
        return 1;

    VAR_3 = FUNC_1(VAR_0);
    VAR_4 = VAR_3[0] >> 8;

    if ((VAR_3[0] & 0xff) != 0 || VAR_4 == 0)
        return 0;

    VAR_3++;
    *VAR_1 = FUNC_0(&VAR_3);
    if (VAR_4 > 1)
        *VAR_2 = FUNC_0(&VAR_3);
    else
        *VAR_2 = 0;

    return 1;
}
