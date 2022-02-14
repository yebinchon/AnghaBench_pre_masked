
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;
typedef int ARGB ;



__attribute__((used)) static inline ARGB FUNC_0(ARGB VAR_0, ARGB VAR_1)
{
    BYTE VAR_2, VAR_3, VAR_4, VAR_5;
    BYTE VAR_6, VAR_7;

    VAR_7 = (VAR_1>>24)&0xff;

    if (VAR_7 == 0) return VAR_0;

    VAR_6 = (((VAR_0>>24)&0xff) * (0xff-VAR_7)) / 0xff;

    VAR_5 = VAR_6 + VAR_7;
    VAR_2 = ((VAR_0&0xff)*VAR_6 + (VAR_1&0xff)*0xff)/VAR_5;
    VAR_3 = (((VAR_0>>8)&0xff)*VAR_6 + ((VAR_1>>8)&0xff)*0xff)/VAR_5;
    VAR_4 = (((VAR_0>>16)&0xff)*VAR_6 + ((VAR_1>>16)&0xff)*0xff)/VAR_5;

    return (VAR_5<<24)|(VAR_4<<16)|(VAR_3<<8)|VAR_2;
}
