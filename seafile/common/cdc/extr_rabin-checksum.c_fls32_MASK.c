
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef scalar_t__ u_int ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static inline u_int FUNC_0 (u_int32_t VAR_1)
{
    if (VAR_1 & 0xffff0000) {
        if (VAR_1 & 0xff000000)
            return 24 + VAR_0[VAR_1>>24];
        else
            return 16 + VAR_0[VAR_1>>16];
    }
    if (VAR_1 & 0x0000ff00)
        return 8 + VAR_0[VAR_1>>8];
    else
        return VAR_0[VAR_1];
}
