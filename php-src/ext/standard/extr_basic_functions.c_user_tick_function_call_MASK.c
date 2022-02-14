
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct TYPE_4__ {int calling; int * arguments; scalar_t__ arg_count; } ;
typedef TYPE_1__ user_tick_function_entry ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 TYPE_3__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *,int *,int *,scalar_t__,int *) ;
 int FUNC_6 (int *,int ,char*,...) ;
 int * FUNC_7 (int ,int) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(user_tick_function_entry *VAR_5)
{
 zval VAR_6;
 zval *VAR_7 = &VAR_5->arguments[0];


 if (! VAR_5->calling) {
  VAR_5->calling = 1;

  if (FUNC_5(((void*)0), ((void*)0),
        VAR_7,
        &VAR_6,
        VAR_5->arg_count - 1,
        VAR_5->arguments + 1
        ) == VAR_4) {
   FUNC_8(&VAR_6);

  } else {
   zval *VAR_8, *VAR_9;

   if (FUNC_4(VAR_7) == VAR_3) {
    FUNC_6(((void*)0), VAR_0, "Unable to call %s() - function does not exist", FUNC_3(VAR_7));
   } else if ( FUNC_4(VAR_7) == VAR_1
      && (VAR_8 = FUNC_7(FUNC_1(VAR_7), 0)) != ((void*)0)
      && (VAR_9 = FUNC_7(FUNC_1(VAR_7), 1)) != ((void*)0)
      && FUNC_4(VAR_8) == VAR_2
      && FUNC_4(VAR_9) == VAR_3) {
    FUNC_6(((void*)0), VAR_0, "Unable to call %s::%s() - function does not exist", FUNC_0(FUNC_2(VAR_8)->name), FUNC_3(VAR_9));
   } else {
    FUNC_6(((void*)0), VAR_0, "Unable to call tick function");
   }
  }

  VAR_5->calling = 0;
 }
}
