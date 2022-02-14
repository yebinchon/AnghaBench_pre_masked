
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_16__ ;


typedef double float8 ;
typedef double float4 ;
struct TYPE_19__ {int stats_valid; double stanullfrac; double stawidth; double stadistinct; int* numvalues; int* statyplen; int* statypbyval; char* statypalign; double** stanumbers; int* numnumbers; int * stakind; int * statypid; int ** stavalues; int * stacoll; int * staop; int anl_context; TYPE_1__* attr; scalar_t__ extra_data; } ;
typedef TYPE_2__ VacAttrStats ;
struct TYPE_17__ {int fn_oid; } ;
struct TYPE_20__ {int rng_collation; TYPE_16__ rng_subdiff_finfo; } ;
typedef TYPE_3__ TypeCacheEntry ;
struct TYPE_21__ {int val; scalar_t__ infinite; } ;
struct TYPE_18__ {int attstattarget; } ;
typedef int RangeType ;
typedef TYPE_4__ RangeBound ;
typedef int MemoryContext ;
typedef int Datum ;
typedef int (* AnalyzeAttrFetchFunc ) (TYPE_2__*,int,int*) ;


 double FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (double) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_16__*,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_5 ;
 double FUNC_9 () ;
 int * FUNC_10 (int) ;
 int FUNC_11 (double*,int,int,int ) ;
 int FUNC_12 (TYPE_4__*,int,int,int ,TYPE_3__*) ;
 int VAR_6 ;
 int FUNC_13 (TYPE_3__*,int *,TYPE_4__*,TYPE_4__*,int*) ;
 int FUNC_14 (TYPE_3__*,TYPE_4__*,TYPE_4__*,int) ;
 int FUNC_15 () ;

