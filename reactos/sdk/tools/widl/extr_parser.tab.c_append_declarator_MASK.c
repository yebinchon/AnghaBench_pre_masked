
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int entry; } ;
typedef TYPE_1__ declarator_t ;
typedef int declarator_list_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;

__attribute__((used)) static declarator_list_t *FUNC_3(declarator_list_t *VAR_0, declarator_t *VAR_1)
{
  if (!VAR_1) return VAR_0;
  if (!VAR_0) {
    VAR_0 = FUNC_2(sizeof(*VAR_0));
    FUNC_1(VAR_0);
  }
  FUNC_0(VAR_0, &VAR_1->entry);
  return VAR_0;
}
