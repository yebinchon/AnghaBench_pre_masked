
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int stereo; } ;
struct TYPE_4__ {int stereo; } ;
struct TYPE_6__ {scalar_t__ minDev; TYPE_2__ dsp; TYPE_1__ soft; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__ VAR_1 ;

__attribute__((used)) static int FUNC_0(int VAR_2)
{
 if (VAR_2 < 0)
  return VAR_1.soft.stereo;

 VAR_2 = !!VAR_2;

 VAR_1.soft.stereo = VAR_2;
 if (VAR_1.minDev == VAR_0)
  VAR_1.dsp.stereo = VAR_2;

 return VAR_2;
}
