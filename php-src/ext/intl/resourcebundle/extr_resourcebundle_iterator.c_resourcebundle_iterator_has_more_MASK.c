
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zend_object_iterator ;
struct TYPE_2__ {scalar_t__ i; scalar_t__ length; } ;
typedef TYPE_1__ ResourceBundle_iterator ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0( zend_object_iterator *VAR_2 )
{
 ResourceBundle_iterator *VAR_3 = (ResourceBundle_iterator *) VAR_2;
 return (VAR_3->i < VAR_3->length) ? VAR_1 : VAR_0;
}
