
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dwMask; int wEffects; } ;
struct TYPE_7__ {int nFlags; TYPE_1__ fmt; scalar_t__ pCell; } ;
struct TYPE_8__ {TYPE_2__ para; } ;
struct TYPE_9__ {TYPE_3__ member; } ;
typedef TYPE_4__ ME_DisplayItem ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_0(ME_DisplayItem *VAR_7)
{
  VAR_7->member.para.fmt.dwMask |= VAR_5|VAR_6;
  if (VAR_7->member.para.pCell) {
    VAR_7->member.para.nFlags |= VAR_0;
  } else {
    VAR_7->member.para.nFlags &= ~VAR_0;
  }
  if (VAR_7->member.para.nFlags & VAR_1) {
    VAR_7->member.para.fmt.wEffects |= VAR_4;
  } else {
    VAR_7->member.para.fmt.wEffects &= ~VAR_4;
  }
  if (VAR_7->member.para.nFlags & (VAR_2|VAR_0|VAR_1))
    VAR_7->member.para.fmt.wEffects |= VAR_3;
  else
    VAR_7->member.para.fmt.wEffects &= ~VAR_3;
}
