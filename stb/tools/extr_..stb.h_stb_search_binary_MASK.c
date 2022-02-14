
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int minval; int maxval; int mode; } ;
typedef TYPE_1__ stb_search ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int*) ;

int FUNC_1(stb_search *VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
   int VAR_6;
   if (VAR_4 < VAR_3) return VAR_3-1;
   VAR_2->minval = VAR_3;
   VAR_2->maxval = VAR_4;
   VAR_2->mode = VAR_5 ? VAR_1 : VAR_0;
   FUNC_0(VAR_2, &VAR_6);
   return VAR_6;
}
