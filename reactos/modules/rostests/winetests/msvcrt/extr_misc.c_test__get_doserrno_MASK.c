
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    int VAR_5, VAR_6;

    if (!&FUNC_1)
    {
        FUNC_2("_get_doserrno is not available\n");
        return;
    }

    VAR_3 = VAR_2;
    VAR_4 = VAR_0;
    VAR_5 = FUNC_1(((void*)0));
    FUNC_0(VAR_5 == VAR_1, "Expected _get_doserrno to return EINVAL, got %d\n", VAR_5);
    FUNC_0(VAR_3 == VAR_2, "Expected _doserrno to be ERROR_INVALID_CMM, got %d\n", VAR_3);
    FUNC_0(VAR_4 == VAR_0, "Expected errno to be EBADF, got %d\n", VAR_4);

    VAR_3 = VAR_2;
    VAR_4 = VAR_0;
    VAR_6 = 0xdeadbeef;
    VAR_5 = FUNC_1(&VAR_6);
    FUNC_0(VAR_5 == 0, "Expected _get_doserrno to return 0, got %d\n", VAR_5);
    FUNC_0(VAR_6 == VAR_2, "Expected output variable to be ERROR_INVALID_CMM, got %d\n", VAR_6);
}
