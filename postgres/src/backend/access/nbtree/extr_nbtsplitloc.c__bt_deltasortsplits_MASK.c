
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef double int16 ;
struct TYPE_6__ {int nsplits; TYPE_1__* splits; } ;
struct TYPE_5__ {double leftfree; double rightfree; double curdelta; } ;
typedef TYPE_1__ SplitPoint ;
typedef TYPE_2__ FindSplitData ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int,int ) ;

__attribute__((used)) static void
FUNC_1(FindSplitData *VAR_1, double VAR_2,
     bool VAR_3)
{
 for (int VAR_4 = 0; VAR_4 < VAR_1->nsplits; VAR_4++)
 {
  SplitPoint *VAR_5 = VAR_1->splits + VAR_4;
  int16 VAR_6;

  if (VAR_3)
   VAR_6 = VAR_2 * VAR_5->leftfree -
    (1.0 - VAR_2) * VAR_5->rightfree;
  else
   VAR_6 = VAR_5->leftfree - VAR_5->rightfree;

  if (VAR_6 < 0)
   VAR_6 = -VAR_6;


  VAR_5->curdelta = VAR_6;
 }

 FUNC_0(VAR_1->splits, VAR_1->nsplits, sizeof(SplitPoint), VAR_0);
}
