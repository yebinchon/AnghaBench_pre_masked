
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;


struct TYPE_25__ {int consider_partitionwise_join; int nparts; scalar_t__ reloptkind; int relids; struct TYPE_25__** part_rels; int boundinfo; TYPE_1__* part_scheme; } ;
struct TYPE_24__ {int jointype; } ;
struct TYPE_23__ {int parttypbyval; int parttyplen; int partnatts; } ;
typedef TYPE_2__ SpecialJoinInfo ;
typedef int Relids ;
typedef TYPE_3__ RelOptInfo ;
typedef int PlannerInfo ;
typedef int Node ;
typedef int List ;
typedef int AppendRelInfo ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;





 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 scalar_t__ FUNC_5 (int *,int *,int,int **) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 TYPE_3__* FUNC_9 (int *,TYPE_3__*,TYPE_3__*,TYPE_3__*,int *,TYPE_2__*,int) ;
 TYPE_2__* FUNC_10 (int *,TYPE_2__*,int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,char*,int) ;
 int ** FUNC_13 (int *,int ,int*) ;
 int FUNC_14 (int ,int ,int ,int ,int ) ;
 int FUNC_15 (int **) ;
 int FUNC_16 (int *,TYPE_3__*,TYPE_3__*,TYPE_3__*,TYPE_2__*,int *) ;

__attribute__((used)) static void
FUNC_17(PlannerInfo *VAR_2, RelOptInfo *VAR_3, RelOptInfo *VAR_4,
        RelOptInfo *VAR_5, SpecialJoinInfo *VAR_6,
        List *VAR_7)
{
 bool VAR_8 = FUNC_3(VAR_3);
 bool VAR_9 = FUNC_3(VAR_4);
 int VAR_10;
 int VAR_11;


 FUNC_11();


 if (!FUNC_2(VAR_5))
  return;


 FUNC_0(VAR_5->consider_partitionwise_join);






 FUNC_0(FUNC_2(VAR_3) && FUNC_2(VAR_4));
 FUNC_0(FUNC_4(VAR_3) && FUNC_4(VAR_4));


 FUNC_0(VAR_3->consider_partitionwise_join &&
     VAR_4->consider_partitionwise_join);





 FUNC_0(VAR_5->part_scheme == VAR_3->part_scheme &&
     VAR_5->part_scheme == VAR_4->part_scheme);






 FUNC_0(FUNC_14(VAR_5->part_scheme->partnatts,
          VAR_5->part_scheme->parttyplen,
          VAR_5->part_scheme->parttypbyval,
          VAR_5->boundinfo, VAR_3->boundinfo));
 FUNC_0(FUNC_14(VAR_5->part_scheme->partnatts,
          VAR_5->part_scheme->parttyplen,
          VAR_5->part_scheme->parttypbyval,
          VAR_5->boundinfo, VAR_4->boundinfo));

 VAR_10 = VAR_5->nparts;






 for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
 {
  RelOptInfo *VAR_12 = VAR_3->part_rels[VAR_11];
  RelOptInfo *VAR_13 = VAR_4->part_rels[VAR_11];
  bool VAR_14 = (VAR_12 == ((void*)0) ||
          FUNC_1(VAR_12));
  bool VAR_15 = (VAR_13 == ((void*)0) ||
          FUNC_1(VAR_13));
  SpecialJoinInfo *VAR_16;
  List *VAR_17;
  RelOptInfo *VAR_18;
  Relids VAR_19;
  AppendRelInfo **VAR_20;
  int VAR_21;
  switch (VAR_6->jointype)
  {
   case 130:
   case 128:
    if (VAR_14 || VAR_15)
     continue;
    break;
   case 129:
   case 132:
    if (VAR_14)
     continue;
    break;
   case 131:
    if (VAR_14 && VAR_15)
     continue;
    break;
   default:

    FUNC_12(VAR_0, "unrecognized join type: %d",
      (int) VAR_6->jointype);
    break;
  }






  if (VAR_12 == ((void*)0) || VAR_13 == ((void*)0))
  {




   VAR_5->nparts = 0;
   return;
  }







  if (VAR_8 && !VAR_12->consider_partitionwise_join)
  {
   FUNC_0(VAR_12->reloptkind == VAR_1);
   FUNC_0(FUNC_1(VAR_12));
   VAR_5->nparts = 0;
   return;
  }
  if (VAR_9 && !VAR_13->consider_partitionwise_join)
  {
   FUNC_0(VAR_13->reloptkind == VAR_1);
   FUNC_0(FUNC_1(VAR_13));
   VAR_5->nparts = 0;
   return;
  }


  FUNC_0(!FUNC_7(VAR_12->relids, VAR_13->relids));
  VAR_19 = FUNC_8(VAR_12->relids, VAR_13->relids);
  VAR_20 = FUNC_13(VAR_2, VAR_19, &VAR_21);





  VAR_16 = FUNC_10(VAR_2, VAR_6,
              VAR_12->relids,
              VAR_13->relids);





  VAR_17 =
   (List *) FUNC_5(VAR_2,
           (Node *) VAR_7,
           VAR_21, VAR_20);
  FUNC_15(VAR_20);

  VAR_18 = VAR_5->part_rels[VAR_11];
  if (!VAR_18)
  {
   VAR_18 = FUNC_9(VAR_2, VAR_12, VAR_13,
             VAR_5, VAR_17,
             VAR_16,
             VAR_16->jointype);
   VAR_5->part_rels[VAR_11] = VAR_18;
  }

  FUNC_0(FUNC_6(VAR_18->relids, VAR_19));

  FUNC_16(VAR_2, VAR_12, VAR_13,
         VAR_18, VAR_16,
         VAR_17);
 }
}
