
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
typedef TYPE_1__* soapServicePtr ;
typedef int sdlFunctionPtr ;
struct TYPE_3__ {scalar_t__ send_errors; } ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int *,char*,char*,int *,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int VAR_1 ;
 int FUNC_6 (int ,int *,int *) ;
 int VAR_2 ;
 int FUNC_7 (int ,int *,char*,int,int ,int *) ;
 int FUNC_8 (int *,int ) ;
 int * FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(soapServicePtr VAR_3, sdlFunctionPtr VAR_4, zval *VAR_5)
{
 zval VAR_6;

 FUNC_2(&VAR_6, FUNC_0(VAR_0));
 if (FUNC_5(FUNC_3(VAR_6), VAR_1)) {
  FUNC_6(VAR_4, &VAR_6, ((void*)0));
 } else if (FUNC_5(FUNC_3(VAR_6), VAR_2)) {
  if (VAR_3->send_errors) {
   zval VAR_7;
   zend_string *VAR_8 = FUNC_9(FUNC_7(VAR_2, &VAR_6, "message", sizeof("message")-1, 0, &VAR_7));
   FUNC_4(&VAR_6, VAR_5, "Server", FUNC_1(VAR_8), ((void*)0), ((void*)0));
   FUNC_8(VAR_8, 0);
  } else {
   FUNC_4(&VAR_6, VAR_5, "Server", "Internal Error", ((void*)0), ((void*)0));
  }
  FUNC_6(VAR_4, &VAR_6, ((void*)0));
 }
}
