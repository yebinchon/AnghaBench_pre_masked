
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int float4 ;
struct TYPE_15__ {int* numnumbers; int* numvalues; int* statyplen; char* statypalign; TYPE_1__* attr; int * statypbyval; int * statypid; scalar_t__** stavalues; int ** stanumbers; int * stacoll; int * staop; int * stakind; int stadistinct; int stawidth; int stanullfrac; int stats_valid; } ;
typedef TYPE_2__ VacAttrStats ;
struct TYPE_16__ {int t_self; } ;
struct TYPE_14__ {int attnum; } ;
typedef int Relation ;
typedef int Oid ;
typedef TYPE_3__* HeapTuple ;
typedef scalar_t__ Datum ;
typedef int ArrayType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,TYPE_3__*) ;
 int FUNC_2 (int ,int *,TYPE_3__*) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_13 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 TYPE_3__* FUNC_11 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_17 ;
 int * FUNC_12 (scalar_t__*,int,int ,int,int ,char) ;
 TYPE_3__* FUNC_13 (int ,scalar_t__*,int*) ;
 int FUNC_14 (TYPE_3__*) ;
 TYPE_3__* FUNC_15 (TYPE_3__*,int ,scalar_t__*,int*,int*) ;
 scalar_t__ FUNC_16 (int) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (int ,int ) ;

__attribute__((used)) static void
FUNC_19(Oid VAR_18, bool VAR_19, int VAR_20, VacAttrStats **VAR_21)
{
 Relation VAR_22;
 int VAR_23;

 if (VAR_20 <= 0)
  return;

 VAR_22 = FUNC_18(VAR_17, VAR_14);

 for (VAR_23 = 0; VAR_23 < VAR_20; VAR_23++)
 {
  VacAttrStats *VAR_24 = VAR_21[VAR_23];
  HeapTuple VAR_25,
     VAR_26;
  int VAR_27,
     VAR_28,
     VAR_29;
  Datum VAR_30[VAR_13];
  bool VAR_31[VAR_13];
  bool VAR_32[VAR_13];


  if (!VAR_24->stats_valid)
   continue;




  for (VAR_27 = 0; VAR_27 < VAR_13; ++VAR_27)
  {
   VAR_31[VAR_27] = 0;
   VAR_32[VAR_27] = 1;
  }

  VAR_30[VAR_8 - 1] = FUNC_7(VAR_18);
  VAR_30[VAR_0 - 1] = FUNC_5(VAR_24->attr->attnum);
  VAR_30[VAR_3 - 1] = FUNC_0(VAR_19);
  VAR_30[VAR_5 - 1] = FUNC_3(VAR_24->stanullfrac);
  VAR_30[VAR_10 - 1] = FUNC_6(VAR_24->stawidth);
  VAR_30[VAR_2 - 1] = FUNC_3(VAR_24->stadistinct);
  VAR_27 = VAR_4 - 1;
  for (VAR_28 = 0; VAR_28 < VAR_15; VAR_28++)
  {
   VAR_30[VAR_27++] = FUNC_5(VAR_24->stakind[VAR_28]);
  }
  VAR_27 = VAR_7 - 1;
  for (VAR_28 = 0; VAR_28 < VAR_15; VAR_28++)
  {
   VAR_30[VAR_27++] = FUNC_7(VAR_24->staop[VAR_28]);
  }
  VAR_27 = VAR_1 - 1;
  for (VAR_28 = 0; VAR_28 < VAR_15; VAR_28++)
  {
   VAR_30[VAR_27++] = FUNC_7(VAR_24->stacoll[VAR_28]);
  }
  VAR_27 = VAR_6 - 1;
  for (VAR_28 = 0; VAR_28 < VAR_15; VAR_28++)
  {
   int VAR_33 = VAR_24->numnumbers[VAR_28];

   if (VAR_33 > 0)
   {
    Datum *VAR_34 = (Datum *) FUNC_16(VAR_33 * sizeof(Datum));
    ArrayType *VAR_35;

    for (VAR_29 = 0; VAR_29 < VAR_33; VAR_29++)
     VAR_34[VAR_29] = FUNC_3(VAR_24->stanumbers[VAR_28][VAR_29]);

    VAR_35 = FUNC_12(VAR_34, VAR_33,
            VAR_11,
            sizeof(float4), VAR_12, 'i');
    VAR_30[VAR_27++] = FUNC_8(VAR_35);
   }
   else
   {
    VAR_31[VAR_27] = 1;
    VAR_30[VAR_27++] = (Datum) 0;
   }
  }
  VAR_27 = VAR_9 - 1;
  for (VAR_28 = 0; VAR_28 < VAR_15; VAR_28++)
  {
   if (VAR_24->numvalues[VAR_28] > 0)
   {
    ArrayType *VAR_36;

    VAR_36 = FUNC_12(VAR_24->stavalues[VAR_28],
            VAR_24->numvalues[VAR_28],
            VAR_24->statypid[VAR_28],
            VAR_24->statyplen[VAR_28],
            VAR_24->statypbyval[VAR_28],
            VAR_24->statypalign[VAR_28]);
    VAR_30[VAR_27++] = FUNC_8(VAR_36);
   }
   else
   {
    VAR_31[VAR_27] = 1;
    VAR_30[VAR_27++] = (Datum) 0;
   }
  }


  VAR_26 = FUNC_11(VAR_16,
         FUNC_7(VAR_18),
         FUNC_5(VAR_24->attr->attnum),
         FUNC_0(VAR_19));

  if (FUNC_4(VAR_26))
  {

   VAR_25 = FUNC_15(VAR_26,
          FUNC_9(VAR_22),
          VAR_30,
          VAR_31,
          VAR_32);
   FUNC_10(VAR_26);
   FUNC_2(VAR_22, &VAR_25->t_self, VAR_25);
  }
  else
  {

   VAR_25 = FUNC_13(FUNC_9(VAR_22), VAR_30, VAR_31);
   FUNC_1(VAR_22, VAR_25);
  }

  FUNC_14(VAR_25);
 }

 FUNC_17(VAR_22, VAR_14);
}
