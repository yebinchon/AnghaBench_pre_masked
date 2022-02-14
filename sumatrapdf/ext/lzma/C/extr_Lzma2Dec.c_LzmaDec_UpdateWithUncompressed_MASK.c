
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UInt32 ;
struct TYPE_4__ {scalar_t__ dicSize; } ;
struct TYPE_5__ {scalar_t__ dic; scalar_t__ dicPos; scalar_t__ checkDicSize; scalar_t__ processedPos; TYPE_1__ prop; } ;
typedef scalar_t__ SizeT ;
typedef TYPE_2__ CLzmaDec ;
typedef int Byte ;


 int FUNC_0 (scalar_t__,int const*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(CLzmaDec *VAR_0, const Byte *VAR_1, SizeT VAR_2)
{
  FUNC_0(VAR_0->dic + VAR_0->dicPos, VAR_1, VAR_2);
  VAR_0->dicPos += VAR_2;
  if (VAR_0->checkDicSize == 0 && VAR_0->prop.dicSize - VAR_0->processedPos <= VAR_2)
    VAR_0->checkDicSize = VAR_0->prop.dicSize;
  VAR_0->processedPos += (UInt32)VAR_2;
}
