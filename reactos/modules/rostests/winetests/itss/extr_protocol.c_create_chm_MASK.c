
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int HRSRC ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int ) ;
 int VAR_5 ;
 int FUNC_6 (scalar_t__,int ,int ,int *,int *) ;
 int FUNC_7 (int,char*) ;

__attribute__((used)) static BOOL FUNC_8(void)
{
    HANDLE VAR_6;
    HRSRC VAR_7;
    DWORD VAR_8;

    VAR_6 = FUNC_1("test.chm", VAR_3, 0, ((void*)0), VAR_0,
            VAR_2, ((void*)0));
    FUNC_7(VAR_6 != VAR_4, "Could not create test.chm file\n");
    if(VAR_6 == VAR_4)
        return VAR_1;

    VAR_7 = FUNC_2(((void*)0), FUNC_4(60), FUNC_4(60));

    FUNC_6(VAR_6, FUNC_3(((void*)0), VAR_7), FUNC_5(((void*)0), VAR_7), &VAR_8, ((void*)0));
    FUNC_0(VAR_6);

    return VAR_5;
}
