
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int y; int x; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static long
FUNC_0()
{
  VAR_3--;
  if (0 <= VAR_3) {
   VAR_0 = VAR_2[VAR_3].x;
   VAR_1 = VAR_2[VAR_3].y;
  }
  return ( VAR_3 );
}
