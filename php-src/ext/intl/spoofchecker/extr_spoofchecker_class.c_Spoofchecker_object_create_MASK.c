
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * handlers; } ;
typedef TYPE_1__ zend_object ;
typedef int zend_class_entry ;
struct TYPE_9__ {TYPE_1__ zo; } ;
typedef TYPE_2__ Spoofchecker_object ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *) ;
 TYPE_2__* FUNC_3 (int,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;

zend_object *FUNC_5(zend_class_entry *VAR_1)
{
 Spoofchecker_object* VAR_2;

 VAR_2 = FUNC_3(sizeof(Spoofchecker_object), VAR_1);
 FUNC_1(FUNC_0(VAR_2));
 FUNC_4(&VAR_2->zo, VAR_1);
 FUNC_2(&VAR_2->zo, VAR_1);

 VAR_2->zo.handlers = &VAR_0;

 return &VAR_2->zo;
}
