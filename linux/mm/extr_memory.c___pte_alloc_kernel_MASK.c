
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int pte_t ;
typedef int pmd_t ;
struct TYPE_5__ {int page_table_lock; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int * FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8(pmd_t *VAR_2)
{
 pte_t *VAR_3 = FUNC_3(&VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_5();

 FUNC_6(&VAR_1.page_table_lock);
 if (FUNC_0(FUNC_1(*VAR_2))) {
  FUNC_2(&VAR_1, VAR_2, VAR_3);
  VAR_3 = ((void*)0);
 }
 FUNC_7(&VAR_1.page_table_lock);
 if (VAR_3)
  FUNC_4(&VAR_1, VAR_3);
 return 0;
}
