
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* file; int line; int p; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 size_t VAR_5 ;

__attribute__((used)) static void FUNC_0(int VAR_6, char *VAR_7, int VAR_8)
{
   VAR_3[VAR_5] = VAR_4[VAR_6];
   VAR_3[VAR_5].file = VAR_7;
   VAR_3[VAR_5].line = VAR_8;
   if (++VAR_5 == VAR_1)
      VAR_5 = 0;
   VAR_4[VAR_6].p = VAR_0;
   --VAR_2;
}
