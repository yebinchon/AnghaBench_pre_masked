
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * last_error_result; } ;
typedef int PGresult ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(PGresult *VAR_1)
{
 if (VAR_1)
 {
  switch (FUNC_1(VAR_1))
  {
   case 128:
   case 129:
    if (VAR_0.last_error_result)
     FUNC_0(VAR_0.last_error_result);
    VAR_0.last_error_result = VAR_1;
    break;

   default:
    FUNC_0(VAR_1);
    break;
  }
 }
}
