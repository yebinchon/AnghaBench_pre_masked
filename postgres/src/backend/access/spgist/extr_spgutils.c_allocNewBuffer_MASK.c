
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16 ;
struct TYPE_6__ {TYPE_1__* cachedPage; } ;
struct TYPE_7__ {TYPE_2__ lastUsedPages; } ;
struct TYPE_5__ {int freeSpace; int blkno; } ;
typedef TYPE_3__ SpGistCache ;
typedef int Relation ;
typedef int Buffer ;
typedef int BlockNumber ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 TYPE_3__* FUNC_9 (int ) ;

__attribute__((used)) static Buffer
FUNC_10(Relation VAR_4, int VAR_5)
{
 SpGistCache *VAR_6 = FUNC_9(VAR_4);
 uint16 VAR_7 = 0;

 if (FUNC_3(VAR_5))
  VAR_7 |= VAR_2;
 if (FUNC_4(VAR_5))
  VAR_7 |= VAR_3;

 for (;;)
 {
  Buffer VAR_8;

  VAR_8 = FUNC_7(VAR_4);
  FUNC_6(VAR_8, VAR_7);

  if (VAR_7 & VAR_2)
  {

   return VAR_8;
  }
  else
  {
   BlockNumber VAR_9 = FUNC_0(VAR_8);
   int VAR_10 = FUNC_2(VAR_9);

   if ((VAR_5 & VAR_1) == VAR_10)
   {

    return VAR_8;
   }
   else
   {

    if (VAR_7 & VAR_3)
     VAR_10 |= VAR_0;
    VAR_6->lastUsedPages.cachedPage[VAR_10].blkno = VAR_9;
    VAR_6->lastUsedPages.cachedPage[VAR_10].freeSpace =
     FUNC_5(FUNC_1(VAR_8));
    FUNC_8(VAR_8);
   }
  }
 }
}
