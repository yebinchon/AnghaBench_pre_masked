
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t TimeoutId ;
struct TYPE_2__ {int indicator; scalar_t__ active; int * timeout_handler; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (size_t) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(TimeoutId VAR_3, bool VAR_4)
{

 FUNC_0(VAR_1);
 FUNC_0(VAR_0[VAR_3].timeout_handler != ((void*)0));


 FUNC_2();


 if (VAR_0[VAR_3].active)
  FUNC_4(FUNC_3(VAR_3));


 if (!VAR_4)
  VAR_0[VAR_3].indicator = 0;


 if (VAR_2 > 0)
  FUNC_5(FUNC_1());
}
