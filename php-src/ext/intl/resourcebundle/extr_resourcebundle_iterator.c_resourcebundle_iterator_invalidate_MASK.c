
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zend_object_iterator ;
struct TYPE_2__ {int * currentkey; int current; } ;
typedef TYPE_1__ ResourceBundle_iterator ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4( zend_object_iterator *VAR_0 )
{
 ResourceBundle_iterator *VAR_1 = (ResourceBundle_iterator *) VAR_0;

 if (!FUNC_1(VAR_1->current)) {
  FUNC_3( &VAR_1->current );
  FUNC_0(&VAR_1->current);
 }
 if (VAR_1->currentkey) {
  FUNC_2( VAR_1->currentkey );
  VAR_1->currentkey = ((void*)0);
 }
}
