
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ operation; } ;
struct TYPE_10__ {scalar_t__ plan; } ;
struct TYPE_12__ {TYPE_1__ ps; } ;
struct TYPE_11__ {int memcxt; int partition_root; } ;
typedef int Relation ;
typedef TYPE_2__ PartitionTupleRouting ;
typedef TYPE_3__ ModifyTableState ;
typedef TYPE_4__ ModifyTable ;
typedef int EState ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (int *,TYPE_2__*,int ,int *,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

PartitionTupleRouting *
FUNC_4(EState *VAR_2, ModifyTableState *VAR_3,
          Relation VAR_4)
{
 PartitionTupleRouting *VAR_5;
 ModifyTable *VAR_6 = VAR_3 ? (ModifyTable *) VAR_3->ps.plan : ((void*)0);
 VAR_5 = (PartitionTupleRouting *) FUNC_3(sizeof(PartitionTupleRouting));
 VAR_5->partition_root = VAR_4;
 VAR_5->memcxt = VAR_1;







 FUNC_1(VAR_2, VAR_5, FUNC_2(VAR_4),
          ((void*)0), 0);
 if (VAR_6 && VAR_6->operation == VAR_0)
  FUNC_0(VAR_3, VAR_5);

 return VAR_5;
}
