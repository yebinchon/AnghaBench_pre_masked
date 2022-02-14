
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * handlers; } ;
typedef TYPE_1__ zend_object ;
typedef int zend_class_entry ;
struct TYPE_8__ {TYPE_1__ std; int * postfix; int * prefix; } ;
typedef TYPE_2__ spl_recursive_it_object ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (int,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static zend_object *FUNC_4(zend_class_entry *VAR_1, int VAR_2)
{
 spl_recursive_it_object *VAR_3;

 VAR_3 = FUNC_2(sizeof(spl_recursive_it_object), VAR_1);

 if (VAR_2) {
  FUNC_1(&VAR_3->prefix[0], "", 0);
  FUNC_1(&VAR_3->prefix[1], "| ", 2);
  FUNC_1(&VAR_3->prefix[2], "  ", 2);
  FUNC_1(&VAR_3->prefix[3], "|-", 2);
  FUNC_1(&VAR_3->prefix[4], "\\-", 2);
  FUNC_1(&VAR_3->prefix[5], "", 0);

  FUNC_1(&VAR_3->postfix[0], "", 0);
 }

 FUNC_3(&VAR_3->std, VAR_1);
 FUNC_0(&VAR_3->std, VAR_1);

 VAR_3->std.handlers = &VAR_0;
 return &VAR_3->std;
}
