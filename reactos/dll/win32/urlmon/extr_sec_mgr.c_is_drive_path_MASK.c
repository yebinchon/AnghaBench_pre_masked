
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static inline BOOL FUNC_1(const WCHAR *VAR_0)
{
    return FUNC_0(*VAR_0) && *(VAR_0+1) == ':';
}
