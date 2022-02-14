
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UInt32 ;
struct TYPE_3__ {scalar_t__ alignPriceCount; int ProbPrices; int posAlignEncoder; int * alignPrices; } ;
typedef TYPE_1__ CLzmaEnc ;


 int FUNC_0 (int ,int ,size_t,int ) ;
 size_t VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(CLzmaEnc *VAR_2)
{
  UInt32 VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
    VAR_2->alignPrices[VAR_3] = FUNC_0(VAR_2->posAlignEncoder, VAR_1, VAR_3, VAR_2->ProbPrices);
  VAR_2->alignPriceCount = 0;
}
