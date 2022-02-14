
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int data; } ;
struct TYPE_4__ {TYPE_1__ s; int index; int tick; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int FUNC_5 (int ,int ) ;
 int VAR_6 ;

void
FUNC_6(void)
{





 while (VAR_5 != VAR_4)
 {
  FUNC_5(VAR_3[VAR_5].tick, VAR_3[VAR_5].index);
  FUNC_4(VAR_3[VAR_5].s.data);
  VAR_5 = (VAR_5 + 1) % VAR_0;
 }
 FUNC_1(VAR_2, 0);

 FUNC_0(VAR_2);
 FUNC_2(VAR_1);



}
