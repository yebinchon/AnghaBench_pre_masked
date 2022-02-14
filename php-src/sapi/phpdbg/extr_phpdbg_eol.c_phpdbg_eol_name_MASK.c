
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int id; char* name; } ;


 size_t VAR_0 ;
 TYPE_1__* VAR_1 ;

char *FUNC_0(int VAR_2)
{
 size_t VAR_3 = 0;

 while (VAR_3 < VAR_0) {

  if (VAR_2 == VAR_1[VAR_3].id) {
   return VAR_1[VAR_3].name;
  }

  VAR_3++;
 }

 return ((void*)0);
}
