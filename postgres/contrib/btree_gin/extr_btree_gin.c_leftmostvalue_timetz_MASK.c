
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int zone; scalar_t__ time; } ;
typedef TYPE_1__ TimeTzADT ;
typedef int Datum ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static Datum
FUNC_2(void)
{
 TimeTzADT *VAR_0 = FUNC_1(sizeof(TimeTzADT));

 VAR_0->time = 0;
 VAR_0->zone = -24 * 3600;

 return FUNC_0(VAR_0);
}
