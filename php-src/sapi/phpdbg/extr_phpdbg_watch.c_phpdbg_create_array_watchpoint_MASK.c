
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int zend_string ;
struct TYPE_6__ {struct TYPE_6__* parent; int * str; int flags; struct TYPE_6__* child; } ;
typedef TYPE_1__ phpdbg_watch_element ;
typedef int Bucket ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int,int) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int * FUNC_7 (int ,char*,int,int ) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(zval *VAR_6, phpdbg_watch_element *VAR_7) {
 phpdbg_watch_element *VAR_8;
 zend_string *VAR_9;
 zval *VAR_10 = VAR_6;

 FUNC_2(VAR_6);
 if (FUNC_3(VAR_6) != VAR_1 && FUNC_3(VAR_6) != VAR_2) {
  return VAR_0;
 }

 VAR_8 = FUNC_4(1, sizeof(phpdbg_watch_element));

 VAR_9 = FUNC_7(0, "%.*s[]", (int) FUNC_0(VAR_7->str), FUNC_1(VAR_7->str));
 FUNC_9(VAR_7->str);
 VAR_7->str = VAR_9;
 VAR_7->flags = VAR_3;
 FUNC_5((Bucket *) VAR_10, VAR_7);
 VAR_7->child = VAR_8;

 VAR_8->flags = VAR_4;
 VAR_8->str = FUNC_8(VAR_9);
 VAR_8->parent = VAR_7;
 FUNC_6(VAR_6, VAR_8);
 return VAR_5;
}
