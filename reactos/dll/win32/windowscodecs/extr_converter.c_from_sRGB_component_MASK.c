
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float,float) ;

__attribute__((used)) static inline float FUNC_1(float VAR_0)
{
    if (VAR_0 <= 0.04045f) return VAR_0 / 12.92f;
    return FUNC_0((VAR_0 + 0.055f) / 1.055f, 2.4f);
}
