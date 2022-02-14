
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DWORD ;



__attribute__((used)) static DWORD FUNC_0 (int VAR_0, int VAR_1, int VAR_2, int VAR_3)
{
    return ((VAR_0 & 0x0000FFFF) | ((VAR_1 & 0x00FF) << 16) |
            (VAR_2 ? 0x01000000 : 0) | (VAR_3 ? 0x40000000 : 0));
}
