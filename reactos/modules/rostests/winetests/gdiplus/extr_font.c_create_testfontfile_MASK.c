
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int LPCSTR ;
typedef scalar_t__ HRSRC ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,int,int ,int *,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int ,scalar_t__) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (scalar_t__,void*,scalar_t__,scalar_t__*,int *) ;
 int FUNC_11 (int *,int const*) ;
 int FUNC_12 (int,char*,...) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(const WCHAR *VAR_6, int VAR_7, WCHAR VAR_8[VAR_4])
{
    DWORD VAR_9;
    HANDLE VAR_10;
    HRSRC VAR_11;
    void *VAR_12;

    FUNC_5(VAR_4, VAR_8);
    FUNC_11(VAR_8, VAR_6);

    VAR_10 = FUNC_1(VAR_8, VAR_1|VAR_2, 0, ((void*)0), VAR_0, 0, 0);
    FUNC_12(VAR_10 != VAR_3, "file creation failed, at %s, error %d\n", FUNC_13(VAR_8), FUNC_3());

    VAR_11 = FUNC_2(FUNC_4(((void*)0)), FUNC_8(VAR_7), (LPCSTR)VAR_5);
    FUNC_12(VAR_11 != 0, "couldn't find resource\n");
    VAR_12 = FUNC_7(FUNC_6(FUNC_4(((void*)0)), VAR_11));
    FUNC_10(VAR_10, VAR_12, FUNC_9(FUNC_4(((void*)0)), VAR_11), &VAR_9, ((void*)0));
    FUNC_12(VAR_9 == FUNC_9(FUNC_4(((void*)0)), VAR_11), "couldn't write resource\n");
    FUNC_0(VAR_10);
}
