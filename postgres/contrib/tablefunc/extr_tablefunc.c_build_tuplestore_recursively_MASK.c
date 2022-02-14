
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
typedef int Tuplestorestate ;
typedef int TupleDesc ;
struct TYPE_13__ {int tupdesc; } ;
struct TYPE_12__ {int * vals; int tupdesc; } ;
struct TYPE_11__ {char* data; } ;
typedef TYPE_1__ StringInfoData ;
typedef TYPE_2__ SPITupleTable ;
typedef int MemoryContext ;
typedef int HeapTuple ;
typedef TYPE_3__ AttInMetadata ;


 int FUNC_0 (TYPE_3__*,char**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,int,int ) ;
 char* FUNC_2 (int ,int ,int) ;
 scalar_t__ VAR_6 ;
 TYPE_2__* VAR_7 ;
 int FUNC_3 (TYPE_1__*,char*,char*,char*,...) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (char*,char*,int) ;
 scalar_t__ FUNC_15 (char*,char*) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static void
FUNC_18(char *VAR_8,
        char *VAR_9,
        char *VAR_10,
        char *VAR_11,
        char *VAR_12,
        char *VAR_13,
        char *VAR_14,
        int VAR_15,
        int *VAR_16,
        int VAR_17,
        bool VAR_18,
        bool VAR_19,
        MemoryContext VAR_20,
        AttInMetadata *VAR_21,
        Tuplestorestate *VAR_22)
{
 TupleDesc VAR_23 = VAR_21->tupdesc;
 int VAR_24;
 uint64 VAR_25;
 int VAR_26;
 StringInfoData VAR_27;
 char **VAR_28;
 char *VAR_29;
 char *VAR_30;
 char VAR_31[VAR_4];
 char VAR_32[VAR_4];
 char *VAR_33;
 HeapTuple VAR_34;

 if (VAR_17 > 0 && VAR_15 > VAR_17)
  return;

 FUNC_10(&VAR_27);


 if (!VAR_19)
 {
  FUNC_3(&VAR_27, "SELECT %s, %s FROM %s WHERE %s = %s AND %s IS NOT NULL AND %s <> %s",
       VAR_8,
       VAR_9,
       VAR_10,
       VAR_9,
       FUNC_12(VAR_13),
       VAR_8, VAR_8, VAR_9);
  VAR_26 = 0;
 }
 else
 {
  FUNC_3(&VAR_27, "SELECT %s, %s FROM %s WHERE %s = %s AND %s IS NOT NULL AND %s <> %s ORDER BY %s",
       VAR_8,
       VAR_9,
       VAR_10,
       VAR_9,
       FUNC_12(VAR_13),
       VAR_8, VAR_8, VAR_9,
       VAR_11);
  VAR_26 = 1;
 }

 if (VAR_18)
  VAR_28 = (char **) FUNC_11((VAR_0 + VAR_26) * sizeof(char *));
 else
  VAR_28 = (char **) FUNC_11((VAR_1 + VAR_26) * sizeof(char *));


 if (VAR_15 == 0)
 {

  VAR_28[0] = VAR_13;


  VAR_28[1] = ((void*)0);


  FUNC_14(VAR_31, "%d", VAR_15);
  VAR_28[2] = VAR_31;


  if (VAR_18)
   VAR_28[3] = VAR_13;


  if (VAR_19)
  {
   FUNC_14(VAR_32, "%d", (*VAR_16)++);
   if (VAR_18)
    VAR_28[4] = VAR_32;
   else
    VAR_28[3] = VAR_32;
  }


  VAR_34 = FUNC_0(VAR_21, VAR_28);


  FUNC_16(VAR_22, VAR_34);


  VAR_15++;
 }


 VAR_24 = FUNC_1(VAR_27.data, 1, 0);
 VAR_25 = VAR_6;


 if ((VAR_24 == VAR_5) && (VAR_25 > 0))
 {
  HeapTuple VAR_35;
  SPITupleTable *VAR_36 = VAR_7;
  TupleDesc VAR_37 = VAR_36->tupdesc;
  uint64 VAR_38;
  StringInfoData VAR_39;
  StringInfoData VAR_40;
  StringInfoData VAR_41;





  FUNC_5(VAR_23, VAR_37);

  FUNC_10(&VAR_39);
  FUNC_10(&VAR_40);
  FUNC_10(&VAR_41);

  for (VAR_38 = 0; VAR_38 < VAR_25; VAR_38++)
  {

   FUNC_4(&VAR_39, VAR_14);
   FUNC_3(&VAR_40, "%s%s%s", VAR_12, VAR_14, VAR_12);


   VAR_35 = VAR_36->vals[VAR_38];


   VAR_29 = FUNC_2(VAR_35, VAR_37, 1);


   VAR_30 = FUNC_2(VAR_35, VAR_37, 2);


   FUNC_14(VAR_31, "%d", VAR_15);


   if (VAR_29)
   {
    FUNC_3(&VAR_41, "%s%s%s",
         VAR_12, VAR_29, VAR_12);
    if (FUNC_15(VAR_40.data, VAR_41.data))
     FUNC_6(VAR_3,
       (FUNC_7(VAR_2),
        FUNC_8("infinite recursion detected")));
   }


   if (VAR_29)
    FUNC_3(&VAR_39, "%s%s", VAR_12, VAR_29);
   VAR_33 = VAR_39.data;


   VAR_28[0] = VAR_29;
   VAR_28[1] = VAR_30;
   VAR_28[2] = VAR_31;
   if (VAR_18)
    VAR_28[3] = VAR_33;
   if (VAR_19)
   {
    FUNC_14(VAR_32, "%d", (*VAR_16)++);
    if (VAR_18)
     VAR_28[4] = VAR_32;
    else
     VAR_28[3] = VAR_32;
   }

   VAR_34 = FUNC_0(VAR_21, VAR_28);


   FUNC_16(VAR_22, VAR_34);

   FUNC_9(VAR_34);


   if (VAR_29)
    FUNC_18(VAR_8,
            VAR_9,
            VAR_10,
            VAR_11,
            VAR_12,
            VAR_29,
            VAR_33,
            VAR_15 + 1,
            VAR_16,
            VAR_17,
            VAR_18,
            VAR_19,
            VAR_20,
            VAR_21,
            VAR_22);

   FUNC_17(VAR_29);
   FUNC_17(VAR_30);


   FUNC_13(&VAR_39);
   FUNC_13(&VAR_40);
   FUNC_13(&VAR_41);
  }

  FUNC_17(VAR_39.data);
  FUNC_17(VAR_40.data);
  FUNC_17(VAR_41.data);
 }
}
