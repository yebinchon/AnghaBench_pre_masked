
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(int VAR_0)
{
    int VAR_1 = 0;

    if ( VAR_0 <= 2 )
        VAR_1 = 1;
    else if ( VAR_0 <= 4 )
        VAR_1 = 2;
    else if ( VAR_0 <= 8 )
        VAR_1 = 3;
    else if ( VAR_0 <= 16 )
        VAR_1 = 4;
    else if ( VAR_0 <= 32 )
        VAR_1 = 5;
    else if ( VAR_0 <= 64 )
        VAR_1 = 6;
    else if ( VAR_0 <= 128 )
        VAR_1 = 7;
    else if ( VAR_0 <= 256 )
        VAR_1 = 8;
    return VAR_1;
    }
