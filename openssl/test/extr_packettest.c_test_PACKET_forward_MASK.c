
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACKET ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,unsigned char const**,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned char const,int) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(void)
{
    const unsigned char *VAR_2 = ((void*)0);
    PACKET VAR_3;

    if (!FUNC_3(FUNC_0(&VAR_3, VAR_1, VAR_0))
            || !FUNC_3(FUNC_1(&VAR_3, 1))
            || !FUNC_3(FUNC_2(&VAR_3, &VAR_2, 1))
            || !FUNC_4(VAR_2[0], 4)
            || !FUNC_3(FUNC_1(&VAR_3, VAR_0 - 3))
            || !FUNC_3(FUNC_2(&VAR_3, &VAR_2, 1))
            || !FUNC_4(VAR_2[0], 0xfe))
        return 0;

    return 1;
}
