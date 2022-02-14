
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ctes; int * rtable_names; int * rtable; } ;
typedef TYPE_1__ deparse_namespace ;
typedef int List ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;

List *
FUNC_3(List *VAR_1, List *VAR_2)
{
 deparse_namespace *VAR_3;

 VAR_3 = (deparse_namespace *) FUNC_1(sizeof(deparse_namespace));


 VAR_3->rtable = VAR_1;
 VAR_3->rtable_names = VAR_2;
 VAR_3->ctes = VAR_0;






 FUNC_2(VAR_3);


 return FUNC_0(VAR_3);
}
