
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int const* (* GetPointerToCurrentPos ) (int ) ;} ;
struct TYPE_4__ {int const* additionalOffset; int matchFinderObj; TYPE_1__ matchFinder; } ;
typedef scalar_t__ CLzmaEncHandle ;
typedef TYPE_2__ CLzmaEnc ;
typedef int Byte ;


 int const* FUNC_0 (int ) ;

const Byte *FUNC_1(CLzmaEncHandle VAR_0)
{
  const CLzmaEnc *VAR_1 = (CLzmaEnc *)VAR_0;
  return VAR_1->matchFinder.GetPointerToCurrentPos(VAR_1->matchFinderObj) - VAR_1->additionalOffset;
}
