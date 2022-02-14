
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ time; int zone; } ;
typedef TYPE_1__ TimeTzADT ;
typedef scalar_t__ TimeOffset ;


 int VAR_0 ;

__attribute__((used)) static int
FUNC_0(TimeTzADT *VAR_1, TimeTzADT *VAR_2)
{
 TimeOffset VAR_3,
    VAR_4;


 VAR_3 = VAR_1->time + (VAR_1->zone * VAR_0);
 VAR_4 = VAR_2->time + (VAR_2->zone * VAR_0);

 if (VAR_3 > VAR_4)
  return 1;
 if (VAR_3 < VAR_4)
  return -1;





 if (VAR_1->zone > VAR_2->zone)
  return 1;
 if (VAR_1->zone < VAR_2->zone)
  return -1;

 return 0;
}
