
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int * allProcs; } ;
struct TYPE_4__ {int valid; size_t pgprocno; } ;
typedef TYPE_1__* GlobalTransaction ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 TYPE_2__* VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_4(GlobalTransaction VAR_3, bool VAR_4)
{

 if (!VAR_4)
  FUNC_1(VAR_2, VAR_0);
 FUNC_0(!VAR_3->valid);
 VAR_3->valid = 1;
 if (!VAR_4)
  FUNC_2(VAR_2);





 FUNC_3(&VAR_1->allProcs[VAR_3->pgprocno]);
}
