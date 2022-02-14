
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ LPSTR ;
typedef int DWORD ;



__attribute__((used)) static inline DWORD FUNC_0( LPSTR *VAR_0 )
{
    LPSTR *VAR_1 = VAR_0;
    while (*VAR_1) VAR_1++;
    return VAR_1 - VAR_0;
}
