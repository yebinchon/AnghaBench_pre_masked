
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int dsp_; } ;
struct TYPE_4__ {int data; } ;
struct TYPE_5__ {TYPE_1__ s; int index; int tick; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 TYPE_3__* VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int *) ;
 TYPE_2__* VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(void)
{

 while (VAR_7 != VAR_6)
 {
  FUNC_3(VAR_5[VAR_7].tick, VAR_5[VAR_7].index);
  FUNC_1(VAR_5[VAR_7].s.data);
  VAR_7 = (VAR_7 + 1) % VAR_3;
 }
 FUNC_0(VAR_4->dsp_);
}
