
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ user_set; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static bool FUNC_0(void)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  if (VAR_1[VAR_2].user_set)
   return 1;
 }
 return 0;
}
