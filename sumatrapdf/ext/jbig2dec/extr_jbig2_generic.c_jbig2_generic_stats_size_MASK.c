
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Jbig2Ctx ;



int
FUNC_0(Jbig2Ctx *VAR_0, int VAR_1)
{
    int VAR_2 = VAR_1 == 0 ? 1 << 16 : VAR_1 == 1 ? 1 << 13 : 1 << 10;

    return VAR_2;
}
