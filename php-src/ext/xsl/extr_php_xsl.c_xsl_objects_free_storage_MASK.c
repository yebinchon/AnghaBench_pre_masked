
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zend_object ;
typedef TYPE_1__* xsltStylesheetPtr ;
struct TYPE_6__ {scalar_t__ profiling; int * ptr; scalar_t__ doc; scalar_t__ node_list; scalar_t__ registered_phpfunctions; scalar_t__ parameter; int std; } ;
typedef TYPE_2__ xsl_object ;
struct TYPE_5__ {int * _private; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_2__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;

void FUNC_7(zend_object *VAR_0)
{
 xsl_object *VAR_1 = FUNC_3(VAR_0);

 FUNC_6(&VAR_1->std);

 FUNC_5(VAR_1->parameter);
 FUNC_0(VAR_1->parameter);

 FUNC_5(VAR_1->registered_phpfunctions);
 FUNC_0(VAR_1->registered_phpfunctions);

 if (VAR_1->node_list) {
  FUNC_5(VAR_1->node_list);
  FUNC_0(VAR_1->node_list);
 }

 if (VAR_1->doc) {
  FUNC_2(VAR_1->doc);
  FUNC_1(VAR_1->doc);
 }

 if (VAR_1->ptr) {

  if (((xsltStylesheetPtr) VAR_1->ptr)->_private != ((void*)0)) {
   ((xsltStylesheetPtr) VAR_1->ptr)->_private = ((void*)0);
  }

  FUNC_4((xsltStylesheetPtr) VAR_1->ptr);
  VAR_1->ptr = ((void*)0);
 }
 if (VAR_1->profiling) {
  FUNC_1(VAR_1->profiling);
 }
}
