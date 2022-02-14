
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * handlers; } ;
typedef TYPE_1__ zend_object ;
typedef int zend_class_entry ;
struct TYPE_8__ {TYPE_1__ std; void* registered_phpfunctions; void* parameter; int securityPrefs; } ;
typedef TYPE_2__ xsl_object ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

zend_object *FUNC_4(zend_class_entry *VAR_2)
{
 xsl_object *VAR_3;

 VAR_3 = FUNC_2(sizeof(xsl_object), VAR_2);
 VAR_3->securityPrefs = VAR_0;

 FUNC_3(&VAR_3->std, VAR_2);
 FUNC_0(&VAR_3->std, VAR_2);
 VAR_3->parameter = FUNC_1(0);
 VAR_3->registered_phpfunctions = FUNC_1(0);

 VAR_3->std.handlers = &VAR_1;
 return &VAR_3->std;
}
