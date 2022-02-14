
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACKET ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int) ;
 int FUNC_1 (int *,scalar_t__,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_4(void)
{
    PACKET VAR_2;

    if (!FUNC_3(FUNC_0(&VAR_2, VAR_1, 4))
            || !FUNC_3(FUNC_1(&VAR_2, VAR_1, 4))
            || !FUNC_2(FUNC_1(&VAR_2, VAR_1 + 1, 4))
            || !FUNC_3(FUNC_0(&VAR_2, VAR_1, VAR_0))
            || !FUNC_3(FUNC_1(&VAR_2, VAR_1, VAR_0))
            || !FUNC_2(FUNC_1(&VAR_2, VAR_1, VAR_0 - 1))
            || !FUNC_2(FUNC_1(&VAR_2, VAR_1, VAR_0 + 1))
            || !FUNC_2(FUNC_1(&VAR_2, VAR_1, 0)))
        return 0;

    return 1;
}
