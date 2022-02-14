
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LPFILETIME ;
typedef char* LPCSTR ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static LPCSTR FUNC_2(LPFILETIME VAR_0)
{
    if (!VAR_0)
        return "(nil)";
    return FUNC_1("%p (%s)", VAR_0, FUNC_0(VAR_0));
}
