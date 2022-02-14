
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int WORD ;
typedef unsigned int DWORD ;



__attribute__((used)) static unsigned int FUNC_0(const void *VAR_0, unsigned int VAR_1,
        unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
    if (!VAR_0)
        return VAR_3 + VAR_4;
    if (VAR_1 == 2)
        return ((const WORD *)VAR_0)[VAR_3 + VAR_4] + VAR_2;
    return ((const DWORD *)VAR_0)[VAR_3 + VAR_4] + VAR_2;
}
