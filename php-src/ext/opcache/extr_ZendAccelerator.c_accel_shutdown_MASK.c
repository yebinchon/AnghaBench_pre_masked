
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int on_modify; } ;
typedef TYPE_1__ zend_ini_entry ;
typedef scalar_t__ zend_bool ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 () ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int VAR_11 ;
 TYPE_1__* FUNC_7 (int ,char*,int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int VAR_12 ;

void FUNC_10(void)
{
 zend_ini_entry *VAR_13;
 zend_bool VAR_14 = 0;





 FUNC_9();

 FUNC_6(&VAR_0);

 if (!FUNC_1(VAR_5) || !VAR_3) {



  return;
 }

 if (FUNC_2(VAR_10)) {
  FUNC_4();
 }

 VAR_14 = VAR_6;

 FUNC_3();





 if (!VAR_14) {

  VAR_9 = VAR_12;
  VAR_12 = VAR_2;
 }

 VAR_11 = VAR_4;

 if ((VAR_13 = FUNC_7(FUNC_0(VAR_7), "include_path", sizeof("include_path")-1)) != ((void*)0)) {
  VAR_13->on_modify = VAR_8;
 }
}
