
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BOOL ;
typedef int ARGB ;



__attribute__((used)) static BOOL FUNC_0(ARGB VAR_0)
{
    unsigned char VAR_1, VAR_2, VAR_3;

    VAR_1 = (VAR_0 >> 16) & 0xff;
    VAR_2 = (VAR_0 >> 8) & 0xff;
    VAR_3 = VAR_0 & 0xff;

    return (VAR_1 == VAR_2) && (VAR_2 == VAR_3);
}
