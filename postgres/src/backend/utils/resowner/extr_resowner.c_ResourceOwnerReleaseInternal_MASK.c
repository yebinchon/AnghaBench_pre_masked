
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int dsm_segment ;
typedef int TupleDesc ;
struct TYPE_8__ {int nlocks; int filearr; int snapshotarr; int tupdescarr; int planrefarr; int catlistrefarr; int catrefarr; int ** locks; int * parent; int jitarr; int dsmarr; int relrefarr; int bufferarr; struct TYPE_8__* nextchild; struct TYPE_8__* firstchild; } ;
struct TYPE_7__ {int arg; int (* callback ) (int ,int,int,int ) ;struct TYPE_7__* next; } ;
typedef int Snapshot ;
typedef int ResourceReleasePhase ;
typedef TYPE_1__ ResourceReleaseCallbackItem ;
typedef TYPE_2__* ResourceOwner ;
typedef int Relation ;
typedef int LOCALLOCK ;
typedef int JitContext ;
typedef int HeapTuple ;
typedef int File ;
typedef int Datum ;
typedef int CatCList ;
typedef int CachedPlan ;
typedef int Buffer ;


 int FUNC_0 (int ) ;
 TYPE_2__* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int **,int) ;
 int FUNC_7 (int **,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int,int) ;
 scalar_t__ FUNC_25 (int *,int *) ;
 TYPE_1__* VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;
 int FUNC_29 (int ,int,int,int ) ;

__attribute__((used)) static void
FUNC_30(ResourceOwner VAR_7,
        ResourceReleasePhase VAR_8,
        bool VAR_9,
        bool VAR_10)
{
 ResourceOwner VAR_11;
 ResourceOwner VAR_12;
 ResourceReleaseCallbackItem *VAR_13;
 Datum VAR_14;


 for (VAR_11 = VAR_7->firstchild; VAR_11 != ((void*)0); VAR_11 = VAR_11->nextchild)
  FUNC_30(VAR_11, VAR_8, VAR_9, VAR_10);





 VAR_12 = VAR_0;
 VAR_0 = VAR_7;

 if (VAR_8 == VAR_3)
 {
  while (FUNC_25(&(VAR_7->bufferarr), &VAR_14))
  {
   Buffer VAR_15 = FUNC_1(VAR_14);

   if (VAR_9)
    FUNC_9(VAR_15);
   FUNC_20(VAR_15);
  }


  while (FUNC_25(&(VAR_7->relrefarr), &VAR_14))
  {
   Relation VAR_16 = (Relation) FUNC_3(VAR_14);

   if (VAR_9)
    FUNC_15(VAR_16);
   FUNC_19(VAR_16);
  }


  while (FUNC_25(&(VAR_7->dsmarr), &VAR_14))
  {
   dsm_segment *VAR_17 = (dsm_segment *) FUNC_3(VAR_14);

   if (VAR_9)
    FUNC_12(VAR_17);
   FUNC_27(VAR_17);
  }


  while (FUNC_25(&(VAR_7->jitarr), &VAR_14))
  {
   JitContext *VAR_18 = (JitContext *) FUNC_8(VAR_14);

   FUNC_28(VAR_18);
  }
 }
 else if (VAR_8 == VAR_4)
 {
  if (VAR_10)
  {





   if (VAR_7 == VAR_6)
   {
    FUNC_18(VAR_9);
    FUNC_24(VAR_9, 0);
   }
  }
  else
  {





   LOCALLOCK **VAR_19;
   int VAR_20;

   FUNC_0(VAR_7->parent != ((void*)0));





   if (VAR_7->nlocks > VAR_1)
   {
    VAR_19 = ((void*)0);
    VAR_20 = 0;
   }
   else
   {
    VAR_19 = VAR_7->locks;
    VAR_20 = VAR_7->nlocks;
   }

   if (VAR_9)
    FUNC_6(VAR_19, VAR_20);
   else
    FUNC_7(VAR_19, VAR_20);
  }
 }
 else if (VAR_8 == VAR_2)
 {







  while (FUNC_25(&(VAR_7->catrefarr), &VAR_14))
  {
   HeapTuple VAR_21 = (HeapTuple) FUNC_3(VAR_14);

   if (VAR_9)
    FUNC_10(VAR_21);
   FUNC_22(VAR_21);
  }


  while (FUNC_25(&(VAR_7->catlistrefarr), &VAR_14))
  {
   CatCList *VAR_22 = (CatCList *) FUNC_3(VAR_14);

   if (VAR_9)
    FUNC_11(VAR_22);
   FUNC_23(VAR_22);
  }


  while (FUNC_25(&(VAR_7->planrefarr), &VAR_14))
  {
   CachedPlan *VAR_23 = (CachedPlan *) FUNC_3(VAR_14);

   if (VAR_9)
    FUNC_14(VAR_23);
   FUNC_21(VAR_23, 1);
  }


  while (FUNC_25(&(VAR_7->tupdescarr), &VAR_14))
  {
   TupleDesc VAR_24 = (TupleDesc) FUNC_3(VAR_14);

   if (VAR_9)
    FUNC_17(VAR_24);
   FUNC_4(VAR_24);
  }


  while (FUNC_25(&(VAR_7->snapshotarr), &VAR_14))
  {
   Snapshot VAR_25 = (Snapshot) FUNC_3(VAR_14);

   if (VAR_9)
    FUNC_16(VAR_25);
   FUNC_26(VAR_25);
  }


  while (FUNC_25(&(VAR_7->filearr), &VAR_14))
  {
   File VAR_26 = FUNC_2(VAR_14);

   if (VAR_9)
    FUNC_13(VAR_26);
   FUNC_5(VAR_26);
  }
 }


 for (VAR_13 = VAR_5; VAR_13; VAR_13 = VAR_13->next)
  VAR_13->callback(VAR_8, VAR_9, VAR_10, VAR_13->arg);

 VAR_0 = VAR_12;
}
