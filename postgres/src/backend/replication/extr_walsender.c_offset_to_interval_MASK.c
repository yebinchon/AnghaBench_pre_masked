
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TimeOffset ;
struct TYPE_4__ {int time; scalar_t__ day; scalar_t__ month; } ;
typedef TYPE_1__ Interval ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static Interval *
FUNC_1(TimeOffset VAR_0)
{
 Interval *VAR_1 = FUNC_0(sizeof(Interval));

 VAR_1->month = 0;
 VAR_1->day = 0;
 VAR_1->time = VAR_0;

 return VAR_1;
}
