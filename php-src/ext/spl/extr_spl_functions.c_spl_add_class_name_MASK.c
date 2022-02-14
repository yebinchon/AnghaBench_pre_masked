
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zval ;
struct TYPE_3__ {int ce_flags; int name; } ;
typedef TYPE_1__ zend_class_entry ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int *) ;
 int * FUNC_3 (int ,int ) ;

void FUNC_4(zval *VAR_0, zend_class_entry *VAR_1, int VAR_2, int VAR_3)
{
 if (!VAR_2 || (VAR_2 > 0 && VAR_1->ce_flags & VAR_3) || (VAR_2 < 0 && !(VAR_1->ce_flags & VAR_3))) {
  zval *VAR_4;

  if ((VAR_4 = FUNC_3(FUNC_1(VAR_0), VAR_1->name)) == ((void*)0)) {
   zval VAR_5;
   FUNC_0(&VAR_5, VAR_1->name);
   FUNC_2(FUNC_1(VAR_0), VAR_1->name, &VAR_5);
  }
 }
}
