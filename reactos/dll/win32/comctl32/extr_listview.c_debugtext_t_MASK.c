
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPCWSTR ;
typedef char* LPCSTR ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (scalar_t__) ;

__attribute__((used)) static inline LPCSTR FUNC_2(LPCWSTR VAR_1, BOOL VAR_2)
{
    if (VAR_1 == VAR_0) return "(callback)";
    return VAR_2 ? FUNC_1(VAR_1) : FUNC_0((LPCSTR)VAR_1);
}
