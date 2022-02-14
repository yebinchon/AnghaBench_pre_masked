
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_18__ {int * mergeclause_list; } ;
struct TYPE_17__ {int pathkeys; } ;
struct TYPE_16__ {int pathlist; } ;
typedef TYPE_1__ RelOptInfo ;
typedef int PlannerInfo ;
typedef TYPE_2__ Path ;
typedef int List ;
typedef scalar_t__ JoinType ;
typedef TYPE_3__ JoinPathExtraData ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*,int ) ;
 int * FUNC_2 (int *,int ,int *) ;
 TYPE_2__* FUNC_3 (int ,int *,int *,int ,int) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int *,int) ;
 int * FUNC_7 (int *,int *,int ) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int * FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *,TYPE_1__*,TYPE_2__*,TYPE_2__*,int *,int *,int *,int *,scalar_t__,TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_11(PlannerInfo *VAR_7,
       RelOptInfo *VAR_8,
       RelOptInfo *VAR_9,
       Path *VAR_10,
       JoinType VAR_11,
       JoinPathExtraData *VAR_12,
       bool VAR_13,
       Path *VAR_14,
       List *VAR_15,
       bool VAR_16)
{
 List *VAR_17;
 List *VAR_18;
 List *VAR_19;
 Path *VAR_20;
 Path *VAR_21;
 JoinType VAR_22 = VAR_11;
 int VAR_23;
 int VAR_24;

 if (VAR_11 == VAR_3 || VAR_11 == VAR_2)
  VAR_11 = VAR_1;


 VAR_17 =
  FUNC_2(VAR_7,
            VAR_10->pathkeys,
            VAR_12->mergeclause_list);
 if (VAR_17 == VAR_4)
 {
  if (VAR_11 == VAR_0)
                                    ;
  else
   return;
 }
 if (VAR_13 &&
  FUNC_5(VAR_17) != FUNC_5(VAR_12->mergeclause_list))
  return;


 VAR_18 = FUNC_7(VAR_7,
              VAR_17,
              VAR_10->pathkeys);







 FUNC_10(VAR_7,
        VAR_8,
        VAR_10,
        VAR_14,
        VAR_15,
        VAR_17,
        VAR_4,
        VAR_18,
        VAR_11,
        VAR_12,
        VAR_16);


 if (VAR_22 == VAR_2)
  return;
 if (FUNC_8(VAR_18,
         VAR_14->pathkeys))
 {

  VAR_20 = VAR_14;
  VAR_21 = VAR_14;
 }
 else
 {

  VAR_20 = ((void*)0);
  VAR_21 = ((void*)0);
 }
 VAR_23 = FUNC_5(VAR_18);
 if (VAR_23 > 1 && !VAR_13)
  VAR_19 = FUNC_4(VAR_18);
 else
  VAR_19 = VAR_18;

 for (VAR_24 = VAR_23; VAR_24 > 0; VAR_24--)
 {
  Path *VAR_25;
  List *VAR_26 = VAR_4;






  VAR_19 = FUNC_6(VAR_19, VAR_24);
  VAR_25 = FUNC_3(VAR_9->pathlist,
               VAR_19,
               ((void*)0),
               VAR_6,
               VAR_16);
  if (VAR_25 != ((void*)0) &&
   (VAR_21 == ((void*)0) ||
    FUNC_1(VAR_25, VAR_21,
        VAR_6) < 0))
  {


   if (VAR_24 < VAR_23)
   {
    VAR_26 =
     FUNC_9(VAR_7,
               VAR_17,
               VAR_19);
    FUNC_0(VAR_26 != VAR_4);
   }
   else
    VAR_26 = VAR_17;
   FUNC_10(VAR_7,
          VAR_8,
          VAR_10,
          VAR_25,
          VAR_15,
          VAR_26,
          VAR_4,
          VAR_4,
          VAR_11,
          VAR_12,
          VAR_16);
   VAR_21 = VAR_25;
  }

  VAR_25 = FUNC_3(VAR_9->pathlist,
               VAR_19,
               ((void*)0),
               VAR_5,
               VAR_16);
  if (VAR_25 != ((void*)0) &&
   (VAR_20 == ((void*)0) ||
    FUNC_1(VAR_25, VAR_20,
        VAR_5) < 0))
  {

   if (VAR_25 != VAR_21)
   {




    if (VAR_26 == VAR_4)
    {
     if (VAR_24 < VAR_23)
     {
      VAR_26 =
       FUNC_9(VAR_7,
                 VAR_17,
                 VAR_19);
      FUNC_0(VAR_26 != VAR_4);
     }
     else
      VAR_26 = VAR_17;
    }
    FUNC_10(VAR_7,
           VAR_8,
           VAR_10,
           VAR_25,
           VAR_15,
           VAR_26,
           VAR_4,
           VAR_4,
           VAR_11,
           VAR_12,
           VAR_16);
   }
   VAR_20 = VAR_25;
  }




  if (VAR_13)
   break;
 }
}
