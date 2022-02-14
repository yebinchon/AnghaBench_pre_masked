
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int Units; int Billions; } ;
typedef TYPE_1__ BusLogic_ByteCounter_T ;



__attribute__((used)) static void
FUNC_0(BusLogic_ByteCounter_T *VAR_0,
                              unsigned int VAR_1)
{
  VAR_0->Units += VAR_1;
  if (VAR_0->Units > 999999999)
  {
      VAR_0->Units -= 1000000000;
      VAR_0->Billions++;
  }
}
