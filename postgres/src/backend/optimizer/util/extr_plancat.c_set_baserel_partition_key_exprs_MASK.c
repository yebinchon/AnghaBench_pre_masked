
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int partnatts; scalar_t__* partattrs; int partexprs; int * parttypcoll; int * parttypmod; int * parttypid; } ;
struct TYPE_6__ {scalar_t__ relid; int ** nullable_partexprs; int ** partexprs; } ;
typedef int Relation ;
typedef TYPE_1__ RelOptInfo ;
typedef TYPE_2__* PartitionKey ;
typedef int Node ;
typedef int ListCell ;
typedef int List ;
typedef scalar_t__ Index ;
typedef int Expr ;
typedef scalar_t__ AttrNumber ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,scalar_t__,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 TYPE_2__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int ,int *) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13(Relation VAR_2,
        RelOptInfo *VAR_3)
{
 PartitionKey VAR_4 = FUNC_3(VAR_2);
 int VAR_5;
 int VAR_6;
 List **VAR_7;
 ListCell *VAR_8;
 Index VAR_9 = VAR_3->relid;

 FUNC_0(FUNC_2(VAR_3) && VAR_3->relid > 0);


 FUNC_0(VAR_4 != ((void*)0));

 VAR_5 = VAR_4->partnatts;
 VAR_7 = (List **) FUNC_11(sizeof(List *) * VAR_5);
 VAR_8 = FUNC_7(VAR_4->partexprs);

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
 {
  Expr *VAR_10;
  AttrNumber VAR_11 = VAR_4->partattrs[VAR_6];

  if (VAR_11 != VAR_1)
  {

   FUNC_0(VAR_11 > 0);

   VAR_10 = (Expr *) FUNC_10(VAR_9, VAR_11,
          VAR_4->parttypid[VAR_6],
          VAR_4->parttypmod[VAR_6],
          VAR_4->parttypcoll[VAR_6], 0);
  }
  else
  {
   if (VAR_8 == ((void*)0))
    FUNC_5(VAR_0, "wrong number of partition key expressions");


   VAR_10 = (Expr *) FUNC_4(FUNC_6(VAR_8));
   FUNC_1((Node *) VAR_10, 1, VAR_9, 0);
   VAR_8 = FUNC_9(VAR_4->partexprs, VAR_8);
  }

  VAR_7[VAR_6] = FUNC_8(VAR_10);
 }

 VAR_3->partexprs = VAR_7;







 VAR_3->nullable_partexprs = (List **) FUNC_12(sizeof(List *) * VAR_5);
}
