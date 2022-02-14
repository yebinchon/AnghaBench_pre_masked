
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zend_uchar ;
struct TYPE_5__ {int last_var; TYPE_1__** vars; } ;
typedef TYPE_2__ zend_op_array ;
struct TYPE_4__ {char* val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int VAR_3 ;

void FUNC_1(const zend_op_array *VAR_4, zend_uchar VAR_5, int VAR_6)
{
 if (VAR_5 == VAR_0 && VAR_6 < VAR_4->last_var) {
  FUNC_0(VAR_3, "CV%d($%s)", VAR_6, VAR_4->vars[VAR_6]->val);
 } else if (VAR_5 == VAR_2) {
  FUNC_0(VAR_3, "V%d", VAR_6);
 } else if ((VAR_5 & (VAR_2|VAR_1)) == VAR_1) {
  FUNC_0(VAR_3, "T%d", VAR_6);
 } else {
  FUNC_0(VAR_3, "X%d", VAR_6);
 }
}
