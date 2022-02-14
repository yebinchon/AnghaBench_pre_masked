
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef float REAL ;
typedef int INT ;
typedef int ARGB ;



__attribute__((used)) static ARGB FUNC_0(ARGB VAR_0, ARGB VAR_1, REAL VAR_2)
{
    INT VAR_3, VAR_4, VAR_5;
    INT VAR_6;

    VAR_6 = (INT)(VAR_2 * 255.0f + 0.5f);

    VAR_3 = ((VAR_0 >> 24) & 0xff) * (VAR_6 ^ 0xff);
    VAR_4 = ((VAR_1 >> 24) & 0xff) * VAR_6;

    VAR_5 = VAR_3 + VAR_4;

    if (VAR_5 < 0xff) return 0;

    return (VAR_5 / 0xff) << 24 |
        ((((VAR_0 >> 16) & 0xff) * VAR_3 + (((VAR_1 >> 16) & 0xff) * VAR_4)) / VAR_5) << 16 |
        ((((VAR_0 >> 8) & 0xff) * VAR_3 + (((VAR_1 >> 8) & 0xff) * VAR_4)) / VAR_5) << 8 |
        (((VAR_0 & 0xff) * VAR_3 + ((VAR_1 & 0xff) * VAR_4)) / VAR_5);
}
