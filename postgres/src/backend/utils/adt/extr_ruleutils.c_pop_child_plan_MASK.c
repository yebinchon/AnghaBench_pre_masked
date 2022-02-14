
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * ancestors; } ;
typedef TYPE_1__ deparse_namespace ;
typedef int List ;


 int * FUNC_0 (int *) ;

__attribute__((used)) static void
FUNC_1(deparse_namespace *VAR_0, deparse_namespace *VAR_1)
{
 List *VAR_2;


 VAR_2 = FUNC_0(VAR_0->ancestors);


 *VAR_0 = *VAR_1;


 VAR_0->ancestors = VAR_2;
}
