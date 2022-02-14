
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int16 ;
struct TYPE_5__ {scalar_t__ newitemoff; scalar_t__ leftspace; int rightspace; int olddataitemstotal; size_t nsplits; size_t maxsplits; TYPE_1__* splits; int minfirstrightsz; scalar_t__ is_leaf; scalar_t__ newitemsz; } ;
struct TYPE_4__ {int newitemonleft; scalar_t__ firstoldonright; scalar_t__ rightfree; scalar_t__ leftfree; scalar_t__ curdelta; } ;
typedef scalar_t__ Size ;
typedef scalar_t__ OffsetNumber ;
typedef int ItemPointerData ;
typedef int ItemIdData ;
typedef int IndexTupleData ;
typedef TYPE_2__ FindSplitData ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_3(FindSplitData *VAR_0,
    OffsetNumber VAR_1,
    bool VAR_2,
    int VAR_3,
    Size VAR_4)
{
 int16 VAR_5,
    VAR_6;
 Size VAR_7;
 bool VAR_8;


 VAR_8 = (VAR_1 == VAR_0->newitemoff
        && !VAR_2);

 if (VAR_8)
  VAR_7 = VAR_0->newitemsz;
 else
  VAR_7 = VAR_4;


 VAR_5 = VAR_0->leftspace - VAR_3;
 VAR_6 = VAR_0->rightspace -
  (VAR_0->olddataitemstotal - VAR_3);
 if (VAR_0->is_leaf)
  VAR_5 -= (int16) (VAR_7 +
        FUNC_1(sizeof(ItemPointerData)));
 else
  VAR_5 -= (int16) VAR_7;


 if (VAR_2)
  VAR_5 -= (int16) VAR_0->newitemsz;
 else
  VAR_6 -= (int16) VAR_0->newitemsz;





 if (!VAR_0->is_leaf)
  VAR_6 += (int16) VAR_7 -
   (int16) (FUNC_1(sizeof(IndexTupleData)) + sizeof(ItemIdData));


 if (VAR_5 >= 0 && VAR_6 >= 0)
 {
  FUNC_0(VAR_0->nsplits < VAR_0->maxsplits);


  VAR_0->minfirstrightsz = FUNC_2(VAR_0->minfirstrightsz, VAR_7);

  VAR_0->splits[VAR_0->nsplits].curdelta = 0;
  VAR_0->splits[VAR_0->nsplits].leftfree = VAR_5;
  VAR_0->splits[VAR_0->nsplits].rightfree = VAR_6;
  VAR_0->splits[VAR_0->nsplits].firstoldonright = VAR_1;
  VAR_0->splits[VAR_0->nsplits].newitemonleft = VAR_2;
  VAR_0->nsplits++;
 }
}
