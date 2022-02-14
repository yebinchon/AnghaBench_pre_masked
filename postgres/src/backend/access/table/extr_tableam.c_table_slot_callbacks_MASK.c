
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int TupleTableSlotOps ;
struct TYPE_8__ {TYPE_2__* rd_rel; TYPE_1__* rd_tableam; } ;
struct TYPE_7__ {scalar_t__ relkind; } ;
struct TYPE_6__ {int * (* slot_callbacks ) (TYPE_3__*) ;} ;
typedef TYPE_3__* Relation ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_1 (TYPE_3__*) ;

const TupleTableSlotOps *
FUNC_2(Relation VAR_5)
{
 const TupleTableSlotOps *VAR_6;

 if (VAR_5->rd_tableam)
  VAR_6 = VAR_5->rd_tableam->slot_callbacks(VAR_5);
 else if (VAR_5->rd_rel->relkind == VAR_0)
 {






  VAR_6 = &VAR_3;
 }
 else
 {






  FUNC_0(VAR_5->rd_rel->relkind == VAR_2 ||
      VAR_5->rd_rel->relkind == VAR_1);
  VAR_6 = &VAR_4;
 }

 return VAR_6;
}
