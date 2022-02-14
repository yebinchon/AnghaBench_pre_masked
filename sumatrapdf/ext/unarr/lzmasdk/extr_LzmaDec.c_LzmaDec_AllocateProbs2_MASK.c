
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_9__ {int numProbs; int * probs; } ;
struct TYPE_8__ {scalar_t__ (* Alloc ) (TYPE_1__*,int) ;} ;
typedef int SRes ;
typedef TYPE_1__ ISzAlloc ;
typedef int CLzmaProps ;
typedef int CLzmaProb ;
typedef TYPE_2__ CLzmaDec ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;
 int FUNC_1 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static SRes FUNC_3(CLzmaDec *VAR_2, const CLzmaProps *VAR_3, ISzAlloc *VAR_4)
{
  UInt32 VAR_5 = FUNC_1(VAR_3);
  if (VAR_2->probs == 0 || VAR_5 != VAR_2->numProbs)
  {
    FUNC_0(VAR_2, VAR_4);
    VAR_2->probs = (CLzmaProb *)VAR_4->Alloc(VAR_4, VAR_5 * sizeof(CLzmaProb));
    VAR_2->numProbs = VAR_5;
    if (VAR_2->probs == 0)
      return VAR_0;
  }
  return VAR_1;
}
