
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int used_idx; int called_used_idx; } ;


 int FUNC_0 () ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(void)
{
 bool VAR_2;



 FUNC_1();
 VAR_2 = FUNC_2(FUNC_3(&VAR_1),
    VAR_0.used_idx,
    VAR_0.called_used_idx);

 VAR_0.called_used_idx = VAR_0.used_idx;
 if (VAR_2)
  FUNC_0();
}
