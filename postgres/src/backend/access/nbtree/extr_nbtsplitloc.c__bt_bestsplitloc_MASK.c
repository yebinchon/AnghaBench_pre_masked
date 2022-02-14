
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ newitemoff; TYPE_1__* splits; int is_rightmost; int nsplits; int interval; } ;
struct TYPE_6__ {int newitemonleft; scalar_t__ firstoldonright; } ;
typedef TYPE_1__ SplitPoint ;
typedef scalar_t__ OffsetNumber ;
typedef scalar_t__ FindSplitStrat ;
typedef TYPE_2__ FindSplitData ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static OffsetNumber
FUNC_2(FindSplitData *VAR_3, int VAR_4,
     bool *VAR_5, FindSplitStrat VAR_6)
{
 int VAR_7,
    VAR_8;
 int VAR_9 = FUNC_0(VAR_3->interval, VAR_3->nsplits);
 SplitPoint *VAR_10;

 VAR_7 = VAR_0;
 VAR_8 = 0;
 for (int VAR_11 = VAR_8; VAR_11 < VAR_9; VAR_11++)
 {
  int VAR_12;

  VAR_12 = FUNC_1(VAR_3, VAR_3->splits + VAR_11);

  if (VAR_12 <= VAR_4)
  {
   VAR_7 = VAR_12;
   VAR_8 = VAR_11;
   break;
  }

  if (VAR_12 < VAR_7)
  {
   VAR_7 = VAR_12;
   VAR_8 = VAR_11;
  }
 }

 VAR_10 = &VAR_3->splits[VAR_8];
 if (VAR_6 == VAR_2 && !VAR_3->is_rightmost &&
  !VAR_10->newitemonleft && VAR_10->firstoldonright >= VAR_3->newitemoff &&
  VAR_10->firstoldonright < VAR_3->newitemoff + VAR_1)
 {




  VAR_10 = &VAR_3->splits[0];
 }

 *VAR_5 = VAR_10->newitemonleft;
 return VAR_10->firstoldonright;
}
