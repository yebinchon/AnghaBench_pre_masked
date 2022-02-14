
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int offnum; int page; int blkno; } ;
struct TYPE_4__ {scalar_t__ tupstate; int nextOffset; scalar_t__ size; } ;
typedef int SpGistState ;
typedef TYPE_1__* SpGistLeafTuple ;
typedef TYPE_2__ SPPageDesc ;
typedef int Relation ;
typedef int ItemIdData ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(Relation VAR_6, SpGistState *VAR_7,
      SPPageDesc *VAR_8, int *VAR_9)
{
 int VAR_10,
    VAR_11 = 0,
    VAR_12 = 0;

 if (FUNC_4(VAR_8->blkno))
 {

  *VAR_9 = VAR_0;
  return VAR_0;
 }

 VAR_10 = VAR_8->offnum;
 while (VAR_10 != VAR_3)
 {
  SpGistLeafTuple VAR_13;

  FUNC_0(VAR_10 >= VAR_2 &&
      VAR_10 <= FUNC_3(VAR_8->page));
  VAR_13 = (SpGistLeafTuple) FUNC_1(VAR_8->page,
             FUNC_2(VAR_8->page, VAR_10));
  if (VAR_13->tupstate == VAR_5)
  {
   VAR_11++;
   VAR_12 += VAR_13->size + sizeof(ItemIdData);
  }
  else if (VAR_13->tupstate == VAR_4)
  {

   FUNC_0(VAR_10 == VAR_8->offnum);
   FUNC_0(VAR_13->nextOffset == VAR_3);

  }
  else
   FUNC_5(VAR_1, "unexpected SPGiST tuple state: %d", VAR_13->tupstate);

  VAR_10 = VAR_13->nextOffset;
 }

 *VAR_9 = VAR_11;

 return VAR_12;
}
