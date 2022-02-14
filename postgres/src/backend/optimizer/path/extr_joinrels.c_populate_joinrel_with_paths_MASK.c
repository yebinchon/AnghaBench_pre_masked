
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


struct TYPE_21__ {int relids; int cheapest_total_path; int pathlist; } ;
struct TYPE_20__ {int jointype; int syn_righthand; int min_righthand; int min_lefthand; } ;
typedef TYPE_1__ SpecialJoinInfo ;
typedef TYPE_2__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int List ;


 int VAR_0 ;
 int VAR_1 ;




 int const VAR_2 ;

 int const VAR_3 ;
 int const VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,TYPE_2__*,TYPE_2__*,TYPE_2__*,int const,TYPE_1__*,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int * FUNC_3 (int *,TYPE_2__*,int ,TYPE_1__*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int *,TYPE_2__*,int) ;
 int FUNC_11 (int *,TYPE_2__*,TYPE_2__*,TYPE_2__*,TYPE_1__*,int *) ;

__attribute__((used)) static void
FUNC_12(PlannerInfo *VAR_6, RelOptInfo *VAR_7,
       RelOptInfo *VAR_8, RelOptInfo *VAR_9,
       SpecialJoinInfo *VAR_10, List *VAR_11)
{
 switch (VAR_10->jointype)
 {
  case 130:
   if (FUNC_8(VAR_7) || FUNC_8(VAR_8) ||
    FUNC_10(VAR_11, VAR_9, 0))
   {
    FUNC_9(VAR_9);
    break;
   }
   FUNC_0(VAR_6, VAR_9, VAR_7, VAR_8,
         130, VAR_10,
         VAR_11);
   FUNC_0(VAR_6, VAR_9, VAR_8, VAR_7,
         130, VAR_10,
         VAR_11);
   break;
  case 129:
   if (FUNC_8(VAR_7) ||
    FUNC_10(VAR_11, VAR_9, 1))
   {
    FUNC_9(VAR_9);
    break;
   }
   if (FUNC_10(VAR_11, VAR_9, 0) &&
    FUNC_2(VAR_8->relids, VAR_10->syn_righthand))
    FUNC_9(VAR_8);
   FUNC_0(VAR_6, VAR_9, VAR_7, VAR_8,
         129, VAR_10,
         VAR_11);
   FUNC_0(VAR_6, VAR_9, VAR_8, VAR_7,
         VAR_2, VAR_10,
         VAR_11);
   break;
  case 131:
   if ((FUNC_8(VAR_7) && FUNC_8(VAR_8)) ||
    FUNC_10(VAR_11, VAR_9, 1))
   {
    FUNC_9(VAR_9);
    break;
   }
   FUNC_0(VAR_6, VAR_9, VAR_7, VAR_8,
         131, VAR_10,
         VAR_11);
   FUNC_0(VAR_6, VAR_9, VAR_8, VAR_7,
         131, VAR_10,
         VAR_11);
   if (VAR_9->pathlist == VAR_5)
    FUNC_5(VAR_1,
      (FUNC_6(VAR_0),
       FUNC_7("FULL JOIN is only supported with merge-joinable or hash-joinable join conditions")));
   break;
  case 128:







   if (FUNC_2(VAR_10->min_lefthand, VAR_7->relids) &&
    FUNC_2(VAR_10->min_righthand, VAR_8->relids))
   {
    if (FUNC_8(VAR_7) || FUNC_8(VAR_8) ||
     FUNC_10(VAR_11, VAR_9, 0))
    {
     FUNC_9(VAR_9);
     break;
    }
    FUNC_0(VAR_6, VAR_9, VAR_7, VAR_8,
          128, VAR_10,
          VAR_11);
   }
   if (FUNC_1(VAR_10->syn_righthand, VAR_8->relids) &&
    FUNC_3(VAR_6, VAR_8, VAR_8->cheapest_total_path,
           VAR_10) != ((void*)0))
   {
    if (FUNC_8(VAR_7) || FUNC_8(VAR_8) ||
     FUNC_10(VAR_11, VAR_9, 0))
    {
     FUNC_9(VAR_9);
     break;
    }
    FUNC_0(VAR_6, VAR_9, VAR_7, VAR_8,
          VAR_3, VAR_10,
          VAR_11);
    FUNC_0(VAR_6, VAR_9, VAR_8, VAR_7,
          VAR_4, VAR_10,
          VAR_11);
   }
   break;
  case 132:
   if (FUNC_8(VAR_7) ||
    FUNC_10(VAR_11, VAR_9, 1))
   {
    FUNC_9(VAR_9);
    break;
   }
   if (FUNC_10(VAR_11, VAR_9, 0) &&
    FUNC_2(VAR_8->relids, VAR_10->syn_righthand))
    FUNC_9(VAR_8);
   FUNC_0(VAR_6, VAR_9, VAR_7, VAR_8,
         132, VAR_10,
         VAR_11);
   break;
  default:

   FUNC_4(VAR_1, "unrecognized join type: %d", (int) VAR_10->jointype);
   break;
 }


 FUNC_11(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11);
}