__attribute__((used)) static void
FUNC_16(VacAttrStats *VAR_7, AnalyzeAttrFetchFunc VAR_8,
     int VAR_9, double VAR_10)
{
 TypeCacheEntry *VAR_11 = (TypeCacheEntry *) VAR_7->extra_data;
 bool VAR_12 = FUNC_6(VAR_11->rng_subdiff_finfo.fn_oid);
 int VAR_13 = 0;
 int VAR_14 = 0;
 int VAR_15 = 0;
 int VAR_16 = 0;
 int VAR_17;
 int VAR_18;
 int VAR_19 = VAR_7->attr->attstattarget;
 int VAR_20;
 float8 *VAR_21;
 RangeBound *VAR_22,
      *VAR_23;
 double VAR_24 = 0;


 VAR_22 = (RangeBound *) FUNC_10(sizeof(RangeBound) * VAR_9);
 VAR_23 = (RangeBound *) FUNC_10(sizeof(RangeBound) * VAR_9);
 VAR_21 = (float8 *) FUNC_10(sizeof(float8) * VAR_9);


 for (VAR_17 = 0; VAR_17 < VAR_9; VAR_17++)
 {
  Datum VAR_25;
  bool VAR_26,
     VAR_27;
  RangeType *VAR_28;
  RangeBound VAR_29,
     VAR_30;
  float8 VAR_31;

  FUNC_15();

  VAR_25 = VAR_8(VAR_7, VAR_17, &VAR_26);
  if (VAR_26)
  {

   VAR_13++;
   continue;
  }





  VAR_24 += FUNC_8(FUNC_1(VAR_25));


  VAR_28 = FUNC_2(VAR_25);
  FUNC_13(VAR_11, VAR_28, &VAR_29, &VAR_30, &VAR_27);

  if (!VAR_27)
  {

   VAR_22[VAR_15] = VAR_29;
   VAR_23[VAR_15] = VAR_30;

   if (VAR_29.infinite || VAR_30.infinite)
   {

    VAR_31 = FUNC_9();
   }
   else if (VAR_12)
   {




    VAR_31 = FUNC_0(FUNC_4(
                &VAR_11->rng_subdiff_finfo,
                VAR_11->rng_collation,
                VAR_30.val, VAR_29.val));
   }
   else
   {

    VAR_31 = 1.0;
   }
   VAR_21[VAR_15] = VAR_31;

   VAR_15++;
  }
  else
   VAR_16++;

  VAR_14++;
 }

 VAR_18 = 0;


 if (VAR_14 > 0)
 {
  Datum *VAR_32;
  Datum *VAR_33;
  int VAR_34,
     VAR_35,
     VAR_36,
     VAR_37,
     VAR_38;
  MemoryContext VAR_39;
  float4 *VAR_40;

  VAR_7->stats_valid = 1;

  VAR_7->stanullfrac = (double) VAR_13 / (double) VAR_9;
  VAR_7->stawidth = VAR_24 / (double) VAR_14;


  VAR_7->stadistinct = -1.0 * (1.0 - VAR_7->stanullfrac);


  VAR_39 = FUNC_5(VAR_7->anl_context);





  if (VAR_15 >= 2)
  {

   FUNC_12(VAR_22, VAR_15, sizeof(RangeBound),
       VAR_6, VAR_11);
   FUNC_12(VAR_23, VAR_15, sizeof(RangeBound),
       VAR_6, VAR_11);

   VAR_20 = VAR_15;
   if (VAR_20 > VAR_19)
    VAR_20 = VAR_19 + 1;

   VAR_32 = (Datum *) FUNC_10(VAR_20 * sizeof(Datum));
   VAR_36 = (VAR_15 - 1) / (VAR_20 - 1);
   VAR_37 = (VAR_15 - 1) % (VAR_20 - 1);
   VAR_34 = VAR_35 = 0;

   for (VAR_38 = 0; VAR_38 < VAR_20; VAR_38++)
   {
    VAR_32[VAR_38] = FUNC_7(FUNC_14(
                    VAR_11, &VAR_22[VAR_34], &VAR_23[VAR_34], 0));
    VAR_34 += VAR_36;
    VAR_35 += VAR_37;
    if (VAR_35 >= (VAR_20 - 1))
    {

     VAR_34++;
     VAR_35 -= (VAR_20 - 1);
    }
   }

   VAR_7->stakind[VAR_18] = VAR_3;
   VAR_7->stavalues[VAR_18] = VAR_32;
   VAR_7->numvalues[VAR_18] = VAR_20;
   VAR_18++;
  }





  if (VAR_15 >= 2)
  {




   FUNC_11(VAR_21, VAR_15, sizeof(float8), VAR_5);

   VAR_20 = VAR_15;
   if (VAR_20 > VAR_19)
    VAR_20 = VAR_19 + 1;

   VAR_33 = (Datum *) FUNC_10(VAR_20 * sizeof(Datum));
   VAR_36 = (VAR_15 - 1) / (VAR_20 - 1);
   VAR_37 = (VAR_15 - 1) % (VAR_20 - 1);
   VAR_34 = VAR_35 = 0;

   for (VAR_38 = 0; VAR_38 < VAR_20; VAR_38++)
   {
    VAR_33[VAR_38] = FUNC_3(VAR_21[VAR_34]);
    VAR_34 += VAR_36;
    VAR_35 += VAR_37;
    if (VAR_35 >= (VAR_20 - 1))
    {

     VAR_34++;
     VAR_35 -= (VAR_20 - 1);
    }
   }
  }
  else
  {






   VAR_33 = FUNC_10(0);
   VAR_20 = 0;
  }
  VAR_7->staop[VAR_18] = VAR_1;
  VAR_7->stacoll[VAR_18] = VAR_2;
  VAR_7->stavalues[VAR_18] = VAR_33;
  VAR_7->numvalues[VAR_18] = VAR_20;
  VAR_7->statypid[VAR_18] = VAR_0;
  VAR_7->statyplen[VAR_18] = sizeof(float8);



  VAR_7->statypbyval[VAR_18] = 0;

  VAR_7->statypalign[VAR_18] = 'd';


  VAR_40 = (float4 *) FUNC_10(sizeof(float4));
  *VAR_40 = ((double) VAR_16) / ((double) VAR_14);
  VAR_7->stanumbers[VAR_18] = VAR_40;
  VAR_7->numnumbers[VAR_18] = 1;

  VAR_7->stakind[VAR_18] = VAR_4;
  VAR_18++;

  FUNC_5(VAR_39);
 }
 else if (VAR_13 > 0)
 {

  VAR_7->stats_valid = 1;
  VAR_7->stanullfrac = 1.0;
  VAR_7->stawidth = 0;
  VAR_7->stadistinct = 0.0;
 }





}
