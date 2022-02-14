
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int zend_object ;
struct TYPE_3__ {int datef_data; scalar_t__ requested_locale; int zo; } ;
typedef TYPE_1__ IntlDateFormatter_object ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4( zend_object *VAR_0 )
{
 IntlDateFormatter_object* VAR_1 = FUNC_2(VAR_0);

 FUNC_3( &VAR_1->zo );

 if (VAR_1->requested_locale) {
  FUNC_1( VAR_1->requested_locale );
 }

 FUNC_0( &VAR_1->datef_data );
}
