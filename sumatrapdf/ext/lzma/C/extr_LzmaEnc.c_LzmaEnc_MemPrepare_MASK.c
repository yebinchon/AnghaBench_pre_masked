
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_4__ {int needInit; } ;
typedef int SizeT ;
typedef int SRes ;
typedef int ISzAlloc ;
typedef scalar_t__ CLzmaEncHandle ;
typedef TYPE_1__ CLzmaEnc ;
typedef int Byte ;


 int FUNC_0 (TYPE_1__*,int ,int *,int *) ;
 int FUNC_1 (TYPE_1__*,int const*,int ) ;

SRes FUNC_2(CLzmaEncHandle VAR_0, const Byte *VAR_1, SizeT VAR_2,
    UInt32 VAR_3, ISzAlloc *VAR_4, ISzAlloc *VAR_5)
{
  CLzmaEnc *VAR_6 = (CLzmaEnc *)VAR_0;
  FUNC_1(VAR_6, VAR_1, VAR_2);
  VAR_6->needInit = 1;

  return FUNC_0(VAR_6, VAR_3, VAR_4, VAR_5);
}
