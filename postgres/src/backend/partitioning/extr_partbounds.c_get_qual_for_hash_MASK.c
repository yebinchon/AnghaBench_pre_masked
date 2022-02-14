
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32 ;
struct TYPE_6__ {int remainder; int modulus; } ;
struct TYPE_5__ {int partnatts; scalar_t__* partattrs; int partexprs; int * parttypcoll; int * parttypmod; int * parttypid; } ;
typedef int Relation ;
typedef TYPE_1__* PartitionKey ;
typedef TYPE_2__ PartitionBoundSpec ;
typedef int Oid ;
typedef int Node ;
typedef int ListCell ;
typedef int List ;
typedef int FuncExpr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int * FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 (int *) ;
 int * FUNC_9 (int *,int *,int *) ;
 int * FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int,int ,int,int ,int,int) ;
 int * FUNC_12 (int ,int ,int *,int ,int ,int ) ;
 scalar_t__ FUNC_13 (int,scalar_t__,int ,int ,int ,int ) ;

__attribute__((used)) static List *
FUNC_14(Relation VAR_6, PartitionBoundSpec *VAR_7)
{
 PartitionKey VAR_8 = FUNC_2(VAR_6);
 FuncExpr *VAR_9;
 Node *VAR_10;
 Node *VAR_11;
 Node *VAR_12;
 List *VAR_13;
 ListCell *VAR_14;
 int VAR_15;


 VAR_10 = (Node *) FUNC_11(VAR_5,
         -1,
         VAR_4,
         sizeof(Oid),
         FUNC_1(FUNC_3(VAR_6)),
         0,
         1);

 VAR_11 = (Node *) FUNC_11(VAR_3,
           -1,
           VAR_4,
           sizeof(int32),
           FUNC_0(VAR_7->modulus),
           0,
           1);

 VAR_12 = (Node *) FUNC_11(VAR_3,
          -1,
          VAR_4,
          sizeof(int32),
          FUNC_0(VAR_7->remainder),
          0,
          1);

 VAR_13 = FUNC_9(VAR_10, VAR_11, VAR_12);
 VAR_14 = FUNC_7(VAR_8->partexprs);


 for (VAR_15 = 0; VAR_15 < VAR_8->partnatts; VAR_15++)
 {
  Node *VAR_16;


  if (VAR_8->partattrs[VAR_15] != 0)
  {
   VAR_16 = (Node *) FUNC_13(1,
           VAR_8->partattrs[VAR_15],
           VAR_8->parttypid[VAR_15],
           VAR_8->parttypmod[VAR_15],
           VAR_8->parttypcoll[VAR_15],
           0);
  }
  else
  {
   VAR_16 = (Node *) FUNC_4(FUNC_6(VAR_14));
   VAR_14 = FUNC_10(VAR_8->partexprs, VAR_14);
  }

  VAR_13 = FUNC_5(VAR_13, VAR_16);
 }

 VAR_9 = FUNC_12(VAR_2,
       VAR_0,
       VAR_13,
       VAR_4,
       VAR_4,
       VAR_1);

 return FUNC_8(VAR_9);
}
