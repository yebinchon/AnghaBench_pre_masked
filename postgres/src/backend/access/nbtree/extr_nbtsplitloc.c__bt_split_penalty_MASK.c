
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ newitemoff; int newitemsz; int rel; int page; int is_leaf; } ;
struct TYPE_9__ {scalar_t__ firstoldonright; int newitemonleft; } ;
typedef TYPE_1__ SplitPoint ;
typedef int ItemIdData ;
typedef int ItemId ;
typedef scalar_t__ IndexTuple ;
typedef TYPE_2__ FindSplitData ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (TYPE_2__*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static inline int
FUNC_7(FindSplitData *VAR_0, SplitPoint *VAR_1)
{
 IndexTuple VAR_2;
 IndexTuple VAR_3;

 if (!VAR_0->is_leaf)
 {
  ItemId VAR_4;

  if (!VAR_1->newitemonleft &&
   VAR_1->firstoldonright == VAR_0->newitemoff)
   return VAR_0->newitemsz;

  VAR_4 = FUNC_3(VAR_0->page, VAR_1->firstoldonright);

  return FUNC_2(FUNC_1(VAR_4)) + sizeof(ItemIdData);
 }

 VAR_2 = FUNC_6(VAR_0, VAR_1);
 VAR_3 = FUNC_5(VAR_0, VAR_1);

 FUNC_0(VAR_2 != VAR_3);
 return FUNC_4(VAR_0->rel, VAR_2, VAR_3);
}
