
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int locking_backend; int valid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_3 ;

void
FUNC_3(void)
{
 if (VAR_2 == ((void*)0))
  return;
 FUNC_0(VAR_3, VAR_1);
 if (!VAR_2->valid)
  FUNC_2(VAR_2);
 else
  VAR_2->locking_backend = VAR_0;
 FUNC_1(VAR_3);

 VAR_2 = ((void*)0);
}
