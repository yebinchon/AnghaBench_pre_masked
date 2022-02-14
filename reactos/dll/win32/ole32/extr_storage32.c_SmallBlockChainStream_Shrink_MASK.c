
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ ULONG ;
struct TYPE_15__ {scalar_t__ LowPart; } ;
struct TYPE_16__ {TYPE_1__ u; } ;
typedef TYPE_2__ ULARGE_INTEGER ;
struct TYPE_19__ {scalar_t__ smallBlockSize; int firstFreeSmallBlock; } ;
struct TYPE_18__ {scalar_t__ startingBlock; } ;
struct TYPE_17__ {TYPE_5__* parentStorage; int ownerDirEntry; } ;
typedef TYPE_3__ SmallBlockChainStream ;
typedef TYPE_4__ DirEntry ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,scalar_t__,scalar_t__*) ;
 int FUNC_4 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_5 (TYPE_5__*,int ,TYPE_4__*) ;
 int FUNC_6 (TYPE_5__*,int ,TYPE_4__*) ;
 int VAR_2 ;
 int FUNC_7 (int ,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_8(
  SmallBlockChainStream* VAR_3,
  ULARGE_INTEGER VAR_4)
{
  ULONG VAR_5, VAR_6;
  ULONG VAR_7;
  ULONG VAR_8 = 0;

  VAR_7 = VAR_4.u.LowPart / VAR_3->parentStorage->smallBlockSize;

  if ((VAR_4.u.LowPart % VAR_3->parentStorage->smallBlockSize) != 0)
    VAR_7++;

  VAR_5 = FUNC_2(VAR_3);




  while (VAR_8 < VAR_7)
  {
    if(FUNC_0(FUNC_3(VAR_3, VAR_5,
       &VAR_5)))
      return VAR_1;
    VAR_8++;
  }





  if (VAR_8 == 0)
  {
    DirEntry VAR_9;

    FUNC_5(VAR_3->parentStorage,
        VAR_3->ownerDirEntry,
        &VAR_9);

    VAR_9.startingBlock = VAR_0;

    FUNC_6(VAR_3->parentStorage,
         VAR_3->ownerDirEntry,
         &VAR_9);




    VAR_6 = VAR_5;
  }
  else
  {

    if(FUNC_0(FUNC_3(VAR_3, VAR_5,
       &VAR_6)))
      return VAR_1;


    FUNC_4(
      VAR_3,
      VAR_5,
      VAR_0);
  }




  while (VAR_6 != VAR_0)
  {
    if(FUNC_0(FUNC_3(VAR_3, VAR_6,
       &VAR_5)))
      return VAR_1;
    FUNC_1(VAR_3, VAR_6);
    VAR_3->parentStorage->firstFreeSmallBlock = FUNC_7(VAR_3->parentStorage->firstFreeSmallBlock, VAR_6);
    VAR_6 = VAR_5;
  }

  return VAR_2;
}
