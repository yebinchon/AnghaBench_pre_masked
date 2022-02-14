
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * tupdesc; int origTupdesc; scalar_t__ oneCol; } ;
typedef int OffsetNumber ;
typedef int IndexTuple ;
typedef TYPE_1__ GinState ;
typedef int GinNullCategory ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,int ,int ,int*) ;

Datum
FUNC_4(GinState *VAR_2, IndexTuple VAR_3,
     GinNullCategory *VAR_4)
{
 Datum VAR_5;
 bool VAR_6;

 if (VAR_2->oneCol)
 {



  VAR_5 = FUNC_3(VAR_3, VAR_0, VAR_2->origTupdesc,
       &VAR_6);
 }
 else
 {




  OffsetNumber VAR_7 = FUNC_2(VAR_2, VAR_3);

  VAR_5 = FUNC_3(VAR_3, FUNC_1(VAR_0),
       VAR_2->tupdesc[VAR_7 - 1],
       &VAR_6);
 }

 if (VAR_6)
  *VAR_4 = FUNC_0(VAR_3, VAR_2);
 else
  *VAR_4 = VAR_1;

 return VAR_5;
}
