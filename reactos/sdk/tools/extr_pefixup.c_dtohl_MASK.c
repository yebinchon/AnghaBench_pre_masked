
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PBYTE ;
typedef int DWORD ;



__attribute__((used)) static inline DWORD FUNC_0(DWORD VAR_0)
{
    PBYTE VAR_1 = (PBYTE)&VAR_0;
    return VAR_1[0] | (VAR_1[1] << 8) | (VAR_1[2] << 16) | (VAR_1[3] << 24);
}
