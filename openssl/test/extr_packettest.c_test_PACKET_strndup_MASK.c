
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int PACKET ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,unsigned char*,int) ;
 int FUNC_2 (int *,char**) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,char,int) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static int FUNC_9(void)
{
    char VAR_0[10], VAR_1[10];
    char *VAR_2 = ((void*)0);
    PACKET VAR_3;
    int VAR_4 = 0;

    FUNC_7(VAR_0, 'x', 10);
    FUNC_7(VAR_1, 'y', 10);
    VAR_1[5] = '\0';

    if (!FUNC_6(FUNC_1(&VAR_3, (unsigned char*)VAR_0, 10))
            || !FUNC_6(FUNC_2(&VAR_3, &VAR_2))
            || !FUNC_3(FUNC_8(VAR_2), 10)
            || !FUNC_5(VAR_2, VAR_0, 10)
            || !FUNC_6(FUNC_1(&VAR_3, (unsigned char*)VAR_1, 10))
            || !FUNC_6(FUNC_2(&VAR_3, &VAR_2))
            || !FUNC_3(FUNC_8(VAR_2), 5)
            || !FUNC_4(VAR_2, VAR_1))
        goto end;

    VAR_4 = 1;
end:
    FUNC_0(VAR_2);
    return VAR_4;
}
