
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef double float4 ;
typedef TYPE_3__* VacAttrStatsP ;
struct TYPE_11__ {int eqopr; int eqfunc; } ;
struct TYPE_10__ {int stats_valid; double stanullfrac; double stawidth; double stadistinct; double** stanumbers; int* numnumbers; int* numvalues; TYPE_1__* attrtype; int ** stavalues; int attrcollid; int * stacoll; int * staop; int * stakind; int anl_context; scalar_t__ extra_data; TYPE_2__* attr; } ;
struct TYPE_9__ {int attstattarget; } ;
struct TYPE_8__ {int typlen; int typbyval; } ;
typedef TYPE_4__ StdAnalyzeData ;
typedef int MemoryContext ;
typedef int FmgrInfo ;
typedef int Datum ;
typedef int (* AnalyzeAttrFetchFunc ) (TYPE_3__*,int,int*) ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int ,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_8 (int*,int,double,double,int,double) ;
 int FUNC_9 (int ,int ,double) ;
 int FUNC_10 (double) ;
 int FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int,int) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 () ;

__attribute__((used)) static void
FUNC_18(VacAttrStatsP VAR_2,
        AnalyzeAttrFetchFunc VAR_3,
        int VAR_4,
        double VAR_5)
{
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8 = 0;
 int VAR_9 = 0;
 double VAR_10 = 0;
 bool VAR_11 = (!VAR_2->attrtype->typbyval &&
         VAR_2->attrtype->typlen == -1);
 bool VAR_12 = (!VAR_2->attrtype->typbyval &&
          VAR_2->attrtype->typlen < 0);
 FmgrInfo VAR_13;
 typedef struct
 {
  Datum value;
  int count;
 } TrackItem;
 TrackItem *VAR_14;
 int VAR_15,
    VAR_16;
 int VAR_17 = VAR_2->attr->attstattarget;
 StdAnalyzeData *VAR_18 = (StdAnalyzeData *) VAR_2->extra_data;




 VAR_16 = 2 * VAR_17;
 if (VAR_16 < 10)
  VAR_16 = 10;
 VAR_14 = (TrackItem *) FUNC_12(VAR_16 * sizeof(TrackItem));
 VAR_15 = 0;

 FUNC_11(VAR_18->eqfunc, &VAR_13);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
 {
  Datum VAR_19;
  bool VAR_20;
  bool VAR_21;
  int VAR_22,
     VAR_23;

  FUNC_17();

  VAR_19 = VAR_3(VAR_2, VAR_6, &VAR_20);


  if (VAR_20)
  {
   VAR_7++;
   continue;
  }
  VAR_8++;







  if (VAR_11)
  {
   VAR_10 += FUNC_7(FUNC_2(VAR_19));
   if (FUNC_16(VAR_19) > VAR_1)
   {
    VAR_9++;
    continue;
   }
   VAR_19 = FUNC_6(FUNC_5(VAR_19));
  }
  else if (VAR_12)
  {

   VAR_10 += FUNC_13(FUNC_1(VAR_19)) + 1;
  }




  VAR_21 = 0;
  VAR_22 = VAR_15;
  for (VAR_23 = 0; VAR_23 < VAR_15; VAR_23++)
  {
   if (FUNC_0(FUNC_3(&VAR_13,
              VAR_2->attrcollid,
              VAR_19, VAR_14[VAR_23].value)))
   {
    VAR_21 = 1;
    break;
   }
   if (VAR_23 < VAR_22 && VAR_14[VAR_23].count == 1)
    VAR_22 = VAR_23;
  }

  if (VAR_21)
  {

   VAR_14[VAR_23].count++;

   while (VAR_23 > 0 && VAR_14[VAR_23].count > VAR_14[VAR_23 - 1].count)
   {
    FUNC_14(VAR_14[VAR_23].value, VAR_14[VAR_23 - 1].value);
    FUNC_15(VAR_14[VAR_23].count, VAR_14[VAR_23 - 1].count);
    VAR_23--;
   }
  }
  else
  {

   if (VAR_15 < VAR_16)
    VAR_15++;
   for (VAR_23 = VAR_15 - 1; VAR_23 > VAR_22; VAR_23--)
   {
    VAR_14[VAR_23].value = VAR_14[VAR_23 - 1].value;
    VAR_14[VAR_23].count = VAR_14[VAR_23 - 1].count;
   }
   if (VAR_22 < VAR_15)
   {
    VAR_14[VAR_22].value = VAR_19;
    VAR_14[VAR_22].count = 1;
   }
  }
 }


 if (VAR_8 > 0)
 {
  int VAR_24,
     VAR_25;

  VAR_2->stats_valid = 1;

  VAR_2->stanullfrac = (double) VAR_7 / (double) VAR_4;
  if (VAR_12)
   VAR_2->stawidth = VAR_10 / (double) VAR_8;
  else
   VAR_2->stawidth = VAR_2->attrtype->typlen;


  VAR_25 = 0;
  for (VAR_24 = 0; VAR_24 < VAR_15; VAR_24++)
  {
   if (VAR_14[VAR_24].count == 1)
    break;
   VAR_25 += VAR_14[VAR_24].count;
  }

  if (VAR_24 == 0)
  {




   VAR_2->stadistinct = -1.0 * (1.0 - VAR_2->stanullfrac);
  }
  else if (VAR_15 < VAR_16 && VAR_9 == 0 &&
     VAR_24 == VAR_15)
  {
   VAR_2->stadistinct = VAR_15;
  }
  else
  {
   int VAR_26 = VAR_8 - VAR_25;
   int VAR_27 = VAR_26 + VAR_24;
   double VAR_28 = VAR_4 - VAR_7;
   double VAR_29 = VAR_5 * (1.0 - VAR_2->stanullfrac);
   double VAR_30;


   if (VAR_29 > 0)
    VAR_30 = (VAR_28 * VAR_27) / ((VAR_28 - VAR_26) + VAR_26 * VAR_28 / VAR_29);
   else
    VAR_30 = 0;


   if (VAR_30 < VAR_27)
    VAR_30 = VAR_27;
   if (VAR_30 > VAR_29)
    VAR_30 = VAR_29;

   VAR_2->stadistinct = FUNC_10(VAR_30 + 0.5);
  }







  if (VAR_2->stadistinct > 0.1 * VAR_5)
   VAR_2->stadistinct = -(VAR_2->stadistinct / VAR_5);
  if (VAR_15 < VAR_16 && VAR_9 == 0 &&
   VAR_2->stadistinct > 0 &&
   VAR_15 <= VAR_17)
  {

   VAR_17 = VAR_15;
  }
  else
  {
   int *VAR_31;


   if (VAR_17 > VAR_15)
    VAR_17 = VAR_15;

   if (VAR_17 > 0)
   {
    VAR_31 = (int *) FUNC_12(VAR_17 * sizeof(int));
    for (VAR_6 = 0; VAR_6 < VAR_17; VAR_6++)
     VAR_31[VAR_6] = VAR_14[VAR_6].count;

    VAR_17 = FUNC_8(VAR_31, VAR_17,
             VAR_2->stadistinct,
             VAR_2->stanullfrac,
             VAR_4, VAR_5);
   }
  }


  if (VAR_17 > 0)
  {
   MemoryContext VAR_32;
   Datum *VAR_33;
   float4 *VAR_34;


   VAR_32 = FUNC_4(VAR_2->anl_context);
   VAR_33 = (Datum *) FUNC_12(VAR_17 * sizeof(Datum));
   VAR_34 = (float4 *) FUNC_12(VAR_17 * sizeof(float4));
   for (VAR_6 = 0; VAR_6 < VAR_17; VAR_6++)
   {
    VAR_33[VAR_6] = FUNC_9(VAR_14[VAR_6].value,
            VAR_2->attrtype->typbyval,
            VAR_2->attrtype->typlen);
    VAR_34[VAR_6] = (double) VAR_14[VAR_6].count / (double) VAR_4;
   }
   FUNC_4(VAR_32);

   VAR_2->stakind[0] = VAR_0;
   VAR_2->staop[0] = VAR_18->eqopr;
   VAR_2->stacoll[0] = VAR_2->attrcollid;
   VAR_2->stanumbers[0] = VAR_34;
   VAR_2->numnumbers[0] = VAR_17;
   VAR_2->stavalues[0] = VAR_33;
   VAR_2->numvalues[0] = VAR_17;





  }
 }
 else if (VAR_7 > 0)
 {

  VAR_2->stats_valid = 1;
  VAR_2->stanullfrac = 1.0;
  if (VAR_12)
   VAR_2->stawidth = 0;
  else
   VAR_2->stawidth = VAR_2->attrtype->typlen;
  VAR_2->stadistinct = 0.0;
 }


}
