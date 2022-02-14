
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int warning_count; int error_count; struct TYPE_4__* error_messages; struct TYPE_4__* message; struct TYPE_4__* warning_messages; } ;
typedef TYPE_1__ timelib_error_container ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(timelib_error_container *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->warning_count; VAR_1++) {
  FUNC_0(VAR_0->warning_messages[VAR_1].message);
 }
 FUNC_0(VAR_0->warning_messages);
 for (VAR_1 = 0; VAR_1 < VAR_0->error_count; VAR_1++) {
  FUNC_0(VAR_0->error_messages[VAR_1].message);
 }
 FUNC_0(VAR_0->error_messages);
 FUNC_0(VAR_0);
}
