
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ count; int * value; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

void FUNC_2(void)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_1) * 2; VAR_2++)
 {
  FUNC_1( VAR_0[VAR_2].value );
  VAR_0[VAR_2].value = ((void*)0);
  VAR_0[VAR_2].count = 0;
 }
}
