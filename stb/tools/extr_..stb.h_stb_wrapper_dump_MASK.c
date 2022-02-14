
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ p; int line; char* file; scalar_t__ size; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,char*,scalar_t__,int,int,char*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int * FUNC_1 (char*,char*) ;

void FUNC_2(char *VAR_3)
{
   int VAR_4;
   FILE *VAR_5 = FUNC_1(VAR_3, "w");
   if (!VAR_5) return;
   for (VAR_4=0; VAR_4 < VAR_1; ++VAR_4)
      if (VAR_2[VAR_4].p > VAR_0)
         FUNC_0(VAR_5, "%p %7d - %4d %s\n",
            VAR_2[VAR_4].p , (int) VAR_2[VAR_4].size,
            VAR_2[VAR_4].line, VAR_2[VAR_4].file);
}
