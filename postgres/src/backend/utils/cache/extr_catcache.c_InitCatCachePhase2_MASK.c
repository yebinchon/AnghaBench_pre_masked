
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ id; int cc_reloid; int cc_indexoid; int * cc_tupdesc; } ;
struct TYPE_9__ {TYPE_1__* rd_index; } ;
struct TYPE_8__ {scalar_t__ indimmediate; scalar_t__ indisunique; } ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__ CatCache ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_5 (int ,int ) ;

void
FUNC_6(CatCache *VAR_3, bool VAR_4)
{
 if (VAR_3->cc_tupdesc == ((void*)0))
  FUNC_1(VAR_3);

 if (VAR_4 &&
  VAR_3->id != VAR_1 &&
  VAR_3->id != VAR_0)
 {
  Relation VAR_5;







  FUNC_2(VAR_3->cc_reloid, VAR_2);
  VAR_5 = FUNC_5(VAR_3->cc_indexoid, VAR_2);







  FUNC_0(VAR_5->rd_index->indisunique &&
      VAR_5->rd_index->indimmediate);

  FUNC_4(VAR_5, VAR_2);
  FUNC_3(VAR_3->cc_reloid, VAR_2);
 }
}
