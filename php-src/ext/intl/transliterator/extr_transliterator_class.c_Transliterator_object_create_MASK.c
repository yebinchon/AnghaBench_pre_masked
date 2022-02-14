
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
typedef TYPE_2__ Transliterator_object ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (int,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static zend_object *FUNC_4( zend_class_entry *VAR_1 )
{
 Transliterator_object* VAR_2;

 VAR_2 = FUNC_2(sizeof(Transliterator_object), VAR_1);

 FUNC_3( &VAR_2->zo, VAR_1 );
    FUNC_0( &VAR_2->zo, VAR_1 );
 FUNC_1( VAR_2 );

 VAR_2->zo.handlers = &VAR_0;

 return &VAR_2->zo;
}
