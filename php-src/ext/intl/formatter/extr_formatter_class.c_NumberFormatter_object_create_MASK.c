
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * handlers; } ;
typedef TYPE_1__ zend_object ;
typedef int zend_class_entry ;
struct TYPE_8__ {TYPE_1__ zo; int nf_data; } ;
typedef TYPE_2__ NumberFormatter_object ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 TYPE_2__* FUNC_2 (int,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

zend_object *FUNC_4(zend_class_entry *VAR_1)
{
 NumberFormatter_object* VAR_2;

 VAR_2 = FUNC_2(sizeof(NumberFormatter_object), VAR_1);
 FUNC_0( &VAR_2->nf_data );
 FUNC_3( &VAR_2->zo, VAR_1 );
 FUNC_1(&VAR_2->zo, VAR_1);

 VAR_2->zo.handlers = &VAR_0;

 return &VAR_2->zo;
}
