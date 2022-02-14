
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t TimeoutId ;
struct TYPE_5__ {int indicator; scalar_t__ active; int * timeout_handler; } ;
struct TYPE_4__ {size_t id; int keep_indicator; } ;
typedef TYPE_1__ DisableTimeoutParams ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 (size_t) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(const DisableTimeoutParams *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(VAR_1);


 FUNC_2();


 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
 {
  TimeoutId VAR_6 = VAR_3[VAR_5].id;

  FUNC_0(VAR_0[VAR_6].timeout_handler != ((void*)0));

  if (VAR_0[VAR_6].active)
   FUNC_4(FUNC_3(VAR_6));

  if (!VAR_3[VAR_5].keep_indicator)
   VAR_0[VAR_6].indicator = 0;
 }


 if (VAR_2 > 0)
  FUNC_5(FUNC_1());
}
