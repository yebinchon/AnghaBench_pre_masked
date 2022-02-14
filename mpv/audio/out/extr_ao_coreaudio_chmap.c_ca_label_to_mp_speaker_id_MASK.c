
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ AudioChannelLabel ;


 scalar_t__** VAR_0 ;

int FUNC_0(AudioChannelLabel VAR_1)
{
    for (int VAR_2 = 0; VAR_0[VAR_2][1] >= 0; VAR_2++)
        if (VAR_0[VAR_2][0] == VAR_1)
            return VAR_0[VAR_2][1];
    return -1;
}
