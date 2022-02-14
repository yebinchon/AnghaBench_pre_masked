
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int stop_event; } ;
typedef TYPE_1__ os_inhibit_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void *FUNC_2(void *VAR_1)
{
 os_inhibit_t *VAR_2 = VAR_1;

 while (FUNC_0(VAR_2->stop_event, 30000) == VAR_0)
  FUNC_1(VAR_2);

 return ((void*)0);
}
