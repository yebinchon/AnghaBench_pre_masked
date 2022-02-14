
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UInt32 ;
struct TYPE_9__ {int historySize; int* hashBuf; int* btBuf; int btSync; int hashSync; int * MatchFinder; } ;
struct TYPE_8__ {scalar_t__ (* Alloc ) (TYPE_1__*,int) ;} ;
typedef int SRes ;
typedef TYPE_1__ ISzAlloc ;
typedef TYPE_2__ CMatchFinderMt ;
typedef int CMatchFinder ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int,int,int,TYPE_1__*) ;
 int FUNC_1 (int *,int ,TYPE_2__*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_3 (TYPE_1__*,int) ;

SRes FUNC_4(CMatchFinderMt *VAR_11, UInt32 VAR_12, UInt32 VAR_13,
    UInt32 VAR_14, UInt32 VAR_15, ISzAlloc *VAR_16)
{
  CMatchFinder *VAR_17 = VAR_11->MatchFinder;
  VAR_11->historySize = VAR_12;
  if (VAR_7 <= VAR_14 * 4)
    return VAR_3;
  if (VAR_11->hashBuf == 0)
  {
    VAR_11->hashBuf = (UInt32 *)VAR_16->Alloc(VAR_16, (VAR_6 + VAR_5) * sizeof(UInt32));
    if (VAR_11->hashBuf == 0)
      return VAR_2;
    VAR_11->btBuf = VAR_11->hashBuf + VAR_6;
  }
  VAR_13 += (VAR_6 + VAR_5);
  VAR_15 += VAR_9;
  if (!FUNC_0(VAR_17, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16))
    return VAR_2;

  FUNC_2(FUNC_1(&VAR_11->hashSync, VAR_1, VAR_11, VAR_10));
  FUNC_2(FUNC_1(&VAR_11->btSync, VAR_0, VAR_11, VAR_8));
  return VAR_4;
}
