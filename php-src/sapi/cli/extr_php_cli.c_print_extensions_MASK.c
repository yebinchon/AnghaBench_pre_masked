
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * dtor; } ;
typedef TYPE_1__ zend_llist ;
typedef int llist_apply_func_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(void)
{
 zend_llist VAR_3;

 FUNC_1(&VAR_3, &VAR_2);
 VAR_3.dtor = ((void*)0);
 FUNC_3(&VAR_3, VAR_0);
 FUNC_0(&VAR_3, (llist_apply_func_t) VAR_1);
 FUNC_2(&VAR_3);
}
