
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_4__ {int zend; scalar_t__ child; scalar_t__ me; } ;
typedef TYPE_1__ ResourceBundle_object ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5( zend_object *VAR_0 )
{
 ResourceBundle_object *VAR_1 = FUNC_2(VAR_0);


 FUNC_1( FUNC_0(VAR_1) );

 if (VAR_1->me) {
  FUNC_3( VAR_1->me );
 }
 if (VAR_1->child) {
  FUNC_3( VAR_1->child );
 }

 FUNC_4( &VAR_1->zend );
}
