
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
struct TYPE_6__ {TYPE_2__* notifier; } ;
typedef TYPE_1__ php_stream_context ;
struct TYPE_7__ {int dtor; int ptr; int func; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *,int ,char*) ;
 TYPE_2__* FUNC_5 () ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_7 (int ,char*,int) ;

__attribute__((used)) static int FUNC_8(php_stream_context *VAR_5, zval *VAR_6)
{
 int VAR_7 = VAR_2;
 zval *VAR_8;

 if (((void*)0) != (VAR_8 = FUNC_7(FUNC_1(VAR_6), "notification", sizeof("notification")-1))) {

  if (VAR_5->notifier) {
   FUNC_6(VAR_5->notifier);
   VAR_5->notifier = ((void*)0);
  }

  VAR_5->notifier = FUNC_5();
  VAR_5->notifier->func = VAR_3;
  FUNC_0(&VAR_5->notifier->ptr, VAR_8);
  VAR_5->notifier->dtor = VAR_4;
 }
 if (((void*)0) != (VAR_8 = FUNC_7(FUNC_1(VAR_6), "options", sizeof("options")-1))) {
  if (FUNC_2(VAR_8) == VAR_1) {
   FUNC_3(VAR_5, VAR_8);
  } else {
   FUNC_4(((void*)0), VAR_0, "Invalid stream/context parameter");
  }
 }

 return VAR_7;
}
