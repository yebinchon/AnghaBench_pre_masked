
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


struct TYPE_19__ {int validate_default; int * partition_constraint; } ;
struct TYPE_18__ {int nparts; int * oids; } ;
struct TYPE_17__ {TYPE_1__* rd_rel; } ;
struct TYPE_16__ {scalar_t__ relkind; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__* PartitionDesc ;
typedef int List ;
typedef int Expr ;
typedef TYPE_4__ AlteredTableInfo ;


 TYPE_4__* FUNC_0 (int **,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_3__* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (char*,int ) ;
 scalar_t__ FUNC_8 (int *) ;
 int * FUNC_9 (int *,int,TYPE_2__*,TYPE_2__*,int*) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_11 (int ,int ) ;

__attribute__((used)) static void
FUNC_12(List **VAR_6, Relation VAR_7,
           List *VAR_8,
           bool VAR_9)
{




 if (FUNC_2(VAR_7, VAR_8))
 {
  if (!VAR_9)
   FUNC_6(VAR_1,
     (FUNC_7("partition constraint for table \"%s\" is implied by existing constraints",
       FUNC_4(VAR_7))));
  else
   FUNC_6(VAR_1,
     (FUNC_7("updated partition constraint for default partition \"%s\" is implied by existing constraints",
       FUNC_4(VAR_7))));
  return;
 }






 if (VAR_7->rd_rel->relkind == VAR_5)
 {
  AlteredTableInfo *VAR_10;


  VAR_10 = FUNC_0(VAR_6, VAR_7);
  FUNC_1(VAR_10->partition_constraint == ((void*)0));
  VAR_10->partition_constraint = (Expr *) FUNC_8(VAR_8);
  VAR_10->validate_default = VAR_9;
 }
 else if (VAR_7->rd_rel->relkind == VAR_4)
 {
  PartitionDesc VAR_11 = FUNC_3(VAR_7);
  int VAR_12;

  for (VAR_12 = 0; VAR_12 < VAR_11->nparts; VAR_12++)
  {
   Relation VAR_13;
   bool VAR_14;
   List *VAR_15;




   VAR_13 = FUNC_11(VAR_11->oids[VAR_12], VAR_0);





   VAR_15 =
    FUNC_9(VAR_8, 1,
          VAR_13, VAR_7, &VAR_14);

   if (VAR_14)
    FUNC_5(VAR_2, "unexpected whole-row reference found in partition constraint");

   FUNC_12(VAR_6, VAR_13,
              VAR_15,
              VAR_9);
   FUNC_10(VAR_13, VAR_3);
  }
 }
}
