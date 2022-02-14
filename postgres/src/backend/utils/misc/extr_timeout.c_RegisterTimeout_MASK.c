
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * timeout_handler_proc ;
typedef size_t TimeoutId ;
struct TYPE_2__ {int * timeout_handler; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;

TimeoutId
FUNC_4(TimeoutId VAR_6, timeout_handler_proc VAR_7)
{
 FUNC_0(VAR_5);



 if (VAR_6 >= VAR_3)
 {

  for (VAR_6 = VAR_3; VAR_6 < VAR_2; VAR_6++)
   if (VAR_4[VAR_6].timeout_handler == ((void*)0))
    break;
  if (VAR_6 >= VAR_2)
   FUNC_1(VAR_1,
     (FUNC_2(VAR_0),
      FUNC_3("cannot add more timeout reasons")));
 }

 FUNC_0(VAR_4[VAR_6].timeout_handler == ((void*)0));

 VAR_4[VAR_6].timeout_handler = VAR_7;

 return VAR_6;
}
