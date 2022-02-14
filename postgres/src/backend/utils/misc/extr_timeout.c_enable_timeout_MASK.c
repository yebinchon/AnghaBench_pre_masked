
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ fin_time; size_t index; } ;
typedef TYPE_1__ timeout_params ;
typedef scalar_t__ TimestampTz ;
typedef size_t TimeoutId ;
struct TYPE_5__ {int indicator; scalar_t__ fin_time; scalar_t__ start_time; scalar_t__ active; int * timeout_handler; } ;


 int FUNC_0 (int ) ;
 TYPE_1__** VAR_0 ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (size_t) ;
 int FUNC_2 (size_t,int) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(TimeoutId VAR_4, TimestampTz VAR_5, TimestampTz VAR_6)
{
 int VAR_7;


 FUNC_0(VAR_2);
 FUNC_0(VAR_1[VAR_4].timeout_handler != ((void*)0));





 if (VAR_1[VAR_4].active)
  FUNC_3(FUNC_1(VAR_4));





 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++)
 {
  timeout_params *VAR_8 = VAR_0[VAR_7];

  if (VAR_6 < VAR_8->fin_time)
   break;
  if (VAR_6 == VAR_8->fin_time && VAR_4 < VAR_8->index)
   break;
 }




 VAR_1[VAR_4].indicator = 0;
 VAR_1[VAR_4].start_time = VAR_5;
 VAR_1[VAR_4].fin_time = VAR_6;

 FUNC_2(VAR_4, VAR_7);
}
