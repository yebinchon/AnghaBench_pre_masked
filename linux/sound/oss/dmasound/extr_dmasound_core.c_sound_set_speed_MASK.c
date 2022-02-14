
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int speed; } ;
struct TYPE_7__ {int speed; } ;
struct TYPE_5__ {int max_dsp_speed; } ;
struct TYPE_8__ {scalar_t__ minDev; TYPE_2__ soft; TYPE_3__ dsp; TYPE_1__ mach; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2)
{
 if (VAR_2 < 0)
  return VAR_1.soft.speed;






 if (VAR_1.mach.max_dsp_speed &&
    (VAR_2 > VAR_1.mach.max_dsp_speed))
  VAR_2 = VAR_1.mach.max_dsp_speed ;

 VAR_1.soft.speed = VAR_2;

 if (VAR_1.minDev == VAR_0)
  VAR_1.dsp.speed = VAR_1.soft.speed;

 return VAR_1.soft.speed;
}
