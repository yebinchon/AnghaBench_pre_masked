
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int subpkt ;
typedef int PACKET ;


 int FUNC_0 (int *,unsigned char*,size_t const) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,unsigned int*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,size_t const) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (unsigned int,int) ;
 int FUNC_8 (int *,int ,int) ;

__attribute__((used)) static int FUNC_9(void)
{
    unsigned char VAR_0[1024];
    const size_t VAR_1 = 516;
    unsigned int VAR_2;
    PACKET VAR_3, VAR_4, VAR_5;

    FUNC_8(&VAR_5, 0, sizeof(VAR_5));
    for (VAR_2 = 1; VAR_2 <= 1024; VAR_2++)
        VAR_0[VAR_2 - 1] = (VAR_2 * 2) & 0xff;

    if (!FUNC_6(FUNC_0(&VAR_3, VAR_0, 1024))
            || !FUNC_6(FUNC_0(&VAR_4, VAR_0, VAR_1))
            || !FUNC_6(FUNC_1(&VAR_3, &VAR_5))
            || !FUNC_5(FUNC_3(&VAR_5), VAR_1)
            || !FUNC_6(FUNC_2(&VAR_5, &VAR_2))
            || !FUNC_7(VAR_2, 0x0608)
            || !FUNC_4(FUNC_1(&VAR_4, &VAR_5))
            || !FUNC_5(FUNC_3(&VAR_4), VAR_1))
        return 0;

    return 1;
}
