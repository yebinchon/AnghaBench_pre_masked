
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int iCountdown; int nRepeat; int enable; scalar_t__ isBenignMode; scalar_t__ nOkAfter; scalar_t__ nOkBefore; scalar_t__ nFail; scalar_t__ nBenign; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0(int VAR_1, int VAR_2){
  VAR_0.iCountdown = VAR_1;
  VAR_0.nRepeat = VAR_2;
  VAR_0.nBenign = 0;
  VAR_0.nFail = 0;
  VAR_0.nOkBefore = 0;
  VAR_0.nOkAfter = 0;
  VAR_0.enable = VAR_1>=0;
  VAR_0.isBenignMode = 0;
}
