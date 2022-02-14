
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ HANDLE ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int const*,int ,int ,int *,int ,int ,int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static void FUNC_3(const WCHAR *VAR_3)
{
    HANDLE VAR_4;

    VAR_4 = FUNC_1(VAR_3, VAR_1, 0, ((void*)0), VAR_0, 0, ((void*)0));
    FUNC_2(VAR_4 != VAR_2, "Failure to open file\n");
    FUNC_0(VAR_4);
}
