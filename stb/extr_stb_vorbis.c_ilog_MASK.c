
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32 ;



__attribute__((used)) static int FUNC_0(int32 VAR_0)
{
   static signed char VAR_1[16] = { 0,1,2,2,3,3,3,3,4,4,4,4,4,4,4,4 };

   if (VAR_0 < 0) return 0;


   if (VAR_0 < (1 << 14))
        if (VAR_0 < (1 << 4)) return 0 + VAR_1[VAR_0 ];
        else if (VAR_0 < (1 << 9)) return 5 + VAR_1[VAR_0 >> 5];
             else return 10 + VAR_1[VAR_0 >> 10];
   else if (VAR_0 < (1 << 24))
             if (VAR_0 < (1 << 19)) return 15 + VAR_1[VAR_0 >> 15];
             else return 20 + VAR_1[VAR_0 >> 20];
        else if (VAR_0 < (1 << 29)) return 25 + VAR_1[VAR_0 >> 25];
             else return 30 + VAR_1[VAR_0 >> 30];
}
