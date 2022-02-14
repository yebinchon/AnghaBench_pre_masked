
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int VAR_0)
{
    int VAR_1;

    VAR_1 = ((VAR_0 << 8) | VAR_0) >> 8;
    if ( VAR_1 > 0xffff) return 0xffff;
    return VAR_1;
}
