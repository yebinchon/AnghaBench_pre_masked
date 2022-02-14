
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_10__ {scalar_t__ plan; } ;
struct TYPE_11__ {TYPE_1__ ps; int ss_ScanTupleSlot; } ;
struct TYPE_12__ {int frameOptions; scalar_t__ frameheadpos; scalar_t__ currentpos; scalar_t__ frametailpos; scalar_t__ groupheadpos; scalar_t__ grouptailpos; TYPE_2__ ss; int endOffsetValue; } ;
typedef TYPE_3__ WindowAggState ;
struct TYPE_13__ {scalar_t__ ordNumCols; } ;
typedef TYPE_4__ WindowAgg ;
typedef int TupleTableSlot ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_3__*,int *,int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int
FUNC_6(WindowAggState *VAR_9, int64 VAR_10, TupleTableSlot *VAR_11)
{
 int VAR_12 = VAR_9->frameOptions;

 FUNC_0(VAR_10 >= 0);





 FUNC_3(VAR_9);
 if (VAR_10 < VAR_9->frameheadpos)
  return 0;






 if (VAR_12 & VAR_0)
 {
  if (VAR_12 & VAR_8)
  {

   if (VAR_10 > VAR_9->currentpos)
    return -1;
  }
  else if (VAR_12 & (VAR_7 | VAR_6))
  {

   if (VAR_10 > VAR_9->currentpos &&
    !FUNC_2(VAR_9, VAR_11, VAR_9->ss.ss_ScanTupleSlot))
    return -1;
  }
  else
   FUNC_0(0);
 }
 else if (VAR_12 & VAR_1)
 {
  if (VAR_12 & VAR_8)
  {
   int64 VAR_13 = FUNC_1(VAR_9->endOffsetValue);


   if (VAR_12 & VAR_2)
    VAR_13 = -VAR_13;

   if (VAR_10 > VAR_9->currentpos + VAR_13)
    return -1;
  }
  else if (VAR_12 & (VAR_7 | VAR_6))
  {

   FUNC_4(VAR_9);
   if (VAR_10 >= VAR_9->frametailpos)
    return -1;
  }
  else
   FUNC_0(0);
 }


 if (VAR_12 & VAR_3)
 {
  if (VAR_10 == VAR_9->currentpos)
   return 0;
 }
 else if ((VAR_12 & VAR_4) ||
    ((VAR_12 & VAR_5) &&
     VAR_10 != VAR_9->currentpos))
 {
  WindowAgg *VAR_14 = (WindowAgg *) VAR_9->ss.ps.plan;


  if (VAR_14->ordNumCols == 0)
   return 0;

  if (VAR_10 >= VAR_9->groupheadpos)
  {
   FUNC_5(VAR_9);
   if (VAR_10 < VAR_9->grouptailpos)
    return 0;
  }
 }


 return 1;
}
