
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPCWSTR ;
typedef scalar_t__ HANDLE ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static void FUNC_3(LPCWSTR VAR_4)
{
    HANDLE VAR_5;
    VAR_5 = FUNC_1(VAR_4, VAR_2, 0, ((void*)0), VAR_0, VAR_1, ((void*)0));
    FUNC_2(VAR_5 != VAR_3, "Failed to create file.\n");
    FUNC_0(VAR_5);
}
