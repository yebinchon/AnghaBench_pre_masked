
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACKET ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,unsigned char const**,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned char const,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_8(void)
{
    const unsigned char *VAR_2 = ((void*)0);
    PACKET VAR_3;

    if (!FUNC_6(FUNC_0(&VAR_3, VAR_1, VAR_0))
            || !FUNC_6(FUNC_2(&VAR_3, &VAR_2, 4))
            || !FUNC_7(VAR_2[0], 2)
            || !FUNC_7(VAR_2[1], 4)
            || !FUNC_7(VAR_2[2], 6)
            || !FUNC_7(VAR_2[3], 8)
            || !FUNC_5(FUNC_3(&VAR_3), VAR_0 -4)
            || !FUNC_6(FUNC_1(&VAR_3, VAR_0 - 8))
            || !FUNC_6(FUNC_2(&VAR_3, &VAR_2, 4))
            || !FUNC_7(VAR_2[0], 0xf8)
            || !FUNC_7(VAR_2[1], 0xfa)
            || !FUNC_7(VAR_2[2], 0xfc)
            || !FUNC_7(VAR_2[3], 0xfe)
            || !FUNC_4(FUNC_3(&VAR_3)))
        return 0;

    return 1;
}
