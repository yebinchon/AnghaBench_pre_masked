
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UInt32 ;
struct TYPE_4__ {scalar_t__* counters; int p; } ;
typedef int CRangeEnc ;
typedef TYPE_1__ CLenPriceEnc ;
typedef scalar_t__ Bool ;


 int FUNC_0 (int *,int *,size_t,size_t) ;
 int FUNC_1 (TYPE_1__*,size_t,size_t*) ;

__attribute__((used)) static void FUNC_2(CLenPriceEnc *VAR_0, CRangeEnc *VAR_1, UInt32 VAR_2, UInt32 VAR_3, Bool VAR_4, UInt32 *VAR_5)
{
  FUNC_0(&VAR_0->p, VAR_1, VAR_2, VAR_3);
  if (VAR_4)
    if (--VAR_0->counters[VAR_3] == 0)
      FUNC_1(VAR_0, VAR_3, VAR_5);
}
