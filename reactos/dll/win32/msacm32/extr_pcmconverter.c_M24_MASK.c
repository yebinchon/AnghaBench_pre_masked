
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int LONGLONG ;



__attribute__((used)) static inline int FUNC_0(int VAR_0, int VAR_1)
{
    LONGLONG VAR_2 = VAR_0 + VAR_1;


    if (VAR_2 > 0x7fffff00)
        VAR_2 = 0x7fffff00;
    else if (VAR_2 < -0x7fffff00)
        VAR_2 = -0x7fffff00;

    return VAR_2;
}
