
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; int info; int func; } ;
typedef TYPE_1__ call_single_data_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,TYPE_1__*,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;

int FUNC_6(int VAR_1, call_single_data_t *VAR_2)
{
 int VAR_3 = 0;

 FUNC_3();


 if (FUNC_0(VAR_2->flags & VAR_0))
  FUNC_1(VAR_2);

 VAR_2->flags = VAR_0;
 FUNC_5();

 VAR_3 = FUNC_2(VAR_1, VAR_2, VAR_2->func, VAR_2->info);
 FUNC_4();

 return VAR_3;
}
