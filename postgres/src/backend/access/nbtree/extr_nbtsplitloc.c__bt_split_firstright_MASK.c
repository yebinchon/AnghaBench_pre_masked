
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ newitemoff; int page; int newitem; } ;
struct TYPE_5__ {scalar_t__ firstoldonright; int newitemonleft; } ;
typedef TYPE_1__ SplitPoint ;
typedef int ItemId ;
typedef int IndexTuple ;
typedef TYPE_2__ FindSplitData ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static inline IndexTuple
FUNC_2(FindSplitData *VAR_0, SplitPoint *VAR_1)
{
 ItemId VAR_2;

 if (!VAR_1->newitemonleft && VAR_1->firstoldonright == VAR_0->newitemoff)
  return VAR_0->newitem;

 VAR_2 = FUNC_1(VAR_0->page, VAR_1->firstoldonright);
 return (IndexTuple) FUNC_0(VAR_0->page, VAR_2);
}
