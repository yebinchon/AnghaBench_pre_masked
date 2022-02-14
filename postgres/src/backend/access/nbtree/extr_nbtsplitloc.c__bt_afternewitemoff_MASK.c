
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int int64 ;
typedef int int16 ;
struct TYPE_8__ {int t_tid; } ;
struct TYPE_7__ {int newitemoff; int newitemsz; int minfirstrightsz; int olddataitemstotal; TYPE_4__* newitem; int rel; int page; int is_rightmost; scalar_t__ is_leaf; } ;
struct TYPE_6__ {int t_tid; } ;
typedef int OffsetNumber ;
typedef int ItemIdData ;
typedef int ItemId ;
typedef int IndexTupleData ;
typedef TYPE_1__* IndexTuple ;
typedef TYPE_2__ FindSplitData ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int ,TYPE_1__*,TYPE_4__*) ;

__attribute__((used)) static bool
FUNC_8(FindSplitData *VAR_1, OffsetNumber VAR_2,
     int VAR_3, bool *VAR_4)
{
 int16 VAR_5;
 ItemId VAR_6;
 IndexTuple VAR_7;
 int VAR_8;

 FUNC_0(VAR_1->is_leaf && !VAR_1->is_rightmost);

 VAR_5 = FUNC_1(VAR_1->rel);


 if (VAR_5 == 1)
  return 0;


 if (VAR_1->newitemoff == VAR_0)
  return 0;
 if (VAR_1->newitemsz != VAR_1->minfirstrightsz)
  return 0;
 if (VAR_1->newitemsz * (VAR_2 - 1) != VAR_1->olddataitemstotal)
  return 0;






 if (VAR_1->newitemsz >
  FUNC_2(sizeof(IndexTupleData) + sizeof(int64) * 2) +
  sizeof(ItemIdData))
  return 0;
 if (VAR_1->newitemoff > VAR_2)
 {
  VAR_6 = FUNC_5(VAR_1->page, VAR_2);
  VAR_7 = (IndexTuple) FUNC_4(VAR_1->page, VAR_6);
  VAR_8 = FUNC_7(VAR_1->rel, VAR_7, VAR_1->newitem);

  if (VAR_8 > 1 && VAR_8 <= VAR_5)
  {
   *VAR_4 = 1;
   return 1;
  }

  return 0;
 }
 VAR_6 = FUNC_5(VAR_1->page, FUNC_3(VAR_1->newitemoff));
 VAR_7 = (IndexTuple) FUNC_4(VAR_1->page, VAR_6);

 if (!FUNC_6(&VAR_7->t_tid, &VAR_1->newitem->t_tid))
  return 0;

 VAR_8 = FUNC_7(VAR_1->rel, VAR_7, VAR_1->newitem);

 if (VAR_8 > 1 && VAR_8 <= VAR_5)
 {
  double VAR_9 = (double) VAR_1->newitemoff / ((double) VAR_2 + 1);
  double VAR_10 = (double) VAR_3 / 100.0;






  *VAR_4 = VAR_9 > VAR_10;

  return 1;
 }

 return 0;
}
