
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACKET ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,unsigned int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(void)
{
    unsigned int VAR_2 = 0;
    PACKET VAR_3;

    if (!FUNC_4(FUNC_0(&VAR_3, VAR_1, VAR_0))
            || !FUNC_4(FUNC_2(&VAR_3, &VAR_2))
            || !FUNC_5(VAR_2, 0x02)
            || !FUNC_4(FUNC_1(&VAR_3, VAR_0 - 2))
            || !FUNC_4(FUNC_2(&VAR_3, &VAR_2))
            || !FUNC_5(VAR_2, 0xfe)
            || !FUNC_3(FUNC_2(&VAR_3, &VAR_2)))
        return 0;

    return 1;
}
