
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int leafTupdesc; } ;
typedef int Relation ;
typedef int Page ;
typedef scalar_t__ OffsetNumber ;
typedef int IndexTuple ;
typedef TYPE_1__ GISTSTATE ;
typedef int GISTENTRY ;
typedef int Datum ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,int ,int ,int *,scalar_t__,int *,int*) ;
 int FUNC_8 (TYPE_1__*,int,int *,int ,int ,int ,scalar_t__,int,int) ;
 float FUNC_9 (TYPE_1__*,int,int *,int,int *,int) ;
 int FUNC_10 (int ,int,int ,int*) ;
 int FUNC_11 () ;

OffsetNumber
FUNC_12(Relation VAR_3, Page VAR_4, IndexTuple VAR_5,
     GISTSTATE *VAR_6)
{
 OffsetNumber VAR_7;
 OffsetNumber VAR_8;
 OffsetNumber VAR_9;
 float VAR_10[VAR_1];
 GISTENTRY VAR_11,
    VAR_12[VAR_1];
 bool VAR_13[VAR_1];
 int VAR_14;

 FUNC_0(!FUNC_1(VAR_4));

 FUNC_7(VAR_6, VAR_3,
       VAR_5, ((void*)0), (OffsetNumber) 0,
       VAR_12, VAR_13);


 VAR_7 = VAR_0;
 VAR_10[0] = -1;
 VAR_14 = -1;




 VAR_8 = FUNC_6(VAR_4);
 FUNC_0(VAR_8 >= VAR_0);

 for (VAR_9 = VAR_0; VAR_9 <= VAR_8; VAR_9 = FUNC_3(VAR_9))
 {
  IndexTuple VAR_15 = (IndexTuple) FUNC_4(VAR_4, FUNC_5(VAR_4, VAR_9));
  bool VAR_16;
  int VAR_17;

  VAR_16 = 1;


  for (VAR_17 = 0; VAR_17 < FUNC_2(VAR_3); VAR_17++)
  {
   Datum VAR_18;
   float VAR_19;
   bool VAR_20;


   VAR_18 = FUNC_10(VAR_15, VAR_17 + 1, VAR_6->leafTupdesc,
          &VAR_20);
   FUNC_8(VAR_6, VAR_17, &VAR_11, VAR_18, VAR_3, VAR_4, VAR_9,
         0, VAR_20);
   VAR_19 = FUNC_9(VAR_6, VAR_17, &VAR_11, VAR_20,
        &VAR_12[VAR_17], VAR_13[VAR_17]);
   if (VAR_19 > 0)
    VAR_16 = 0;

   if (VAR_10[VAR_17] < 0 || VAR_19 < VAR_10[VAR_17])
   {
    VAR_7 = VAR_9;
    VAR_10[VAR_17] = VAR_19;

    if (VAR_17 < FUNC_2(VAR_3) - 1)
     VAR_10[VAR_17 + 1] = -1;


    VAR_14 = -1;
   }
   else if (VAR_10[VAR_17] == VAR_19)
   {





   }
   else
   {





    VAR_16 = 0;
    break;
   }
  }





  if (VAR_17 == FUNC_2(VAR_3) && VAR_7 != VAR_9)
  {
   if (VAR_14 == -1)
   {

    VAR_14 = (FUNC_11() <= (VAR_2 / 2)) ? 1 : 0;
   }
   if (VAR_14 == 0)
   {

    VAR_7 = VAR_9;

    VAR_14 = -1;
   }
  }







  if (VAR_16)
  {
   if (VAR_14 == -1)
   {

    VAR_14 = (FUNC_11() <= (VAR_2 / 2)) ? 1 : 0;
   }
   if (VAR_14 == 1)
    break;
  }
 }

 return VAR_7;
}
