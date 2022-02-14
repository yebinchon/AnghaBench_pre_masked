
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ BYTE ;


 scalar_t__* VAR_0 ;

__attribute__((used)) static int FUNC_0 (BYTE VAR_1)
{

    if (VAR_0 && VAR_1 >= VAR_0[4]) {
        if (VAR_1 <= VAR_0[5]) return 1;
        if (VAR_1 >= VAR_0[6] && VAR_1 <= VAR_0[7]) return 1;
        if (VAR_1 >= VAR_0[8] && VAR_1 <= VAR_0[9]) return 1;
    }
    return 0;
}
