
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {int name; scalar_t__ (* auto_global_callback ) (int ) ;scalar_t__ armed; } ;
typedef TYPE_1__ zend_auto_global ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (char*,char*,char*,int,int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(zval *VAR_2) {
 zend_auto_global *VAR_3 = FUNC_3(VAR_2);

 if (VAR_3->armed) {
  if (FUNC_0(VAR_1) & VAR_0) {
   FUNC_4("variableinfo", "unreachable=\"%.*s\"", "Cannot show information about superglobal variable %.*s", (int) FUNC_1(VAR_3->name), FUNC_2(VAR_3->name));
  } else {
   VAR_3->armed = VAR_3->auto_global_callback(VAR_3->name);
  }
 }

 return 0;
}
