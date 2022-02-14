
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ month; scalar_t__ day; int time; } ;
typedef TYPE_1__ Interval ;
typedef int Datum ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static Datum
FUNC_2(void)
{
 Interval *VAR_1 = FUNC_1(sizeof(Interval));

 VAR_1->time = VAR_0;
 VAR_1->day = 0;
 VAR_1->month = 0;
 return FUNC_0(VAR_1);
}
