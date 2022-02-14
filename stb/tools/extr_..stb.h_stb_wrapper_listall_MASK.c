
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ p; size_t size; char* file; int line; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

void FUNC_0(void (*VAR_3)(void *VAR_4, size_t VAR_5, char *VAR_6, int VAR_7))
{
   int VAR_8;
   for (VAR_8=0; VAR_8 < VAR_1; ++VAR_8)
      if (VAR_2[VAR_8].p > VAR_0)
         VAR_3(VAR_2[VAR_8].p , VAR_2[VAR_8].size,
              VAR_2[VAR_8].file, VAR_2[VAR_8].line);
}
