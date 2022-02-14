
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
int FUNC_0(size_t VAR_0)
{
   static signed char VAR_1[16] = { -1,0,1,1,2,2,2,2,3,3,3,3,3,3,3,3 };







   if (VAR_0 < (1U << 14))
        if (VAR_0 < (1U << 4)) return 0 + VAR_1[VAR_0 ];
        else if (VAR_0 < (1U << 9)) return 5 + VAR_1[VAR_0 >> 5];
             else return 10 + VAR_1[VAR_0 >> 10];
   else if (VAR_0 < (1U << 24))
             if (VAR_0 < (1U << 19)) return 15 + VAR_1[VAR_0 >> 15];
             else return 20 + VAR_1[VAR_0 >> 20];
        else if (VAR_0 < (1U << 29)) return 25 + VAR_1[VAR_0 >> 25];
             else return 30 + VAR_1[VAR_0 >> 30];
}
