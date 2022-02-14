
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,char*,int,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (char*,int,int ,int) ;
 int FUNC_5 (char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (int,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_7(void)
{
    int VAR_9;
    char VAR_10[] = "t_get_osfhanle";
    DWORD VAR_11;
    HANDLE VAR_12;

    VAR_9 = FUNC_4(VAR_10, VAR_2|VAR_4, VAR_5, VAR_6 | VAR_7);
    VAR_12 = (HANDLE)FUNC_2(VAR_9);
    FUNC_0(VAR_12, "bar", 3, &VAR_11, ((void*)0));
    FUNC_1(VAR_9);
    VAR_9 = FUNC_3(VAR_10, VAR_3, 0);
    FUNC_6(VAR_9 != -1, "Couldn't open '%s' after _get_osfhandle()\n", VAR_10);

    FUNC_1(VAR_9);
    FUNC_5(VAR_10);

    VAR_8 = 0xdeadbeef;
    VAR_12 = (HANDLE)FUNC_2(VAR_9);
    FUNC_6(VAR_12 == VAR_1, "_get_osfhandle returned %p\n", VAR_12);
    FUNC_6(VAR_8 == VAR_0, "errno = %d\n", VAR_8);
}
