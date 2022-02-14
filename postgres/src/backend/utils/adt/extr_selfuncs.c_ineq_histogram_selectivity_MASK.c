
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int vartype; int statsTuple; } ;
typedef TYPE_1__ VariableStatData ;
struct TYPE_14__ {int nvalues; int * values; int stacoll; scalar_t__ nnumbers; int staop; } ;
struct TYPE_13__ {int fn_oid; } ;
typedef int PlannerInfo ;
typedef int Oid ;
typedef TYPE_2__ FmgrInfo ;
typedef int Datum ;
typedef TYPE_3__ AttStatsSlot ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (double) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ,int ,int ,double*,int ,int ,int ,double*,double*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int *,TYPE_1__*,int ,int *,int *) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int ,int ,int ,int ) ;
 double FUNC_8 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_9 (double) ;
 scalar_t__ FUNC_10 (TYPE_1__*,int ) ;

double
FUNC_11(PlannerInfo *VAR_5,
         VariableStatData *VAR_6,
         FmgrInfo *VAR_7, bool VAR_8, bool VAR_9,
         Datum VAR_10, Oid VAR_11)
{
 double VAR_12;
 AttStatsSlot VAR_13;

 VAR_12 = -1.0;
 if (FUNC_3(VAR_6->statsTuple) &&
  FUNC_10(VAR_6, VAR_7->fn_oid) &&
  FUNC_7(&VAR_13, VAR_6->statsTuple,
       VAR_3, VAR_2,
       VAR_1))
 {
  if (VAR_13.nvalues > 1)
  {
   double VAR_14;
   int VAR_15 = 0;
   int VAR_16 = VAR_13.nvalues;
   bool VAR_17 = 0;







   if (VAR_13.nvalues == 2)
    VAR_17 = FUNC_6(VAR_5,
              VAR_6,
              VAR_13.staop,
              &VAR_13.values[0],
              &VAR_13.values[1]);

   while (VAR_15 < VAR_16)
   {
    int VAR_18 = (VAR_15 + VAR_16) / 2;
    bool VAR_19;






    if (VAR_18 == 0 && VAR_13.nvalues > 2)
     VAR_17 = FUNC_6(VAR_5,
               VAR_6,
               VAR_13.staop,
               &VAR_13.values[0],
               ((void*)0));
    else if (VAR_18 == VAR_13.nvalues - 1 && VAR_13.nvalues > 2)
     VAR_17 = FUNC_6(VAR_5,
               VAR_6,
               VAR_13.staop,
               ((void*)0),
               &VAR_13.values[VAR_18]);

    VAR_19 = FUNC_1(FUNC_2(VAR_7,
                VAR_13.stacoll,
                VAR_13.values[VAR_18],
                VAR_10));
    if (VAR_8)
     VAR_19 = !VAR_19;
    if (VAR_19)
     VAR_15 = VAR_18 + 1;
    else
     VAR_16 = VAR_18;
   }

   if (VAR_15 <= 0)
   {
    VAR_14 = 0.0;
   }
   else if (VAR_15 >= VAR_13.nvalues)
   {



    VAR_14 = 1.0;
   }
   else
   {

    int VAR_20 = VAR_15;
    double VAR_21 = 0;
    double VAR_22,
       VAR_23,
       VAR_24;
    double VAR_25;
    if (VAR_20 == 1 || VAR_8 == VAR_9)
    {
     double VAR_26;
     bool VAR_27;
     AttStatsSlot VAR_28;


     VAR_26 = FUNC_8(VAR_6,
                &VAR_27);


     if (FUNC_7(&VAR_28, VAR_6->statsTuple,
           VAR_4, VAR_2,
           VAR_0))
     {
      VAR_26 -= VAR_28.nnumbers;
      FUNC_5(&VAR_28);
     }


     if (VAR_26 > 1)
      VAR_21 = 1.0 / VAR_26;
    }






    if (FUNC_4(VAR_10, VAR_11, VAR_13.stacoll,
           &VAR_22,
           VAR_13.values[VAR_20 - 1], VAR_13.values[VAR_20],
           VAR_6->vartype,
           &VAR_24, &VAR_23))
    {
     if (VAR_23 <= VAR_24)
     {

      VAR_25 = 0.5;
     }
     else if (VAR_22 <= VAR_24)
      VAR_25 = 0.0;
     else if (VAR_22 >= VAR_23)
      VAR_25 = 1.0;
     else
     {
      VAR_25 = (VAR_22 - VAR_24) / (VAR_23 - VAR_24);







      if (FUNC_9(VAR_25) ||
       VAR_25 < 0.0 || VAR_25 > 1.0)
       VAR_25 = 0.5;
     }
    }
    else
    {
     VAR_25 = 0.5;
    }






    VAR_14 = (double) (VAR_20 - 1) + VAR_25;
    VAR_14 /= (double) (VAR_13.nvalues - 1);
    if (VAR_20 == 1)
     VAR_14 += VAR_21 * (1.0 - VAR_25);






    if (VAR_8 == VAR_9)
     VAR_14 -= VAR_21;
   }





   VAR_12 = VAR_8 ? (1.0 - VAR_14) : VAR_14;
   if (VAR_17)
    FUNC_0(VAR_12);
   else
   {
    double VAR_29 = 0.01 / (double) (VAR_13.nvalues - 1);

    if (VAR_12 < VAR_29)
     VAR_12 = VAR_29;
    else if (VAR_12 > 1.0 - VAR_29)
     VAR_12 = 1.0 - VAR_29;
   }
  }

  FUNC_5(&VAR_13);
 }

 return VAR_12;
}
