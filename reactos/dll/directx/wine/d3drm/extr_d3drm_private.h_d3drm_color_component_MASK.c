
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int BYTE ;


 unsigned int FUNC_0 (float) ;

__attribute__((used)) static inline BYTE FUNC_1(float VAR_0)
{
    if (VAR_0 <= 0.0f)
        return 0u;
    if (VAR_0 >= 1.0f)
        return 0xffu;
    return FUNC_0(VAR_0 * 255.0f);
}
