
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACKET ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (unsigned char,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (unsigned char,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_9(void)
{
    unsigned char VAR_2[4];
    PACKET VAR_3;

    if (!FUNC_7(FUNC_0(&VAR_3, VAR_1, VAR_0))
            || !FUNC_7(FUNC_1(&VAR_3, VAR_2, 4))
            || !FUNC_4(VAR_2[0], 2)
            || !FUNC_4(VAR_2[1], 4)
            || !FUNC_4(VAR_2[2], 6)
            || !FUNC_4(VAR_2[3], 8)
            || !FUNC_6(FUNC_3(&VAR_3), VAR_0 - 4)
            || !FUNC_7(FUNC_2(&VAR_3, VAR_0 - 8))
            || !FUNC_7(FUNC_1(&VAR_3, VAR_2, 4))
            || !FUNC_8(VAR_2[0], 0xf8)
            || !FUNC_8(VAR_2[1], 0xfa)
            || !FUNC_8(VAR_2[2], 0xfc)
            || !FUNC_8(VAR_2[3], 0xfe)
            || !FUNC_5(FUNC_3(&VAR_3)))
        return 0;

    return 1;
}
