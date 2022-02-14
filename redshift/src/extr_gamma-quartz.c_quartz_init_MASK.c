
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * displays; } ;
typedef TYPE_1__ quartz_state_t ;


 TYPE_1__* FUNC_0 (int) ;

__attribute__((used)) static int
FUNC_1(quartz_state_t **VAR_0)
{
 *VAR_0 = FUNC_0(sizeof(quartz_state_t));
 if (*VAR_0 == ((void*)0)) return -1;

 quartz_state_t *VAR_1 = *VAR_0;
 VAR_1->displays = ((void*)0);

 return 0;
}
