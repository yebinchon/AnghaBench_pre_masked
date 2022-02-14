
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_class_entry ;
struct TYPE_6__ {int create_object; } ;
struct TYPE_5__ {int create_object; } ;


 int FUNC_0 (int ,char*,int,int *) ;
 TYPE_1__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 TYPE_1__* FUNC_1 (int *,TYPE_2__*) ;

void FUNC_2( void )
{
 zend_class_entry VAR_2;


 FUNC_0( VAR_2, "IntlException", sizeof( "IntlException" ) - 1, ((void*)0) );
 VAR_0 = FUNC_1( &VAR_2,
  VAR_1 );
 VAR_0->create_object = VAR_1->create_object;
}
