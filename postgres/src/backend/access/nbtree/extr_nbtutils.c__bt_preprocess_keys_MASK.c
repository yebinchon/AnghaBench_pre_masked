
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int xform ;
typedef int int16 ;
struct TYPE_18__ {int qual_ok; int numberOfKeys; TYPE_2__* keyData; TYPE_2__* arrayKeyData; } ;
struct TYPE_17__ {int numberOfKeys; TYPE_2__* keyData; TYPE_1__* indexRelation; int opaque; } ;
struct TYPE_16__ {int sk_attno; int sk_flags; int sk_strategy; } ;
struct TYPE_15__ {int * rd_indoption; } ;
typedef int ScanKeyData ;
typedef TYPE_2__* ScanKey ;
typedef TYPE_3__* IndexScanDesc ;
typedef TYPE_4__* BTScanOpaque ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_2__*,TYPE_2__*,TYPE_2__*,int*) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_6 (TYPE_2__**,int ,int) ;

void
FUNC_7(IndexScanDesc VAR_9)
{
 BTScanOpaque VAR_10 = (BTScanOpaque) VAR_9->opaque;
 int VAR_11 = VAR_9->numberOfKeys;
 int16 *VAR_12 = VAR_9->indexRelation->rd_indoption;
 int VAR_13;
 int VAR_14;
 ScanKey VAR_15;
 ScanKey VAR_16;
 ScanKey VAR_17;
 ScanKey VAR_18[VAR_5];
 bool VAR_19;
 int VAR_20,
    VAR_21;
 AttrNumber VAR_22;


 VAR_10->qual_ok = 1;
 VAR_10->numberOfKeys = 0;

 if (VAR_11 < 1)
  return;




 if (VAR_10->arrayKeyData != ((void*)0))
  VAR_15 = VAR_10->arrayKeyData;
 else
  VAR_15 = VAR_9->keyData;

 VAR_16 = VAR_10->keyData;
 VAR_17 = &VAR_15[0];

 if (VAR_17->sk_attno < 1)
  FUNC_4(VAR_6, "btree index keys must be ordered by attribute");


 if (VAR_11 == 1)
 {

  if (!FUNC_2(VAR_17, VAR_12))
   VAR_10->qual_ok = 0;
  FUNC_5(VAR_16, VAR_17, sizeof(ScanKeyData));
  VAR_10->numberOfKeys = 1;

  if (VAR_17->sk_attno == 1)
   FUNC_3(VAR_16);
  return;
 }




 VAR_13 = 0;
 VAR_14 = 0;







 VAR_22 = 1;
 FUNC_6(VAR_18, 0, sizeof(VAR_18));






 for (VAR_20 = 0;; VAR_17++, VAR_20++)
 {
  if (VAR_20 < VAR_11)
  {

   if (!FUNC_2(VAR_17, VAR_12))
   {

    VAR_10->qual_ok = 0;
    return;
   }
  }





  if (VAR_20 == VAR_11 || VAR_17->sk_attno != VAR_22)
  {
   int VAR_23 = VAR_14;


   if (VAR_20 < VAR_11 && VAR_17->sk_attno < VAR_22)
    FUNC_4(VAR_6, "btree index keys must be ordered by attribute");
   if (VAR_18[VAR_0 - 1])
   {
    ScanKey VAR_24 = VAR_18[VAR_0 - 1];

    for (VAR_21 = VAR_5; --VAR_21 >= 0;)
    {
     ScanKey VAR_25 = VAR_18[VAR_21];

     if (!VAR_25 || VAR_21 == (VAR_0 - 1))
      continue;

     if (VAR_24->sk_flags & VAR_8)
     {

      VAR_10->qual_ok = 0;
      return;
     }

     if (FUNC_1(VAR_9, VAR_25, VAR_24, VAR_25,
             &VAR_19))
     {
      if (!VAR_19)
      {

       VAR_10->qual_ok = 0;
       return;
      }

      VAR_18[VAR_21] = ((void*)0);
     }

    }

    VAR_14++;
   }


   if (VAR_18[VAR_4 - 1]
    && VAR_18[VAR_3 - 1])
   {
    ScanKey VAR_26 = VAR_18[VAR_4 - 1];
    ScanKey VAR_27 = VAR_18[VAR_3 - 1];

    if (FUNC_1(VAR_9, VAR_27, VAR_26, VAR_27,
            &VAR_19))
    {
     if (VAR_19)
      VAR_18[VAR_3 - 1] = ((void*)0);
     else
      VAR_18[VAR_4 - 1] = ((void*)0);
    }
   }


   if (VAR_18[VAR_2 - 1]
    && VAR_18[VAR_1 - 1])
   {
    ScanKey VAR_28 = VAR_18[VAR_2 - 1];
    ScanKey VAR_29 = VAR_18[VAR_1 - 1];

    if (FUNC_1(VAR_9, VAR_29, VAR_28, VAR_29,
            &VAR_19))
    {
     if (VAR_19)
      VAR_18[VAR_1 - 1] = ((void*)0);
     else
      VAR_18[VAR_2 - 1] = ((void*)0);
    }
   }






   for (VAR_21 = VAR_5; --VAR_21 >= 0;)
   {
    if (VAR_18[VAR_21])
    {
     ScanKey VAR_30 = &VAR_16[VAR_13++];

     FUNC_5(VAR_30, VAR_18[VAR_21], sizeof(ScanKeyData));
     if (VAR_23 == VAR_22 - 1)
      FUNC_3(VAR_30);
    }
   }




   if (VAR_20 == VAR_11)
    break;


   VAR_22 = VAR_17->sk_attno;
   FUNC_6(VAR_18, 0, sizeof(VAR_18));
  }


  VAR_21 = VAR_17->sk_strategy - 1;


  if (VAR_17->sk_flags & VAR_7)
  {
   ScanKey VAR_31 = &VAR_16[VAR_13++];

   FUNC_5(VAR_31, VAR_17, sizeof(ScanKeyData));
   if (VAR_14 == VAR_22 - 1)
    FUNC_3(VAR_31);





   FUNC_0(VAR_21 != (VAR_0 - 1));
   continue;
  }


  if (VAR_18[VAR_21] == ((void*)0))
  {

   VAR_18[VAR_21] = VAR_17;
  }
  else
  {

   if (FUNC_1(VAR_9, VAR_17, VAR_17, VAR_18[VAR_21],
           &VAR_19))
   {
    if (VAR_19)
     VAR_18[VAR_21] = VAR_17;
    else if (VAR_21 == (VAR_0 - 1))
    {

     VAR_10->qual_ok = 0;
     return;
    }

   }
   else
   {





    ScanKey VAR_32 = &VAR_16[VAR_13++];

    FUNC_5(VAR_32, VAR_17, sizeof(ScanKeyData));
    if (VAR_14 == VAR_22 - 1)
     FUNC_3(VAR_32);
   }
  }
 }

 VAR_10->numberOfKeys = VAR_13;
}
