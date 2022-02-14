
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* origTupdesc; int * tupdesc; scalar_t__ oneCol; } ;
struct TYPE_4__ {scalar_t__ natts; } ;
typedef scalar_t__ OffsetNumber ;
typedef int IndexTuple ;
typedef TYPE_2__ GinState ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ,scalar_t__,int ,int*) ;

OffsetNumber
FUNC_3(GinState *VAR_1, IndexTuple VAR_2)
{
 OffsetNumber VAR_3;

 if (VAR_1->oneCol)
 {

  VAR_3 = VAR_0;
 }
 else
 {
  Datum VAR_4;
  bool VAR_5;





  VAR_4 = FUNC_2(VAR_2, VAR_0, VAR_1->tupdesc[0],
       &VAR_5);
  FUNC_0(!VAR_5);

  VAR_3 = FUNC_1(VAR_4);
  FUNC_0(VAR_3 >= VAR_0 && VAR_3 <= VAR_1->origTupdesc->natts);
 }

 return VAR_3;
}
