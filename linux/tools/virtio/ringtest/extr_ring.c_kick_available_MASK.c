
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int kick_index; } ;
struct TYPE_3__ {int avail_idx; int kicked_avail_idx; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 () ;

void FUNC_3(void)
{
 bool VAR_2;



 FUNC_2();
 VAR_2 = FUNC_1(VAR_0->kick_index,
      VAR_1.avail_idx,
      VAR_1.kicked_avail_idx);

 VAR_1.kicked_avail_idx = VAR_1.avail_idx;
 if (VAR_2)
  FUNC_0();
}
