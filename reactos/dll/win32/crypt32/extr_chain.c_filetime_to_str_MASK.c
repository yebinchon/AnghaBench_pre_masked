
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SYSTEMTIME ;
typedef char* LPCSTR ;
typedef int FILETIME ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (int ,int ,int *,char*,char*,int ) ;
 int FUNC_3 (int ,int ,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_4 (char*,char*) ;

__attribute__((used)) static LPCSTR FUNC_5(const FILETIME *VAR_2)
{
    char VAR_3[80];
    char VAR_4[80];
    SYSTEMTIME VAR_5;

    if (!VAR_2) return "(null)";

    FUNC_3(VAR_1, VAR_0, VAR_4, FUNC_0(VAR_4));
    FUNC_1(VAR_2, &VAR_5);
    FUNC_2(VAR_1, 0, &VAR_5, VAR_4, VAR_3, FUNC_0(VAR_3));
    return FUNC_4("%s", VAR_3);
}
