
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zval ;
struct TYPE_4__ {scalar_t__ calling; int * arguments; } ;
typedef TYPE_1__ user_tick_function_entry ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,int *) ;

__attribute__((used)) static int FUNC_5(user_tick_function_entry * VAR_4, user_tick_function_entry * VAR_5)
{
 zval *VAR_6 = &VAR_4->arguments[0];
 zval *VAR_7 = &VAR_5->arguments[0];
 int VAR_8;

 if (FUNC_0(VAR_6) == VAR_3 && FUNC_0(VAR_7) == VAR_3) {
  VAR_8 = FUNC_2(VAR_6, VAR_7) == 0;
 } else if (FUNC_0(VAR_6) == VAR_1 && FUNC_0(VAR_7) == VAR_1) {
  VAR_8 = FUNC_3(VAR_6, VAR_7) == 0;
 } else if (FUNC_0(VAR_6) == VAR_2 && FUNC_0(VAR_7) == VAR_2) {
  VAR_8 = FUNC_4(VAR_6, VAR_7) == 0;
 } else {
  VAR_8 = 0;
 }

 if (VAR_8 && VAR_4->calling) {
  FUNC_1(((void*)0), VAR_0, "Unable to delete tick function executed at the moment");
  return 0;
 }
 return VAR_8;
}
