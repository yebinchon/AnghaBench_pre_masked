
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zend_long ;
typedef int sapi_module_struct ;
typedef scalar_t__ pid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 scalar_t__* FUNC_1 (int,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,char*) ;
 char* FUNC_4 (char*) ;
 int FUNC_5 () ;
 int VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_6 (int *,int *,int) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_7(sapi_module_struct *VAR_7)
{
 char *VAR_8;

 if (FUNC_6(VAR_7, &VAR_2, 1) == VAR_0) {
  return VAR_0;
 }

 if ((VAR_8 = FUNC_4("PHP_CLI_SERVER_WORKERS"))) {

  FUNC_3(VAR_6, "platform does not support SO_REUSEPORT, cannot create workers\n");
 }

 return VAR_1;
}
