
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    int VAR_3;

    if (!&FUNC_1)
    {
        FUNC_2("_set_doserrno is not available\n");
        return;
    }

    VAR_2 = VAR_1;
    VAR_3 = FUNC_1(VAR_0);
    FUNC_0(VAR_3 == 0, "Expected _set_doserrno to return 0, got %d\n", VAR_3);
    FUNC_0(VAR_2 == VAR_0,
       "Expected _doserrno to be ERROR_FILE_NOT_FOUND, got %d\n", VAR_2);

    VAR_2 = VAR_1;
    VAR_3 = FUNC_1(-1);
    FUNC_0(VAR_3 == 0, "Expected _set_doserrno to return 0, got %d\n", VAR_3);
    FUNC_0(VAR_2 == -1,
       "Expected _doserrno to be -1, got %d\n", VAR_2);

    VAR_2 = VAR_1;
    VAR_3 = FUNC_1(0xdeadbeef);
    FUNC_0(VAR_3 == 0, "Expected _set_doserrno to return 0, got %d\n", VAR_3);
    FUNC_0(VAR_2 == 0xdeadbeef,
       "Expected _doserrno to be 0xdeadbeef, got %d\n", VAR_2);
}
