
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACKET ;


 int FUNC_0 (int *,unsigned char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char,int) ;

__attribute__((used)) static int FUNC_5(void)
{
    char VAR_0[10], VAR_1[10];
    PACKET VAR_2;

    FUNC_4(VAR_0, 'x', 10);
    FUNC_4(VAR_1, 'y', 10);
    VAR_1[5] = '\0';

    if (!FUNC_3(FUNC_0(&VAR_2, (unsigned char*)VAR_0, 10))
            || !FUNC_2(FUNC_1(&VAR_2))
            || !FUNC_3(FUNC_0(&VAR_2, (unsigned char*)VAR_1, 10))
            || !FUNC_3(FUNC_1(&VAR_2)))
        return 0;

    return 1;
}
