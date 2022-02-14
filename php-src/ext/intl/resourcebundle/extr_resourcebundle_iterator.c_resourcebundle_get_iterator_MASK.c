
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int zval ;
typedef int zend_object_iterator ;
typedef int zend_class_entry ;
struct TYPE_8__ {int * funcs; int data; } ;
struct TYPE_7__ {int is_table; scalar_t__ i; int * currentkey; int current; int length; TYPE_1__* subject; TYPE_3__ intern; } ;
struct TYPE_6__ {int me; } ;
typedef TYPE_1__ ResourceBundle_object ;
typedef TYPE_2__ ResourceBundle_iterator ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int) ;
 int FUNC_6 (int ,char*) ;
 int VAR_2 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (TYPE_3__*) ;

zend_object_iterator *FUNC_10( zend_class_entry *VAR_3, zval *VAR_4, int VAR_5 )
{
 ResourceBundle_object *VAR_6 = FUNC_3(VAR_4 );
 ResourceBundle_iterator *VAR_7 = FUNC_5( sizeof( ResourceBundle_iterator ) );

 if (VAR_5) {
      FUNC_6( VAR_0, "ResourceBundle does not support writable iterators" );
 }

 FUNC_9(&VAR_7->intern);
 FUNC_2(VAR_4);
 FUNC_0(&VAR_7->intern.data, FUNC_4(VAR_4));
 VAR_7->intern.funcs = &VAR_2;

 VAR_7->subject = VAR_6;




 VAR_7->is_table = (FUNC_8( VAR_6->me ) == VAR_1);
 VAR_7->length = FUNC_7( VAR_6->me );

 FUNC_1(&VAR_7->current);
 VAR_7->currentkey = ((void*)0);
 VAR_7->i = 0;

 return (zend_object_iterator *) VAR_7;
}
