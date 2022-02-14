
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int avail_idx; int kicked_avail_idx; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(void)
{
 bool VAR_2;



 FUNC_1();
 VAR_2 = FUNC_3(FUNC_2(&VAR_1),
    VAR_0.avail_idx,
    VAR_0.kicked_avail_idx);

 VAR_0.kicked_avail_idx = VAR_0.avail_idx;
 if (VAR_2)
  FUNC_0();
}
