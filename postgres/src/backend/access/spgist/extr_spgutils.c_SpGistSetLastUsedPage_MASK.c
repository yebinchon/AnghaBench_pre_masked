
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ blkno; int freeSpace; } ;
typedef TYPE_1__ SpGistLastUsedPage ;
typedef int SpGistCache ;
typedef int Relation ;
typedef int Page ;
typedef int Buffer ;
typedef scalar_t__ BlockNumber ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (int *,int) ;
 scalar_t__ VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int * FUNC_8 (int ) ;

void
FUNC_9(Relation VAR_3, Buffer VAR_4)
{
 SpGistCache *VAR_5 = FUNC_8(VAR_3);
 SpGistLastUsedPage *VAR_6;
 int VAR_7;
 Page VAR_8 = FUNC_1(VAR_4);
 BlockNumber VAR_9 = FUNC_0(VAR_4);
 int VAR_10;


 if (FUNC_5(VAR_9))
  return;

 if (FUNC_6(VAR_8))
  VAR_10 = VAR_0;
 else
  VAR_10 = FUNC_2(VAR_9);
 if (FUNC_7(VAR_8))
  VAR_10 |= VAR_1;

 VAR_6 = FUNC_3(VAR_5, VAR_10);

 VAR_7 = FUNC_4(VAR_8);
 if (VAR_6->blkno == VAR_2 || VAR_6->blkno == VAR_9 ||
  VAR_6->freeSpace < VAR_7)
 {
  VAR_6->blkno = VAR_9;
  VAR_6->freeSpace = VAR_7;
 }
}
