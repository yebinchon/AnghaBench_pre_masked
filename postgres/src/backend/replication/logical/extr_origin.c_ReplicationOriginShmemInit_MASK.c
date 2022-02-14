
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int origin_cv; int lock; } ;
struct TYPE_5__ {int tranche_id; TYPE_3__* states; } ;
typedef TYPE_1__ ReplicationStateCtl ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_3__*,int ,int ) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char*,int ,int*) ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 TYPE_1__* VAR_3 ;

void
FUNC_6(void)
{
 bool VAR_4;

 if (VAR_1 == 0)
  return;

 VAR_3 = (ReplicationStateCtl *)
  FUNC_5("ReplicationOriginState",
      FUNC_4(),
      &VAR_4);
 VAR_2 = VAR_3->states;

 if (!VAR_4)
 {
  int VAR_5;

  VAR_3->tranche_id = VAR_0;

  FUNC_3(VAR_2, 0, FUNC_4());

  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  {
   FUNC_1(&VAR_2[VAR_5].lock,
        VAR_3->tranche_id);
   FUNC_0(&VAR_2[VAR_5].origin_cv);
  }
 }

 FUNC_2(VAR_3->tranche_id,
        "replication_origin");
}
