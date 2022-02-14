
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (unsigned int*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    int VAR_3;
    unsigned int VAR_4;

    if (!&FUNC_1)
    {
        FUNC_2("rand_s is not available\n");
        return;
    }

    VAR_2 = VAR_0;
    VAR_3 = FUNC_1(((void*)0));
    FUNC_0(VAR_3 == VAR_1, "Expected rand_s to return EINVAL, got %d\n", VAR_3);
    FUNC_0(VAR_2 == VAR_1, "Expected errno to return EINVAL, got %d\n", VAR_2);

    VAR_3 = FUNC_1(&VAR_4);
    FUNC_0(VAR_3 == 0, "Expected rand_s to return 0, got %d\n", VAR_3);
}
