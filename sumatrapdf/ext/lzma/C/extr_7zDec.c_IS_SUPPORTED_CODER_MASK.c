
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_3__ {int NumInStreams; int NumOutStreams; scalar_t__ MethodID; } ;
typedef TYPE_1__ CSzCoderInfo ;
typedef int Bool ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static Bool FUNC_1(const CSzCoderInfo *VAR_0)
{
  return
      VAR_0->NumInStreams == 1 &&
      VAR_0->NumOutStreams == 1 &&
      VAR_0->MethodID <= (UInt32)0xFFFFFFFF &&
      FUNC_0((UInt32)VAR_0->MethodID);
}
