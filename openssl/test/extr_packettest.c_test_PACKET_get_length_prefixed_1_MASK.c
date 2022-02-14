
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int subpkt ;
typedef int PACKET ;


 int VAR_0 ;
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
    unsigned char VAR_1[VAR_0];
    const size_t VAR_2 = 16;
    unsigned int VAR_3;
    PACKET VAR_4, VAR_5, VAR_6;

    FUNC_8(&VAR_6, 0, sizeof(VAR_6));
    VAR_1[0] = (unsigned char)VAR_2;
    for (VAR_3 = 1; VAR_3 < VAR_0; VAR_3++)
        VAR_1[VAR_3] = (VAR_3 * 2) & 0xff;

    if (!FUNC_6(FUNC_0(&VAR_4, VAR_1, VAR_0))
            || !FUNC_6(FUNC_0(&VAR_5, VAR_1, VAR_2))
            || !FUNC_6(FUNC_1(&VAR_4, &VAR_6))
            || !FUNC_5(FUNC_3(&VAR_6), VAR_2)
            || !FUNC_6(FUNC_2(&VAR_6, &VAR_3))
            || !FUNC_7(VAR_3, 0x0204)
            || !FUNC_4(FUNC_1(&VAR_5, &VAR_6))
            || !FUNC_5(FUNC_3(&VAR_5), VAR_2))
        return 0;

    return 1;
}
