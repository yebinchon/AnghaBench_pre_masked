
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_4__ {int (* Skip ) (int ,int) ;} ;
struct TYPE_5__ {int matchFinderObj; TYPE_1__ matchFinder; int additionalOffset; } ;
typedef TYPE_2__ CLzmaEnc ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(CLzmaEnc *VAR_1, UInt32 VAR_2)
{




  if (VAR_2 != 0)
  {
    VAR_1->additionalOffset += VAR_2;
    VAR_1->matchFinder.Skip(VAR_1->matchFinderObj, VAR_2);
  }
}
