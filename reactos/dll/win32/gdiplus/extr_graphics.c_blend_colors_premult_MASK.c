
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int start ;
typedef int end ;
typedef int UINT ;
typedef float REAL ;
typedef int ARGB ;



__attribute__((used)) static inline ARGB FUNC_0(ARGB VAR_0, ARGB VAR_1, REAL VAR_2)
{
    UINT VAR_3 = VAR_2 * 255.0f + 0.5f;
    return
        (((((VAR_0 >> 24) ) << 8) + (((VAR_1 >> 24) ) - ((VAR_0 >> 24) )) * VAR_3) >> 8) << 24 |
        (((((VAR_0 >> 16) & 0xff) << 8) + (((VAR_1 >> 16) & 0xff) - ((VAR_0 >> 16) & 0xff)) * VAR_3) >> 8) << 16 |
        (((((VAR_0 >> 8) & 0xff) << 8) + (((VAR_1 >> 8) & 0xff) - ((VAR_0 >> 8) & 0xff)) * VAR_3) >> 8) << 8 |
        (((((VAR_0 ) & 0xff) << 8) + (((VAR_1 ) & 0xff) - ((VAR_0 ) & 0xff)) * VAR_3) >> 8);
}
