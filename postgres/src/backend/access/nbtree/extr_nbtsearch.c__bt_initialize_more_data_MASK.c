
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int moreLeft; int moreRight; } ;
struct TYPE_5__ {int markItemIndex; scalar_t__ numKilled; TYPE_1__ currPos; } ;
typedef int ScanDirection ;
typedef TYPE_2__* BTScanOpaque ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static inline void
FUNC_1(BTScanOpaque VAR_0, ScanDirection VAR_1)
{

 if (FUNC_0(VAR_1))
 {
  VAR_0->currPos.moreLeft = 0;
  VAR_0->currPos.moreRight = 1;
 }
 else
 {
  VAR_0->currPos.moreLeft = 1;
  VAR_0->currPos.moreRight = 0;
 }
 VAR_0->numKilled = 0;
 VAR_0->markItemIndex = -1;
}
