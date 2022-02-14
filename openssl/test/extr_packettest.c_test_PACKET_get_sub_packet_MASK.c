
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACKET ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,unsigned long*) ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (unsigned long,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_9(void)
{
    PACKET VAR_2, VAR_3;
    unsigned long VAR_4 = 0;

    if (!FUNC_7(FUNC_0(&VAR_2, VAR_1, VAR_0))
            || !FUNC_7(FUNC_3(&VAR_2, &VAR_3, 4))
            || !FUNC_7(FUNC_2(&VAR_3, &VAR_4))
            || !FUNC_8(VAR_4, 0x02040608UL)
            || !FUNC_6(FUNC_4(&VAR_3), 0)
            || !FUNC_7(FUNC_1(&VAR_2, VAR_0 - 8))
            || !FUNC_7(FUNC_3(&VAR_2, &VAR_3, 4))
            || !FUNC_7(FUNC_2(&VAR_3, &VAR_4))
            || !FUNC_8(VAR_4, 0xf8fafcfeUL)
            || !FUNC_6(FUNC_4(&VAR_3), 0)
            || !FUNC_5(FUNC_3(&VAR_2, &VAR_3, 4)))
        return 0;

    return 1;
}
