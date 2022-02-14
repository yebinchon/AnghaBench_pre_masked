
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCSTR ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__,char*,int ,int *,int *) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char*,int,int ) ;

__attribute__((used)) static BOOL FUNC_7(LPCSTR VAR_7, LPCSTR VAR_8, int VAR_9, DWORD VAR_10)
{
    char VAR_11[VAR_5], *VAR_12;
    HANDLE VAR_13;
    FUNC_2(VAR_11, VAR_7, VAR_8);

    VAR_12 = FUNC_5(VAR_10);
    FUNC_6(VAR_12, VAR_9, VAR_10);

    VAR_13 = FUNC_1(VAR_11, VAR_3, 0, ((void*)0), VAR_0, VAR_2, ((void*)0));
    if(VAR_13 == VAR_4)
        return VAR_1;

    FUNC_3(VAR_13, VAR_12, VAR_10, &VAR_10, ((void*)0));
    FUNC_0(VAR_13);
    FUNC_4(VAR_12);
    return VAR_6;
}
