
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int php_output_handler_status_t ;
struct TYPE_3__ {int flags; int level; } ;
typedef TYPE_1__ php_output_handler ;
typedef int php_output_context ;


 int VAR_0 ;



 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, void *VAR_2)
{
 int VAR_3;
 php_output_handler_status_t VAR_4;
 php_output_handler *VAR_5 = *(php_output_handler **) VAR_1;
 php_output_context *VAR_6 = (php_output_context *) VAR_2;

 if ((VAR_3 = (VAR_5->flags & VAR_0))) {
  VAR_4 = 130;
 } else {
  VAR_4 = FUNC_2(VAR_5, VAR_6);
 }





 switch (VAR_4) {
  case 129:
   return 1;

  case 128:

   if (VAR_5->level) {
    FUNC_1(VAR_6);
   }
   return 0;

  case 130:
  default:
   if (VAR_3) {

    if (!VAR_5->level) {
     FUNC_0(VAR_6);
    }
   } else {

    if (VAR_5->level) {
     FUNC_1(VAR_6);
    }
   }
   return 0;
 }
}
