
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_48__ TYPE_5__ ;
typedef struct TYPE_47__ TYPE_4__ ;
typedef struct TYPE_46__ TYPE_3__ ;
typedef struct TYPE_45__ TYPE_2__ ;
typedef struct TYPE_44__ TYPE_1__ ;


struct TYPE_48__ {int string; int worth; } ;
struct TYPE_47__ {int * initial_rels; } ;
struct TYPE_46__ {int * join_search_private; } ;
struct TYPE_45__ {int string_length; TYPE_1__* data; } ;
struct TYPE_44__ {scalar_t__ string; int worth; } ;
typedef int RelOptInfo ;
typedef TYPE_2__ Pool ;
typedef TYPE_3__ PlannerInfo ;
typedef int List ;
typedef TYPE_4__ GeqoPrivateData ;
typedef int Gene ;
typedef int Edge ;
typedef int City ;
typedef TYPE_5__ Chromosome ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_5__* FUNC_0 (TYPE_3__*,int ) ;
 int * FUNC_1 (TYPE_3__*,int ) ;
 int * FUNC_2 (TYPE_3__*,int ) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int,int) ;
 int VAR_6 ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ,int ,int *) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (TYPE_3__*,TYPE_5__*) ;
 int FUNC_7 (TYPE_3__*,int *) ;
 int FUNC_8 (TYPE_3__*,int *) ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_10 (TYPE_3__*,int ,int ) ;
 int FUNC_11 (TYPE_3__*,int ,int ) ;
 int FUNC_12 (TYPE_3__*,TYPE_5__*,TYPE_5__*,TYPE_2__*,int ) ;
 int FUNC_13 (TYPE_3__*,int ) ;
 int FUNC_14 (TYPE_3__*,int ,int ,int ,int *) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 scalar_t__ FUNC_17 (TYPE_3__*,int *,int ,int ) ;
 int * FUNC_18 (TYPE_3__*,int *,int ) ;
 int FUNC_19 (TYPE_3__*,int ,int ,int ,int ,int *) ;
 int FUNC_20 (TYPE_3__*,int ,int ,int ,int ,int *) ;
 int FUNC_21 (TYPE_3__*,int ,int ,int ,int ) ;
 int FUNC_22 (int ,TYPE_2__*,int) ;
 int FUNC_23 (int ,TYPE_3__*) ;
 int FUNC_24 (int ,TYPE_2__*,int ,int) ;
 int FUNC_25 (TYPE_3__*,int ,int ,int ,int ,int *) ;
 int FUNC_26 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_27 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_28 (TYPE_3__*,TYPE_5__*,TYPE_2__*) ;
 int VAR_7 ;

RelOptInfo *
FUNC_29(PlannerInfo *VAR_8, int VAR_9, List *VAR_10)
{
 GeqoPrivateData VAR_11;
 int VAR_12;
 Chromosome *VAR_13;
 Chromosome *VAR_14;
 Chromosome *VAR_15;
 Pool *VAR_16;
 int VAR_17,
    VAR_18;




 Gene *VAR_19;
 RelOptInfo *VAR_20;
 VAR_8->join_search_private = (void *) &VAR_11;
 VAR_11.initial_rels = VAR_10;


 FUNC_13(VAR_8, VAR_3);


 VAR_17 = FUNC_16(VAR_9);
 VAR_18 = FUNC_15(VAR_17);





 VAR_16 = FUNC_3(VAR_8, VAR_17, VAR_9);


 FUNC_26(VAR_8, VAR_16);


 FUNC_27(VAR_8, VAR_16);
 VAR_13 = FUNC_0(VAR_8, VAR_16->string_length);
 VAR_14 = FUNC_0(VAR_8, VAR_16->string_length);
 for (VAR_12 = 0; VAR_12 < VAR_18; VAR_12++)
 {

  FUNC_12(VAR_8, VAR_13, VAR_14, VAR_16, VAR_4);
  VAR_15->worth = FUNC_10(VAR_8, VAR_15->string, VAR_16->string_length);


  FUNC_28(VAR_8, VAR_15, VAR_16);







 }
 VAR_19 = (Gene *) VAR_16->data[0].string;

 VAR_20 = FUNC_18(VAR_8, VAR_19, VAR_16->string_length);

 if (VAR_20 == ((void*)0))
  FUNC_5(VAR_2, "geqo failed to make a valid plan");







 FUNC_6(VAR_8, VAR_13);
 FUNC_6(VAR_8, VAR_14);
 FUNC_9(VAR_8, VAR_16);


 VAR_8->join_search_private = ((void*)0);

 return VAR_20;
}
